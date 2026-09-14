// 函数 0x434400  sub_434400  size=0x2B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_434400()
{
  int result; // eax

  result = dword_4B32C0;
  if ( dword_4B32C0 != -1 )
  {
    result = sub_4864E0(dword_4B32C0);
    dword_4B32C0 = -1;
    dword_4B1010 = -1;
  }
  return result;
}
