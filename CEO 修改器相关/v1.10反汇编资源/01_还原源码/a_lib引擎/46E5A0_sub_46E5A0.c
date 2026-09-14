// 函数 0x46e5a0  sub_46E5A0  size=0x4CA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46E5A0(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5, void (__cdecl *a6)(int, int, int))
{
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  char *v12; // edi
  int v13; // ecx
  char v14; // al
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // esi
  int v20; // edx
  char *v21; // ebx
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ebx
  int v28; // edx
  char *v29; // eax
  int v30; // eax
  int v31; // ecx
  char v32; // cl
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  char *v40; // [esp+10h] [ebp-28h]
  int v41; // [esp+14h] [ebp-24h]
  int v42; // [esp+18h] [ebp-20h]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int Src; // [esp+20h] [ebp-18h] BYREF
  int v45; // [esp+24h] [ebp-14h]
  int v46; // [esp+28h] [ebp-10h]
  int v47; // [esp+34h] [ebp-4h]
  int v48; // [esp+40h] [ebp+8h]
  int v49; // [esp+50h] [ebp+18h]

  v46 = a1[3] / 8;
  if ( a5 )
  {
    if ( (dword_8DBE48 & 1) == 0 )
    {
      dword_8DBE48 |= 1u;
      sub_464A40(dword_8DBE40);
      atexit(sub_4A1070);
      v47 = -1;
    }
    sub_464A60(dword_8DBE40, ".", 0xFFFFFFFF, 0, 0);
    v8 = a1[6];
    v9 = a1[7];
    v48 = a1[5];
    v10 = a1[8];
    dword_8DBE24 = (int)a1;
    v42 = v10;
    v11 = a4[1];
    v49 = v9;
    v45 = v8;
    v43 = *a4;
    dword_8DBE38 = 0;
    dword_8DBE34 = sub_46DE50(3 * v11 + 2048);
    dword_8DBE28 = a2;
    v12 = (char *)(a4 + 2);
    dword_8DBE2C = (int)(a4 + 2);
    dword_8DBE3C = a3;
    dword_8DBE1C = 0;
    dword_8DBE30 = sub_46DDB0(8 * v43 + 80);
    v40 = (char *)a4 + a5;
    if ( a4 + 2 < (_DWORD *)((char *)a4 + a5) )
    {
      while ( 1 )
      {
        v13 = dword_8DBE1C;
        if ( dword_8DBE1C >= v43 )
          goto LABEL_57;
        v14 = *v12;
        v15 = *v12++ & 0xC0;
        if ( v15 == 64 )
        {
          if ( (v14 & 0x20) != 0 )
          {
            v16 = (unsigned __int8)*v12++;
            v17 = ((v14 & 0xF) << 8) | v16;
            if ( (v14 & 8) != 0 )
              v17 |= 0xFFFFF000;
          }
          else
          {
            v17 = v14 & 0xF;
          }
          v18 = v17 + 1;
          if ( (v14 & 0x10) != 0 )
          {
            dword_8DBE3C += v18;
            if ( dword_8DBE3C >= v42 )
              goto LABEL_57;
          }
          else
          {
            dword_8DBE28 += v18;
          }
          goto LABEL_56;
        }
        v19 = (v14 & 0x3F) + 1;
        if ( !v15 )
          break;
        if ( v15 == 128 )
        {
          v27 = dword_8DBE30;
          Src = 0;
          LOWORD(Src) = *(_WORD *)v12;
          BYTE2(Src) = v12[2];
          v28 = dword_8DBE38;
          v29 = (char *)(dword_8DBE38 + dword_8DBE34 + 2 * dword_8DBE38);
          *(_DWORD *)(dword_8DBE30 + 8 * dword_8DBE1C) = v29;
          *(_WORD *)(v27 + 8 * v13 + 4) = v19;
          dword_8DBE1C = v13 + 1;
          v12 += 3;
          dword_8DBE20 = (int)v29;
          dword_8DBE38 = v19 + v28;
          sub_465980(v29, &Src, 3u, v19);
          if ( dword_8DBE3C < v45 || dword_8DBE28 < v48 || dword_8DBE28 + v19 >= v49 )
          {
            v30 = dword_8DBE28;
            dword_8DBE28 += v19;
            if ( dword_8DBE3C >= v45 )
            {
              if ( v30 < v48 )
              {
                v31 = v48 - v30;
                v30 = v48;
                v19 -= v31;
                dword_8DBE20 += v31 + 2 * v31;
              }
              if ( v19 > 0 )
              {
                if ( v30 + v19 >= v49 )
                  v19 = v49 - v30;
                if ( v19 > 0 )
                  a6(*(_DWORD *)(*(_DWORD *)(dword_8DBE24 + 40) + 4 * dword_8DBE3C) + v46 * v30, dword_8DBE20, v19);
              }
            }
          }
          else
          {
            a6(*(_DWORD *)(*(_DWORD *)(dword_8DBE24 + 40) + 4 * dword_8DBE3C) + v46 * dword_8DBE28, dword_8DBE20, v19);
            dword_8DBE28 += v19;
          }
          goto LABEL_56;
        }
        if ( v15 == 192 )
        {
          v32 = *v12;
          v41 = ((unsigned __int8)*v12 >> 1) & 0x3F;
          v33 = (unsigned __int8)v12[1] | ((*v12 & 1) << 8);
          v12 += 2;
          if ( v32 < 0 )
            v33 = (unsigned __int8)*v12++ | (v33 << 8);
          v34 = dword_8DBE38;
          dword_8DBE38 += v19;
          v35 = dword_8DBE30;
          v21 = (char *)(v34 + dword_8DBE34 + 2 * v34);
          v36 = dword_8DBE1C;
          *(_DWORD *)(dword_8DBE30 + 8 * dword_8DBE1C) = v21;
          *(_WORD *)(v35 + 8 * v36 + 4) = v19;
          dword_8DBE1C = v36 + 1;
          dword_8DBE20 = (int)v21;
          sub_46E530(v36 - v33, v41, v19);
          v22 = dword_8DBE3C;
          v23 = dword_8DBE28;
          if ( dword_8DBE3C < v45 || dword_8DBE28 < v48 || dword_8DBE28 + v19 >= v49 )
          {
            v37 = dword_8DBE28;
            dword_8DBE28 += v19;
            if ( dword_8DBE3C < v45 )
              goto LABEL_56;
            if ( v37 < v48 )
            {
              v38 = v48 - v37;
              v37 = v48;
              v19 -= v38;
              v21 += 2 * v38 + v38;
            }
            if ( v19 <= 0 )
              goto LABEL_56;
            if ( v37 + v19 >= v49 )
              v19 = v49 - v37;
            if ( v19 <= 0 )
              goto LABEL_56;
            v26 = *(_DWORD *)(*(_DWORD *)(dword_8DBE24 + 40) + 4 * dword_8DBE3C) + v46 * v37;
            dword_8DBE20 = v26;
LABEL_55:
            a6(v26, (int)v21, v19);
            goto LABEL_56;
          }
          goto LABEL_46;
        }
LABEL_56:
        if ( v12 >= v40 )
          goto LABEL_57;
      }
      v20 = dword_8DBE30;
      v21 = (char *)(dword_8DBE38 + dword_8DBE34 + 2 * dword_8DBE38);
      dword_8DBE38 += v19;
      *(_DWORD *)(dword_8DBE30 + 8 * dword_8DBE1C) = v21;
      *(_WORD *)(v20 + 8 * v13 + 4) = v19;
      dword_8DBE20 = (int)v21;
      dword_8DBE1C = v13 + 1;
      memcpy(v21, v12, 3 * v19);
      v22 = dword_8DBE3C;
      v23 = dword_8DBE28;
      v12 += 3 * v19;
      if ( dword_8DBE3C < v45 || dword_8DBE28 < v48 || dword_8DBE28 + v19 >= v49 )
      {
        v24 = dword_8DBE28;
        dword_8DBE28 += v19;
        if ( dword_8DBE3C < v45 )
          goto LABEL_56;
        if ( v24 < v48 )
        {
          v25 = v48 - v24;
          v21 += 2 * v25 + v25;
          v24 = v48;
          v19 -= v25;
          dword_8DBE20 = (int)v21;
        }
        if ( v19 <= 0 )
          goto LABEL_56;
        if ( v24 + v19 >= v49 )
          v19 = v49 - v24;
        if ( v19 <= 0 )
          goto LABEL_56;
        v26 = *(_DWORD *)(*(_DWORD *)(dword_8DBE24 + 40) + 4 * dword_8DBE3C) + v46 * v24;
        goto LABEL_55;
      }
LABEL_46:
      a6(*(_DWORD *)(*(_DWORD *)(dword_8DBE24 + 40) + 4 * v22) + v46 * v23, (int)v21, v19);
      dword_8DBE28 += v19;
      goto LABEL_56;
    }
LABEL_57:
    sub_464B40(dword_8DBE40);
  }
  return 1;
}
