// 函数 0x40eb90  sub_40EB90  size=0x2FE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__thiscall sub_40EB90(int this)
{
  _DWORD *v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  BOOL v9; // eax
  unsigned int v10; // eax
  int *v11; // edx
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // ecx
  _BYTE *v20; // ecx
  int v21; // eax
  int v22; // esi
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v27; // [esp+8h] [ebp-19038h] BYREF
  int v28; // [esp+Ch] [ebp-19034h]
  int v29; // [esp+10h] [ebp-19030h]
  int v30; // [esp+14h] [ebp-1902Ch]
  int v31; // [esp+18h] [ebp-19028h]
  int *v32; // [esp+1Ch] [ebp-19024h]
  int v33; // [esp+20h] [ebp-19020h]
  int v34; // [esp+24h] [ebp-1901Ch]
  unsigned int v35; // [esp+28h] [ebp-19018h]
  int v36; // [esp+2Ch] [ebp-19014h]
  int v37; // [esp+30h] [ebp-19010h]
  int v38; // [esp+34h] [ebp-1900Ch]
  _BYTE *v39; // [esp+38h] [ebp-19008h]
  _BYTE v40[102400]; // [esp+3Ch] [ebp-19004h] BYREF

  sub_464B60(&v27);
  if ( *(_BYTE *)(this + 3) != 3 )
    return 0;
  v37 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(this + 16);
  v3 = (_DWORD *)v37;
  v4 = sub_40CDD0(this);
  sub_464CE0(v4);
  v5 = v3[49];
  dword_4C43B8 = v3[50];
  dword_4C43BC = (int)v40;
  dword_4C43B0 = v5;
  v38 = v28;
  if ( v28 >= v30 )
    goto LABEL_27;
  v6 = v27;
  v7 = v29;
  v39 = &v40[v28 * v5];
  v8 = 4 * (v28 * v5 + v27);
  v31 = v8;
  do
  {
    v36 = v6;
    if ( v6 >= v7 )
      goto LABEL_26;
    v34 = v8;
    do
    {
      v9 = *(_DWORD *)(v34 + v3[35]) != -1;
      v33 = v9;
      if ( !v9 )
        goto LABEL_24;
      v10 = v3[6];
      v11 = dword_4B32D0;
      v32 = dword_4B32D0;
      while ( 1 )
      {
        v12 = *v11;
        v13 = v11[1];
        v14 = v12 + v36 + 2 * v12;
        v15 = v13 + v38 + 2 * v13;
        v35 = v15;
        if ( v14 < v10 && v15 < v3[7] )
          goto LABEL_17;
        v16 = v13 + v38;
        if ( v12 + v36 < v10
          && v16 < *(_DWORD *)(v37 + 28)
          && *(_WORD *)(*(_DWORD *)(v37 + 124) + 2 * (v12 + v36 + v16 * v10)) != 0xFFFF )
        {
          break;
        }
        v15 = v35;
        v17 = v38 + 2 * v13;
        v18 = v36 + 2 * v12;
        v3 = (_DWORD *)v37;
        if ( v18 < v10 && v17 < *(_DWORD *)(v37 + 28) )
        {
          v3 = (_DWORD *)v37;
          if ( *(_WORD *)(*(_DWORD *)(v37 + 124) + 2 * (v18 + v17 * v10)) != 0xFFFF )
            goto LABEL_23;
        }
LABEL_17:
        if ( v14 < v10 && v15 < v3[7] && *(_WORD *)(v3[31] + 2 * (v14 + v15 * v10)) != 0xFFFF )
          goto LABEL_23;
        v11 = v32 + 2;
        v32 = v11;
        if ( (int)v11 >= (int)&dword_4B32F0 )
        {
          LOBYTE(v9) = v33;
          goto LABEL_24;
        }
      }
      v3 = (_DWORD *)v37;
LABEL_23:
      LOBYTE(v9) = 0;
LABEL_24:
      v19 = v36;
      v7 = v29;
      v34 += 4;
      v39[v36] = v9;
      v36 = v19 + 1;
    }
    while ( v19 + 1 < v7 );
    v5 = dword_4C43B0;
    v8 = v31;
    v6 = v27;
LABEL_26:
    ++v38;
    v39 += v5;
    v8 += 4 * v5;
    v31 = v8;
  }
  while ( v38 < v30 );
LABEL_27:
  v20 = 0;
  v21 = dword_4C43B8 - 1;
  v22 = 1;
  v39 = 0;
  v33 = dword_4C43B8 - 1;
  if ( dword_4C43B8 - 1 > 1 )
  {
    v23 = v5 - 1;
    do
    {
      v24 = 1;
      if ( v23 > 1 )
      {
        do
        {
          v25 = sub_40EB40(v24, v22);
          v39 += v25;
          ++v24;
        }
        while ( v24 < v23 );
        v21 = v33;
      }
      ++v22;
    }
    while ( v22 < v21 );
    v20 = v39;
  }
  *(_WORD *)(this + 26) = (_WORD)v20;
  return v20;
}
