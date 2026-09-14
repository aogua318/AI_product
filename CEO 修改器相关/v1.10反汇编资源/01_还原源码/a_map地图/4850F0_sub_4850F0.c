// 函数 0x4850f0  sub_4850F0  size=0x2A3  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4850F0(int this, int a2, int a3, int i, int a5, int *a6)
{
  int *v7; // edi
  int *v9; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // edi
  unsigned int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // ebx
  int *v23; // edi
  __int16 *v24; // eax
  int v25; // [esp-14h] [ebp-50h]
  int v26; // [esp-10h] [ebp-4Ch]
  _DWORD v27[4]; // [esp+8h] [ebp-34h] BYREF
  int v28; // [esp+18h] [ebp-24h]
  int v29; // [esp+1Ch] [ebp-20h]
  int v30; // [esp+20h] [ebp-1Ch]
  int v31; // [esp+24h] [ebp-18h]
  int v32; // [esp+28h] [ebp-14h]
  unsigned int v33; // [esp+2Ch] [ebp-10h]
  int v34; // [esp+30h] [ebp-Ch] BYREF
  int v35; // [esp+34h] [ebp-8h] BYREF
  unsigned int v36; // [esp+38h] [ebp-4h] BYREF

  sub_464B60(v27);
  v7 = a6;
  v32 = -1;
  if ( !a6 )
  {
    a6 = &dword_8EEDEC;
    v7 = &dword_8EEDEC;
  }
  sub_464CE0(v27, v7 + 5);
  if ( a2 < *(_DWORD *)this || a3 < *(_DWORD *)(this + 4) || a2 + 1 > *(_DWORD *)this + *(_DWORD *)(this + 8) )
    return -1;
  if ( a3 + 1 > *(_DWORD *)(this + 4) + *(_DWORD *)(this + 12) )
    return -1;
  dword_8F2AD8 = (int)v7;
  v9 = sub_464D00(a2, a3, a2 + 1, a3 + 1);
  sub_4689C0(v7, v9);
  v10 = i * *(_DWORD *)(this + 32);
  v11 = dword_4B8214[2 * *(_DWORD *)(this + 20)];
  v29 = dword_4B8218[2 * *(_DWORD *)(this + 20)];
  v30 = v11;
  sub_484120((_DWORD *)this, a2 - v10, a3 - v10 / 2, &v36, &i);
  sub_484160((_DWORD *)this, v36, i, &v34, &v35);
  v12 = a5 + v10 / 2;
  switch ( *(_DWORD *)(this + 20) )
  {
    case 1:
      v13 = *(_DWORD *)(this + 32);
      v34 += v13;
      goto LABEL_15;
    case 2:
      v35 -= *(_DWORD *)(this + 32);
      break;
    case 3:
      v13 = *(_DWORD *)(this + 32);
      v34 -= v13;
LABEL_15:
      v35 += v13 / -2;
      break;
  }
  v14 = 0;
  dword_8F2AE8 = 0;
  a5 = 0;
  v28 = v12 + a3 + 1;
  if ( v35 < v28 )
  {
    v15 = v10 + a2 + 1;
    v31 = v15;
    while ( 1 )
    {
      v16 = v36;
      v17 = v14 + v34;
      v18 = i;
      v33 = i;
      if ( v14 + v34 < v15 )
      {
        do
        {
          if ( v16 < *(_DWORD *)(this + 24) && v18 < *(_DWORD *)(this + 28) )
          {
            sub_484550(v18, this, v16);
            v15 = v31;
            v18 = v33;
          }
          v18 += v29;
          v16 += v30;
          v17 += 2 * *(_DWORD *)(this + 32);
          v33 = v18;
        }
        while ( v17 < v15 );
        v14 = a5;
      }
      switch ( *(_DWORD *)(this + 20) )
      {
        case 0:
          if ( !v14 )
          {
            a5 = *(_DWORD *)(this + 32);
            goto LABEL_38;
          }
          ++i;
          a5 = 0;
          break;
        case 1:
          if ( v14 )
          {
            --v36;
            a5 = 0;
          }
          else
          {
            v19 = *(_DWORD *)(this + 32);
            ++i;
            a5 = v19;
          }
          break;
        case 2:
          if ( v14 )
          {
            --i;
            a5 = 0;
          }
          else
          {
            v20 = *(_DWORD *)(this + 32);
            --v36;
            a5 = v20;
          }
          break;
        case 3:
          if ( v14 )
          {
            a5 = 0;
LABEL_38:
            ++v36;
          }
          else
          {
            v21 = *(_DWORD *)(this + 32);
            --i;
            a5 = v21;
          }
          break;
        default:
          break;
      }
      v35 += *(_DWORD *)(this + 32) / 2;
      if ( v35 >= v28 )
        break;
      v14 = a5;
    }
  }
  v22 = 0;
  for ( i = 0; i < dword_8F2AE8; ++i )
  {
    v23 = (int *)(v22 + *(_DWORD *)ArgList);
    v26 = *(__int16 *)(v22 + *(_DWORD *)ArgList + 14);
    v25 = *(__int16 *)(v22 + *(_DWORD *)ArgList + 12);
    v24 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v22 + *(_DWORD *)ArgList + 4));
    if ( sub_467130(v24, v25, v26, a2, a3) )
      v32 = *v23;
    v22 += 24;
  }
  sub_4689C0(a6, v27);
  return v32;
}
