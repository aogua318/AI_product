// 函数 0x45e9a0  sub_45E9A0  size=0x2B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45E9A0()
{
  int result; // eax
  char v1; // cl

  result = dword_8703A0;
  if ( dword_4B1024 != -1 )
  {
    v1 = *(_BYTE *)(dword_4C43DC + dword_4B1024 * dword_4C43C8 + 2);
    if ( v1 != -1 )
      return v1;
  }
  return result;
}
