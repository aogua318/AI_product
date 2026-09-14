// 函数 0x47e540  sub_47E540  size=0x49  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E540(int this)
{
  char v1; // dl
  int result; // eax

  v1 = *(_BYTE *)(this + 9);
  if ( (v1 & 1) == 0 )
    return *(__int16 *)(this + 22);
  if ( (v1 & 8) != 0 && (v1 & 4) != 0 )
  {
    result = *(__int16 *)(this + 18);
  }
  else if ( (v1 & 2) != 0 )
  {
    result = *(__int16 *)(this + 20);
  }
  else if ( (v1 & 8) != 0 || (v1 & 4) == 0 )
  {
    result = *(__int16 *)(this + 14);
  }
  else
  {
    result = *(__int16 *)(this + 16);
  }
  if ( result == -1 )
    return *(__int16 *)(this + 14);
  return result;
}
