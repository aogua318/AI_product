// 函数 0x4661b0  sub_4661B0  size=0x33  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_4661B0(_DWORD *this, char *FileName)
{
  BOOL result; // eax

  result = 0;
  if ( !*(this + 3) )
  {
    *(this + 3) = 1;
    *(this + 2) = 0;
    if ( sub_469F90(FileName) )
      return 1;
  }
  return result;
}
