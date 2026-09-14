// 函数 0x46d8a0  sub_46D8A0  size=0x4CA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46D8A0(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  char *v10; // ebx
  int v11; // ecx
  char v12; // al
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // esi
  int v18; // edx
  __int16 *v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  __int16 *v24; // edx
  int v25; // edi
  int v26; // edx
  char *v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // ecx
  int v31; // eax
  char v32; // dl
  int v33; // eax
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // eax
  int v38; // [esp+14h] [ebp-24h]
  int v39; // [esp+18h] [ebp-20h]
  int v40; // [esp+1Ch] [ebp-1Ch]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int Src; // [esp+20h] [ebp-18h] BYREF
  int v43; // [esp+24h] [ebp-14h]
  int v44; // [esp+28h] [ebp-10h]
  int v45; // [esp+34h] [ebp-4h]
  int v46; // [esp+40h] [ebp+8h]

  if ( a1[3] != 16 )
    return 0;
  if ( a5 )
  {
    if ( (dword_8DBDDC & 1) == 0 )
    {
      dword_8DBDDC |= 1u;
      sub_464A40(dword_8DBDD4);
      atexit(sub_4A1050);
      v45 = -1;
    }
    sub_464A60(dword_8DBDD4, ".", 0xFFFFFFFF, 0, 0);
    v6 = a1[6];
    v7 = a1[7];
    v44 = a1[5];
    v8 = a1[8];
    dword_8DBDB8 = (int)a1;
    v38 = v8;
    v9 = a4[1];
    v43 = v7;
    v46 = v6;
    v39 = *a4;
    dword_8DBDCC = 0;
    dword_8DBDC8 = sub_46DE50(3 * v9);
    dword_8DBDBC = a2;
    v10 = (char *)(a4 + 2);
    dword_8DBDC0 = (int)(a4 + 2);
    dword_8DBDD0 = a3;
    dword_8DBDB0 = 0;
    dword_8DBDC4 = sub_46DDB0(8 * v39 + 80);
    if ( a4 + 2 < (_DWORD *)((char *)a4 + a5) )
    {
      while ( 1 )
      {
        v11 = dword_8DBDB0;
        if ( dword_8DBDB0 >= v39 )
          goto LABEL_59;
        v12 = *v10;
        v13 = *v10++ & 0xC0;
        if ( v13 == 64 )
        {
          if ( (v12 & 0x20) != 0 )
          {
            v14 = (unsigned __int8)*v10++;
            v15 = ((v12 & 0xF) << 8) | v14;
            if ( (v12 & 8) != 0 )
              v15 |= 0xFFFFF000;
          }
          else
          {
            v15 = v12 & 0xF;
          }
          v16 = v15 + 1;
          if ( (v12 & 0x10) != 0 )
          {
            dword_8DBDD0 += v16;
            if ( dword_8DBDD0 >= v38 )
              goto LABEL_59;
          }
          else
          {
            dword_8DBDBC += v16;
          }
          goto LABEL_58;
        }
        v17 = (v12 & 0x3F) + 1;
        if ( !v13 )
          break;
        if ( v13 == 128 )
        {
          v25 = dword_8DBDC4;
          Src = 0;
          LOWORD(Src) = *(_WORD *)v10;
          v26 = dword_8DBDCC;
          BYTE2(Src) = v10[2];
          v27 = (char *)(dword_8DBDCC + dword_8DBDC8 + 2 * dword_8DBDCC);
          *(_DWORD *)(dword_8DBDC4 + 8 * dword_8DBDB0) = v27;
          *(_WORD *)(v25 + 8 * v11 + 4) = v17;
          dword_8DBDB0 = v11 + 1;
          v10 += 3;
          dword_8DBDB4 = (int)v27;
          dword_8DBDCC = v17 + v26;
          sub_465980(v27, &Src, 3u, v17);
          v28 = dword_8DBDD0;
          if ( dword_8DBDD0 < v46 || dword_8DBDBC < v44 || (v29 = dword_8DBDBC + v17, dword_8DBDBC + v17 >= v43) )
          {
            v30 = dword_8DBDBC;
            dword_8DBDBC += v17;
            if ( dword_8DBDD0 >= v46 )
            {
              if ( v30 < v44 )
              {
                v31 = v44 - v30;
                v30 = v44;
                v17 -= v31;
                dword_8DBDB4 += v31 + 2 * v31;
                v28 = dword_8DBDD0;
              }
              if ( v17 > 0 )
              {
                if ( v30 + v17 >= v43 )
                  v17 = v43 - v30;
                if ( v17 > 0 )
                  sub_468480(
                    (__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDB8 + 40) + 4 * v28) + 2 * v30),
                    (__int16 *)dword_8DBDB4,
                    v17);
              }
            }
          }
          else
          {
            sub_468480(
              (__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDB8 + 40) + 4 * dword_8DBDD0) + 2 * dword_8DBDBC),
              (__int16 *)dword_8DBDB4,
              v17);
            dword_8DBDBC = v29;
          }
          goto LABEL_58;
        }
        if ( v13 == 192 )
        {
          v32 = *v10;
          v41 = ((unsigned __int8)*v10 >> 1) & 0x3F;
          v33 = (unsigned __int8)v10[1] | ((*v10 & 1) << 8);
          v10 += 2;
          if ( v32 < 0 )
            v33 = (unsigned __int8)*v10++ | (v33 << 8);
          v34 = dword_8DBDCC;
          dword_8DBDCC += v17;
          v19 = (__int16 *)(v34 + dword_8DBDC8 + 2 * v34);
          v35 = dword_8DBDC4;
          *(_DWORD *)(dword_8DBDC4 + 8 * dword_8DBDB0) = v19;
          *(_WORD *)(v35 + 8 * v11 + 4) = v17;
          dword_8DBDB0 = v11 + 1;
          dword_8DBDB4 = (int)v19;
          sub_46D830(v11 - v33, v41, v17);
          v20 = dword_8DBDD0;
          v21 = dword_8DBDBC;
          if ( dword_8DBDD0 < v46 || dword_8DBDBC < v44 || (v40 = dword_8DBDBC + v17, dword_8DBDBC + v17 >= v43) )
          {
            v36 = dword_8DBDBC;
            dword_8DBDBC += v17;
            if ( dword_8DBDD0 < v46 )
              goto LABEL_58;
            if ( v36 < v44 )
            {
              v37 = v44 - v36;
              v36 = v44;
              v17 -= v37;
              v19 = (__int16 *)((char *)v19 + 2 * v37 + v37);
            }
            if ( v17 <= 0 )
              goto LABEL_58;
            if ( v36 + v17 >= v43 )
              v17 = v43 - v36;
            if ( v17 <= 0 )
              goto LABEL_58;
            v24 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDB8 + 40) + 4 * dword_8DBDD0) + 2 * v36);
            dword_8DBDB4 = (int)v24;
