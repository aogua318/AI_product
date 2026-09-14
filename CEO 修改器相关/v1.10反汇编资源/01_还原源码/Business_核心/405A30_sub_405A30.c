// 函数 0x405a30  sub_405A30  size=0x404  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_405A30(double *this)
{
  double v1; // st6
  int v2; // esi
  double v3; // st7
  unsigned int v4; // edi
  int v5; // ebx
  double v6; // rt1
  int v7; // ecx
  double v8; // rt2
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double *v13; // ebx
  int v14; // esi
  __int16 *v15; // eax
  char v16; // cl
  _DWORD *v17; // esi
  int v18; // ecx
  double v19; // st7
  double v20; // st6
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  char v27; // al
  int v28; // eax
  int v29; // ecx
  double v30; // st7
  int v31; // eax
  double v32; // st7
  int v33; // esi
  double i; // [esp+8h] [ebp-3Ch]
  double v36; // [esp+10h] [ebp-34h]
  double v37; // [esp+18h] [ebp-2Ch]
  double v38; // [esp+20h] [ebp-24h]
  double v39; // [esp+28h] [ebp-1Ch]
  int v40; // [esp+34h] [ebp-10h]
  int v41; // [esp+38h] [ebp-Ch]

  v1 = 0.0;
  v2 = byte_4CE046;
  v3 = 0.0;
  v39 = 0.0;
  v38 = 0.0;
  v37 = 0.0;
  v4 = byte_4CE046 - 25;
  v5 = 6;
  while ( 1 )
  {
    v7 = v2;
    if ( v2 > 24 )
      v7 = v2 - 8 * (3 * (v4 / 0x18) + 3);
    if ( v7 < 0 )
      v7 += 24 * ((-1 - v7) / 0x18u) + 24;
    v8 = v1;
    v9 = v3;
    v10 = v8;
    v11 = v9 - *(this + v7 + 1455);
    --v2;
    --v4;
    if ( !--v5 )
      break;
    v6 = v11;
    v1 = v10;
    v3 = v6;
  }
  if ( v11 >= v10 )
    v12 = v11 * 1.5;
  else
    v12 = v11 * 0.5;
  v36 = v12;
  v13 = this;
  v14 = 0;
  v40 = 0;
  v41 = 0;
  for ( i = sub_42E710() * *(this + 9) * 6.0; v14 < dword_4C43CC; v41 = ++v14 )
  {
    if ( sub_464E90(v14) )
    {
      v15 = (__int16 *)(dword_4C43DC + v14 * dword_4C43C8);
      if ( *((_BYTE *)v15 + 2) == *(_BYTE *)v13 )
      {
        v16 = *((_BYTE *)v15 + 3);
        if ( v16 >= 4 && v16 <= 6 )
        {
          v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
          v18 = v17[1];
          if ( (*((_DWORD *)v15 + 4) & 0x3FFFFFF) >= v18 )
          {
            v19 = 0.00390625;
            v20 = v39;
          }
          else
          {
            v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
            v19 = 0.00390625;
            v20 = (double)*((int *)dword_870824 + 241)
                * 0.00390625
                * (double)(v18
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 600) * ((*((_DWORD *)v15 + 4) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 4) & 0x3FFFFFF))
                + v39;
            v39 = v20;
          }
          v21 = v17[2];
          if ( (*((_DWORD *)v15 + 6) & 0x3FFFFFF) < v21 )
          {
            v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
            v20 = v20
                + (double)(v21
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 672) * ((*((_DWORD *)v15 + 6) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 6) & 0x3FFFFFF))
                * ((double)*((int *)dword_870824 + 269)
                 * v19);
            v39 = v20;
          }
          v22 = v17[3];
          if ( (*((_DWORD *)v15 + 8) & 0x3FFFFFF) < v22 )
          {
            v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
            v20 = v20
                + (double)(v22
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 168) * ((*((_DWORD *)v15 + 8) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 8) & 0x3FFFFFF))
                * ((double)*((int *)dword_870824 + 73)
                 * v19);
            v39 = v20;
          }
          v23 = v17[4];
          if ( (*((_DWORD *)v15 + 10) & 0x3FFFFFF) < v23 )
          {
            v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
            v20 = v20
                + (double)(v23
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 1104) * ((*((_DWORD *)v15 + 10) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 10) & 0x3FFFFFF))
                * ((double)*((int *)dword_870824 + 437)
                 * v19);
            v39 = v20;
          }
          v24 = v17[5];
          if ( (*((_DWORD *)v15 + 12) & 0x3FFFFFF) < v24 )
          {
            v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
            v20 = v20
                + (double)(v24
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 1032) * ((*((_DWORD *)v15 + 12) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 12) & 0x3FFFFFF))
                * ((double)*((int *)dword_870824 + 409)
                 * v19);
            v39 = v20;
          }
          v25 = v17[6];
          if ( (*((_DWORD *)v15 + 14) & 0x3FFFFFF) < v25 )
          {
            v17 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v15);
            v20 = v20
                + (double)(v25
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 2112) * ((*((_DWORD *)v15 + 14) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 14) & 0x3FFFFFF))
                * ((double)*((int *)dword_870824 + 829)
                 * v19);
            v39 = v20;
          }
          v26 = v17[7];
          if ( (*((_DWORD *)v15 + 16) & 0x3FFFFFF) < v26 )
            v39 = v19
                * (double)*((int *)dword_870824 + 353)
                * (double)(v26
                         - *(_DWORD *)(*(_DWORD *)dword_870814 + 888) * ((*((_DWORD *)v15 + 16) >> 26) & 0xF)
                         - (*((_DWORD *)v15 + 16) & 0x3FFFFFF))
                + v20;
          v14 = v41;
          v13 = this;
        }
        v27 = *((_BYTE *)v15 + 85);
        if ( v27 != -1 )
        {
          v28 = 112 * v27;
          if ( *((_BYTE *)dword_870824 + v28 + 11) )
            v38 = (double)*(int *)(388 * *(__int16 *)((char *)dword_870824 + v28 + 12) + *(_DWORD *)dword_4D0C8C + 8)
                + v38;
        }
      }
      if ( ++v40 >= dword_4C43D4 )
        break;
    }
  }
  v29 = *((__int16 *)v13 + 44);
  if ( v29 != -1 )
  {
    v30 = 0.0;
    do
    {
      v31 = v29 * dword_4CCA98;
      v32 = v30
          + (double)*(int *)(v29 * dword_4CCA98 + dword_4CCAAC + 452)
          + (double)*(int *)(v29 * dword_4CCA98 + dword_4CCAAC + 456);
      v29 = *(__int16 *)(v29 * dword_4CCA98 + dword_4CCAAC + 1618);
      v30 = v32 + (double)*(int *)(dword_4CCAAC + v31 + 460);
    }
    while ( v29 != -1 );
    v37 = v30;
  }
  v33 = *(_DWORD *)dword_4B9910 + 54 * *(char *)v13;
  return (sub_42ED60(v13) + v13[1] - v13[9] - (1.5 * v38 + v39 * 1.5 + i + v36 + v37 * 18.0))
       * 100.0
       / (double)*(__int16 *)(v33 + 50);
}
