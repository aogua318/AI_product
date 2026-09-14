// 函数 0x466780  sub_466780  size=0xB0  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_466780(int *a1, _DWORD *a2, int a3)
{
  int result; // eax
  _DWORD *v4; // esi
  int *v5; // edx
  unsigned int v6; // [esp+8h] [ebp-4h]

  result = a3;
  if ( a3 < 2 )
  {
    v4 = a2;
    v5 = a1;
  }
  else
  {
    v4 = a2;
    v5 = a1;
    v6 = ((unsigned int)(a3 - 1) >> 1) + 1;
    do
    {
      *v5 = (((*v4 & 0x3E003E0) + (*v5 & 0x3E003E0)) >> 1) & 0x3E003E0
          | (((*v4 & 0x7C1F7C1F) + (*v5 & 0x7C1F7C1F)) >> 1) & 0x7C1F7C1F;
      ++v4;
      ++v5;
      --v6;
    }
    while ( v6 );
    result = a3;
  }
  if ( (result & 1) != 0 )
  {
    result = (((*(_WORD *)v4 & 0x3E0) + (*(_WORD *)v5 & 0x3E0)) >> 1) & 0x3E0;
    *(_WORD *)v5 = result | (((*(_WORD *)v4 & 0x7C1F) + (*(_WORD *)v5 & 0x7C1F)) >> 1) & 0x7C1F;
  }
  return result;
}
