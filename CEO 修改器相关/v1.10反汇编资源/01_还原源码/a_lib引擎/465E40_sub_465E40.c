// 函数 0x465e40  sub_465E40  size=0x58  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl sub_465E40(int ArgList, const char *a2, int a3)
{
  _DWORD *v3; // esi

  v3 = sub_465CF0(ArgList);
  if ( !v3 )
  {
    printf("alloc fail in %s %d\n", a2, a3);
    sub_4643C0("error!! a_alloc(%d,%s,%d)", ArgList, a2, a3);
  }
  if ( dword_8DB840 )
    sub_4659B0((int)v3, a2, a3);
  return v3;
}
