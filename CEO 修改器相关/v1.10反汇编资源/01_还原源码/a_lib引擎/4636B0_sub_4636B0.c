// 函数 0x4636b0  sub_4636B0  size=0x2C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int sub_4636B0()
{
  signed int result; // eax
  int v1; // edx
  int v2; // ecx

  result = GetTickCount() - dword_8DA4E0;
  if ( dword_4CD12C )
  {
    if ( result <= 100 )
      return result;
    return sub_47C930(v2, v1);
  }
  if ( result > 15000 )
    return sub_47C930(v2, v1);
  return result;
}
