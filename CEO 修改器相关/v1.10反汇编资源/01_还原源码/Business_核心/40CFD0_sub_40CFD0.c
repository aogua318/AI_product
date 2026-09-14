// 函数 0x40cfd0  sub_40CFD0  size=0x235  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40CFD0@<eax>(int *a1@<eax>)
{
  int v1; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // edx
  __int16 *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // [esp+4h] [ebp-10h]
  int v26; // [esp+8h] [ebp-Ch]
  int v27; // [esp+Ch] [ebp-8h]
  int v28; // [esp+10h] [ebp-4h]

  v1 = a1[1];
  v26 = v1;
  if ( v1 < 0 )
    return -1;
  v3 = *a1;
  v27 = *a1;
  if ( *a1 < 0 )
    return -1;
  v4 = a1[2];
  v28 = v4;
  if ( v4 >= dword_4D0E80 )
    return -1;
  v5 = a1[3];
  v25 = v5;
  if ( v5 < dword_4D0E84 )
  {
    if ( v1 > v5 )
    {
LABEL_17:
      if ( v1 - 1 >= 0 )
      {
        if ( v3 > v28 )
          return 2;
        v10 = v3 + (v1 - 1) * dword_4D0E80;
        do
        {
          v11 = *(__int16 *)(dword_4D0EE4 + 2 * (v10 < 0 ? 0 : v10));
          if ( v11 <= 0 )
            break;
          v12 = (unsigned __int16)word_870870[v11];
          if ( v12 == dword_8709EC )
            break;
          if ( v12 == dword_87091C )
            break;
          ++v3;
          ++v10;
        }
        while ( v3 <= v28 );
        if ( v3 > v28 )
          return 2;
        v3 = v27;
      }
      if ( v5 + 1 < dword_4D0E84 )
      {
        if ( v3 > v28 )
          return 0;
        v13 = v3 + (v5 + 1) * dword_4D0E80;
        do
        {
          v14 = *(__int16 *)(dword_4D0EE4 + 2 * (v13 < 0 ? 0 : v13));
          if ( v14 <= 0 )
            break;
          v15 = (unsigned __int16)word_870870[v14];
          if ( v15 == dword_8709EC )
            break;
          if ( v15 == dword_87091C )
            break;
          ++v3;
          ++v13;
        }
        while ( v3 <= v28 );
        if ( v3 > v28 )
          return 0;
        v3 = v27;
      }
      v16 = v3 - 1;
      if ( v3 - 1 >= 0 )
      {
        v17 = v26;
        if ( v26 > v5 )
          return 3;
        v18 = v16 + v26 * dword_4D0E80;
        do
        {
          v19 = *(__int16 *)(dword_4D0EE4 + 2 * (v18 < 0 ? 0 : v18));
          if ( v19 <= 0 )
            break;
          v20 = (unsigned __int16)word_870870[v19];
          if ( v20 == dword_8709EC )
            break;
          if ( v20 == dword_87091C )
            break;
          v18 += dword_4D0E80;
          ++v17;
        }
        while ( v17 <= v5 );
        if ( v17 > v5 )
          return 3;
      }
      if ( v28 + 1 < dword_4D0E80 )
      {
        v21 = v26;
        if ( v26 > v5 )
          return 1;
        v22 = v28 + 1 + v26 * dword_4D0E80;
        do
        {
          v23 = *(__int16 *)(dword_4D0EE4 + 2 * (v22 < 0 ? 0 : v22));
          if ( v23 <= 0 )
            break;
          v24 = (unsigned __int16)word_870870[v23];
          if ( v24 == dword_8709EC )
            break;
          if ( v24 == dword_87091C )
            break;
          v22 += dword_4D0E80;
          ++v21;
        }
        while ( v21 <= v5 );
        if ( v21 > v5 )
          return 1;
      }
    }
    else
    {
      v6 = v1 * dword_4D0E80;
      while ( 1 )
      {
        v7 = v3;
        if ( v3 <= v4 )
          break;
LABEL_15:
        v6 += dword_4D0E80;
        if ( ++v1 > v5 )
        {
          v1 = v26;
          goto LABEL_17;
        }
      }
      v8 = (_DWORD *)(dword_4D0EF4 + 4 * (v6 + v3));
      v9 = (__int16 *)(dword_4D0EE4 + 2 * (v6 + v7));
      while ( *v9 <= 0 && *v8 == -1 )
      {
        ++v7;
        ++v9;
        ++v8;
        if ( v7 > v28 )
        {
          v5 = v25;
          v3 = v27;
          v4 = v28;
          goto LABEL_15;
        }
      }
    }
  }
  return -1;
}
