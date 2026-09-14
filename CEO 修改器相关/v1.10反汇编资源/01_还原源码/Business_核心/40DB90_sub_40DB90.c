// 函数 0x40db90  sub_40DB90  size=0x89  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40DB90(unsigned int *a1)
{
  unsigned int *v1; // ebx
  signed int v2; // eax
  signed int v3; // esi
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int v6; // eax
  signed int v7; // edi
  int v8; // ecx
  signed int v10; // [esp+Ch] [ebp-4h]

  v1 = a1;
  v2 = a1[3];
  v3 = a1[1];
  v10 = v2;
  if ( v3 > v2 )
    return 1;
  v4 = dword_4D0E80;
  v5 = v3 * dword_4D0E80;
  while ( v3 >= (unsigned int)dword_4D0E84 )
  {
LABEL_11:
    ++v3;
    v5 += v4;
    if ( v3 > v2 )
      return 1;
  }
  v6 = *v1;
  v7 = v1[2];
  if ( (int)*v1 > v7 )
  {
LABEL_10:
    v2 = v10;
    goto LABEL_11;
  }
  while ( v6 >= v4 )
  {
LABEL_9:
    if ( (int)++v6 > v7 )
      goto LABEL_10;
  }
  v8 = (unsigned __int16)word_870870[*(__int16 *)(dword_4D0EE0 + 2 * (v5 + v6))];
  if ( v8 != dword_8709EC && v8 != dword_87091C )
  {
    v1 = a1;
    v4 = dword_4D0E80;
    goto LABEL_9;
  }
  return 0;
}
