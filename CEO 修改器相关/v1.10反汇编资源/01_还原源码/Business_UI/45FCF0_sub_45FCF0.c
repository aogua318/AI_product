// 函数 0x45fcf0  sub_45FCF0  size=0x3A  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45FCF0(int a1, int a2)
{
  int result; // eax

  if ( a2 )
  {
    result = a2 - 1;
    if ( a2 == 1 )
      return sub_45FF20(0, -1);
  }
  else
  {
    result = dword_4B38B8;
    if ( dword_4B38B8 != -1 )
      return sub_433470(dword_870840 + dword_4B38B8 * dword_87082C);
  }
  return result;
}
