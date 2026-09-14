// 函数 0x433320  sub_433320  size=0x14F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433320(int a1, int a2, unsigned int *a3, unsigned int *a4, int *a5)
{
  int v5; // edx
  int *v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // edx
  int i; // edx
  unsigned int v13; // esi
  unsigned int v14; // ebx
  int v15; // edi
  bool v16; // zf
  signed int v17; // eax
  unsigned int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]

  v5 = 0;
  v19 = 0;
LABEL_2:
  v6 = dword_4B32D4;
  while ( 1 )
  {
    v7 = a1 + v5 * *(v6 - 1);
    v8 = a2 + v5 * *v6;
    if ( v7 >= dword_4D0E80 || v8 >= dword_4D0E84 )
      goto LABEL_9;
    if ( *(__int16 *)(dword_4D0EE4 + 2 * ((int)(v7 + v8 * dword_4D0E80) < 0 ? 0 : v7 + v8 * dword_4D0E80)) > 0 )
    {
      v9 = *(__int16 *)(dword_4D0EE0 + 2 * (a2 * dword_4D0E80 + a1 < 0 ? 0 : a2 * dword_4D0E80 + a1));
      v10 = (unsigned __int16)word_870870[v9 < 0 ? 0 : v9];
      if ( v10 != dword_8709EC && v10 != dword_87091C )
        break;
    }
    v5 = v19;
LABEL_9:
    v6 += 2;
    if ( (int)v6 >= (int)dword_4B32F4 )
    {
      v19 = ++v5;
      if ( v5 < 100 )
        goto LABEL_2;
      return 0;
    }
  }
  v18 = v8;
  for ( i = 0; i < 4; ++i )
  {
    v13 = v7 + dword_4B32D0[2 * i];
    v14 = v18 + dword_4B32D4[2 * i];
    if ( v13 < dword_4D0E80 && v14 < dword_4D0E84 )
    {
      v8 = dword_4D0EE4;
      if ( *(__int16 *)(dword_4D0EE4 + 2 * (v13 + v14 * dword_4D0E80)) > 0 )
        break;
    }
  }
  if ( i == 4 )
    return 0;
  v15 = i;
  if ( i > 3 )
    v15 = i - 4;
  v17 = sub_4640D0(v8) & 0x80000001;
  v16 = v17 == 0;
  if ( v17 < 0 )
    v16 = (((_BYTE)v17 - 1) | 0xFFFFFFFE) == -1;
  if ( !v16 )
    v15 = v15 - 2 + (v15 - 2 < 0 ? 4 : 0);
  *a3 = v13;
  *a4 = v14;
  *a5 = v15;
  return 1;
}
