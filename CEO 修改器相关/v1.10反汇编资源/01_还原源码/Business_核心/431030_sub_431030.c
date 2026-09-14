// 函数 0x431030  sub_431030  size=0x24  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_431030(_WORD *this)
{
  int result; // eax

  result = *(this + 8) != 0xFFFF;
  if ( *(this + 9) != 0xFFFF )
    ++result;
  if ( *(this + 10) != 0xFFFF )
    ++result;
  if ( *(this + 11) != 0xFFFF )
    ++result;
  return result;
}
