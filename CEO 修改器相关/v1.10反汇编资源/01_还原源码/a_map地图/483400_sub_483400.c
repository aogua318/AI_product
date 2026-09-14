// 函数 0x483400  sub_483400  size=0xBB  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_WORD *__thiscall sub_483400(_WORD *this)
{
  sub_46B300(this + 18);
  sub_464D70((_DWORD *)this + 39);
  memset(this, 0, 0xBCu);
  *((_DWORD *)this + 2) = 100;
  *((_DWORD *)this + 3) = 100;
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 16) = 0;
  if ( !dword_8F2AEC )
  {
    dword_8F2AEC = 1;
    dword_8F2AE4 = 1024;
    *(_DWORD *)ArgList = sub_465E40(24576, "a_map\\a_map.cpp", 37);
    dword_8F2AE8 = 0;
  }
  return this;
}
