// 函数 0x433470  sub_433470  size=0x4C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_433470(int this)
{
  if ( sub_483C00(*(_DWORD *)(this + 24)) != 8 || sub_483C30(*(_DWORD *)(this + 24)) != *(__int16 *)(this + 6) )
    return 0;
  sub_4864E0(*(_DWORD *)(this + 24));
  *(_DWORD *)(this + 24) = -1;
  return 1;
}
