// 函数 0x465fe0  sub_465FE0  size=0x60  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__cdecl sub_465FE0(int ArgList, const char *a2, int a3)
{
  FILE *result; // eax
  int v4; // eax
  int v5; // eax

  if ( dword_8DB840 )
    sub_465BF0(a2, a3);
  result = (FILE *)sub_465EA0(ArgList);
  if ( !result )
  {
    v4 = sub_4658C0(ArgList);
    printf("free fail in %s %d size:%d\n", a2, a3, v4);
    v5 = sub_4658C0(ArgList);
    return sub_4643C0("error!! a_free1(%x,%s,%d) size:%d", ArgList, a2, a3, v5);
  }
  return result;
}