LABEL_57:
            sub_468480(v24, v19, v17);
            goto LABEL_58;
          }
          goto LABEL_21;
        }
LABEL_58:
        if ( v10 >= (char *)a4 + a5 )
          goto LABEL_59;
      }
      v18 = dword_8DBDC4;
      v19 = (__int16 *)(dword_8DBDCC + dword_8DBDC8 + 2 * dword_8DBDCC);
      dword_8DBDCC += v17;
      *(_DWORD *)(dword_8DBDC4 + 8 * dword_8DBDB0) = v19;
      *(_WORD *)(v18 + 8 * v11 + 4) = v17;
      dword_8DBDB4 = (int)v19;
      dword_8DBDB0 = v11 + 1;
      memcpy(v19, v10, 3 * v17);
      v20 = dword_8DBDD0;
      v10 += 3 * v17;
      v21 = dword_8DBDBC;
      if ( dword_8DBDD0 < v46 || dword_8DBDBC < v44 || (v40 = dword_8DBDBC + v17, dword_8DBDBC + v17 >= v43) )
      {
        v22 = dword_8DBDBC;
        dword_8DBDBC += v17;
        if ( dword_8DBDD0 < v46 )
          goto LABEL_58;
        if ( v22 < v44 )
        {
          v23 = v44 - v22;
          v19 = (__int16 *)((char *)v19 + 2 * v23 + v23);
          v22 = v44;
          v17 -= v23;
          dword_8DBDB4 = (int)v19;
        }
        if ( v17 <= 0 )
          goto LABEL_58;
        if ( v22 + v17 >= v43 )
          v17 = v43 - v22;
        if ( v17 <= 0 )
          goto LABEL_58;
        v24 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDB8 + 40) + 4 * dword_8DBDD0) + 2 * v22);
        goto LABEL_57;
      }
LABEL_21:
      sub_468480((__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDB8 + 40) + 4 * v20) + 2 * v21), v19, v17);
      dword_8DBDBC = v40;
      goto LABEL_58;
    }
LABEL_59:
    sub_464B40(dword_8DBDD4);
  }
  return 1;
}
