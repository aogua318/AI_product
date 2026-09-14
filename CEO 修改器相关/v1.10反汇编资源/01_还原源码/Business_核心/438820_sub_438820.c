// 函数 0x438820  sub_438820  size=0x228  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int *__fastcall sub_438820(unsigned int *a1, _DWORD *a2, int a3, int a4, int a5, int a6, unsigned int *a7)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  unsigned int v14; // eax
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // edi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v25; // [esp+18h] [ebp-24h] BYREF
  int v26; // [esp+1Ch] [ebp-20h]
  unsigned int v27; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v28; // [esp+24h] [ebp-18h] BYREF
  int v29; // [esp+28h] [ebp-14h]
  int v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+30h] [ebp-Ch]
  int v32; // [esp+34h] [ebp-8h]

  if ( (int)abs32(a5 - a3) <= (int)abs32(a6 - a4) )
  {
    v29 = sub_483DE0(a3, a4, a3, a6);
    v7 = sub_483DE0(a3, a4, a5, a4);
  }
  else
  {
    v29 = sub_483DE0(a3, a4, a5, a4);
    v7 = sub_483DE0(a3, a4, a3, a6);
  }
  v9 = v7;
  v30 = v7;
  if ( v29 == -1 )
    v29 = sub_4640D0(v8) % 4;
  if ( v9 == -1 )
  {
    do
    {
      v9 = sub_4640D0(v8) % 4;
      v30 = v9;
    }
    while ( v9 == v29 );
  }
  v10 = v9 + 2;
  v31 = v10;
  if ( v10 >= 4 )
    v31 = v10 - 4;
  v32 = v29 + 2;
  if ( v29 + 2 >= 4 )
    v32 = v29 - 2;
  v11 = 0;
  v26 = 0;
  do
  {
    v12 = *(&v29 + v11);
    v13 = (a4 + dword_4B32D4[2 * v12]) * dword_4D0E80;
    v14 = a3 + dword_4B32D0[2 * v12];
    v28 = a4 + dword_4B32D4[2 * v12];
    v25 = v12;
    v27 = v14;
    if ( *(__int16 *)(dword_4D0EE4 + 2 * (v14 + v13)) > 0 )
      break;
    v11 = v26 + 1;
    v26 = v11;
  }
  while ( v11 < 4 );
  v15 = v12;
  v16 = 0;
  v26 = 0;
  v17 = sub_4640D0(dword_4D0EE4) % 70 + 10;
  if ( v17 > 0 )
  {
    do
    {
      sub_438700(&v27, &v28, &v25);
      if ( v15 != v25 )
      {
        ++v16;
        v15 = v25;
        if ( v16 >= 2 )
          break;
      }
      ++v26;
    }
    while ( v26 < v17 );
  }
  if ( sub_483C00(*(_DWORD *)(dword_4D0EF0 + 4 * (v27 + v28 * dword_4D0E80))) == 1 )
  {
    while ( 1 )
    {
      v18 = v27;
      v19 = v28;
      sub_438700(&v27, &v28, &v25);
      sub_438700(&v27, &v28, &v25);
      v20 = v27;
      v21 = v28;
      if ( v27 == v18 && v28 == v19 )
        break;
      if ( sub_483C00(*(_DWORD *)(dword_4D0EF0 + 4 * (v27 + v28 * dword_4D0E80))) != 1 )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    v20 = v27;
    v21 = v28;
  }
  *a7 = v20;
  *a1 = v21;
  *a2 = v25;
  return a1;
}
