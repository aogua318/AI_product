// 函数 0x466b00  sub_466B00  size=0x4F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_466B00(int a1, _WORD *a2, int a3)
{
  int v3; // esi
  _WORD *v4; // ecx
  unsigned int result; // eax

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = a2;
    do
    {
      result = ((dword_8DBD10 + (*v4 & 0x3E0u)) >> 1) & 0x3E0;
      *(_WORD *)((char *)v4 + a1 - (_DWORD)a2) = result | ((dword_8DBD14 + (*v4 & 0x7C1Fu)) >> 1) & 0x7C1F;
      ++v4;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
