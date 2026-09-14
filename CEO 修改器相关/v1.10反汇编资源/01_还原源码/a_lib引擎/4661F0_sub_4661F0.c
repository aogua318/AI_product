// 函数 0x4661f0  sub_4661F0  size=0x38  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4661F0(_DWORD *this, char *FileName)
{
  if ( *(this + 3) || !sub_46A040(FileName) )
    return 0;
  *(this + 3) = 2;
  *(this + 2) = 0;
  return 1;
}
