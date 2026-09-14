#!/bin/bash
# v1.10 批量反编译驱动器: 分批执行, worker 崩溃时重开会话
PY="D:\\demoapp\\python\\python313\\python.exe"
SCRIPT="D:/game/CEO/CEO 修改器相关/v1.10反汇编资源/03_分析数据/脚本/bulk_decompile.py"
cd /d/game/CEO/work
SESSION="$1"
LAST=-1
STALL=0
for run in $(seq 1 80); do
  OUT=$("$PY" -c "
import mcp_call
try:
    print(mcp_call.call('py_exec_file', {'file_path': r'''$SCRIPT''', 'database': '$SESSION'}, timeout=570).strip()[-200:])
except Exception as e:
    print('WORKER_ERR:', str(e)[:80])
" 2>&1 | tail -1)
  echo "run $run: $OUT"
  if echo "$OUT" | grep -q "PROGRESS"; then
    CUR=$(echo "$OUT" | sed 's/.*PROGRESS \([0-9]*\)\/.*/\1/')
    TOTAL=$(echo "$OUT" | sed 's/.*\/\([0-9]*\) failed.*/\1/')
    if [ "$CUR" = "$LAST" ]; then
      STALL=$((STALL+1))
      if [ $STALL -ge 3 ]; then
        echo "  跳过无法反编译的函数 (index $CUR)"
        "$PY" -c "
import json
st = json.load(open(r'D:/game/CEO/CEO 修改器相关/v1.10反汇编资源/03_分析数据/decompile_progress.json', encoding='utf-8'))
bad = {'addrs': []}
import os
bp = r'D:/game/CEO/CEO 修改器相关/v1.10反汇编资源/03_分析数据/decompile_blacklist.json'
if os.path.exists(bp): bad = json.load(open(bp, encoding='utf-8'))
i = st['done']
if i < len(st['funcs']):
    a = st['funcs'][i]['addr']
    if a not in bad['addrs']:
        bad['addrs'].append(a); print('blacklist', a, st['funcs'][i]['name'])
    st['done'] = i + 1
json.dump(bad, open(bp, 'w'))
json.dump(st, open(r'D:/game/CEO/CEO 修改器相关/v1.10反汇编资源/03_分析数据/decompile_progress.json', 'w'))
"
        STALL=0
      fi
    else
      STALL=0; LAST=$CUR
    fi
    if [ "$CUR" -ge "$TOTAL" ]; then echo "DONE"; break; fi
  else
    echo "  重开会话..."
    SESSION=$(powershell -NoProfile -ExecutionPolicy Bypass -Command "\$env:IDADIR='D:\demoapp\IDA9.3'; & 'D:\game\CEO\.zcode\skills\reverse-skill\skills\ida-reverse\scripts\open.ps1' -Path 'C:\rs-ida\11e60a57-CEO.exe.i64' -TimeoutSeconds 600" 2>&1 | grep "^OK:" | tail -1 | sed 's/.*\.i64://; s/ .*//')
    echo "  新会话: $SESSION"
    if [ -z "$SESSION" ]; then echo "FATAL"; break; fi
    STALL=0
  fi
done
