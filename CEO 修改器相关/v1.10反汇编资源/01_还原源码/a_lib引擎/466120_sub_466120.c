// 函数 0x466120  sub_466120  size=0x63  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl sub_466120(int ArgList, int a2, const char *a3, int a4)
{
  _DWORD *v4; // esi

  v4 = sub_466040(ArgList, a2);
  if ( !v4 )
  {
    printf("realloc fail in %s %d\n", a3, a4);
    sub_4643C0("error!! a_realloc1(%x,%d,%s,%d)", ArgList, a2, a3, a4);
  }
  if ( dword_8DB840 )
    sub_465B20(ArgList, (int)v4, a3, a4);
  return v4;
}
