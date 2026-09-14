// 函数 0x483f40  sub_483F40  size=0x9D  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__thiscall sub_483F40(int *this)
{
  if ( !--dword_8F2AEC )
  {
    if ( *(_DWORD *)ArgList )
      sub_465FE0(*(int *)ArgList, "a_map\\a_map.cpp", 52);
    *(_DWORD *)ArgList = 0;
    dword_8F2AE4 = 0;
    dword_8F2AE8 = 0;
  }
  sub_4834C0(this);
  sub_465620(this + 39);
  return sub_46B310((int)(this + 9));
}
