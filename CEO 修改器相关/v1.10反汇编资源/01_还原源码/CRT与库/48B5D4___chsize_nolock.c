// 函数 0x48b5d4  __chsize_nolock  size=0x1B6  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _chsize_nolock(int FileHandle, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax
  int v4; // edi
  unsigned int v5; // esi
  HANDLE ProcessHeap; // eax
  DWORD v8; // eax
  int v9; // eax
  bool v10; // of
  unsigned int v11; // kr08_4
  int v12; // esi
  HANDLE v13; // eax
  int v14; // eax
  int v15; // edx
  void *osfhandle; // eax
  unsigned int *v17; // esi
  int v18; // eax
  int v19; // edx
  int v20; // [esp+Ch] [ebp-18h]
  int v21; // [esp+10h] [ebp-14h]
  __int64 v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+1Ch] [ebp-8h]
  void *lpMem; // [esp+20h] [ebp-4h]

  HIDWORD(v22) = 0;
  v20 = _lseeki64_nolock(FileHandle, 0, 0, 1u);
  v21 = v2;
  if ( (v2 & v20) == 0xFFFFFFFF )
    return *_errno();
  LODWORD(v3) = _lseeki64_nolock(FileHandle, 0, 0, 2u);
  if ( (HIDWORD(v3) & (unsigned int)v3) == 0xFFFFFFFF )
    return *_errno();
  v4 = (unsigned __int64)(a2 - v3) >> 32;
  v5 = a2 - v3;
  if ( v4 >= 0 && (a2 >= v3 && (unsigned __int64)(a2 - v3) >> 32 != 0 || v5) )
  {
    ProcessHeap = GetProcessHeap();
    lpMem = HeapAlloc(ProcessHeap, 8u, 0x1000u);
    if ( !lpMem )
    {
      *_errno() = 12;
      return *_errno();
    }
    v23 = _setmode_nolock(FileHandle, 0x8000);
    while ( 1 )
    {
      v8 = v4 < 0 || v4 <= 0 && v5 < 0x1000 ? v5 : 4096;
      v9 = _write_nolock(FileHandle, (int)lpMem, v8);
      if ( v9 == -1 )
        break;
      v10 = __OFSUB__(__PAIR64__(v4, v5), v9);
      v11 = v5 - v9;
      v4 = (__PAIR64__(v4, v5) - v9) >> 32;
      v5 -= v9;
      if ( v4 < 0 || (v4 < 0) ^ v10 | (v4 == 0) && !v11 )
      {
        v12 = 0;
        goto LABEL_20;
      }
    }
    if ( *__doserrno() == 5 )
      *_errno() = 13;
    v12 = -1;
    HIDWORD(v22) = -1;
LABEL_20:
    _setmode_nolock(FileHandle, v23);
    v13 = GetProcessHeap();
    HeapFree(v13, 0, lpMem);
    goto LABEL_28;
  }
  if ( v4 < 0 )
  {
    v14 = _lseeki64_nolock(FileHandle, a2, SHIDWORD(a2), 0);
    if ( (v15 & v14) == 0xFFFFFFFF )
      return *_errno();
    osfhandle = (void *)_get_osfhandle(FileHandle);
    v22 = SetEndOfFile(osfhandle) - 1;
    if ( (HIDWORD(v22) & (unsigned int)v22) == 0xFFFFFFFF )
    {
      *_errno() = 13;
      v17 = __doserrno();
      *v17 = GetLastError();
      v12 = v22;
LABEL_28:
      if ( (HIDWORD(v22) & v12) == 0xFFFFFFFF )
        return *_errno();
    }
  }
  v18 = _lseeki64_nolock(FileHandle, v20, v21, 0);
  if ( (v19 & v18) == 0xFFFFFFFF )
    return *_errno();
  return 0;
}
