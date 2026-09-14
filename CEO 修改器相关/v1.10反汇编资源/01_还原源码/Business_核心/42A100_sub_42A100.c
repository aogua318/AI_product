// 函数 0x42a100  sub_42A100  size=0xA7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42A100(char *this, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = 0;
  if ( *(this + 28) > 0 )
    v2 = *(this + 28);
  if ( *(this + 29) > v2 )
    v2 = *(this + 29);
  if ( *(this + 30) > v2 )
    v2 = *(this + 30);
  if ( *(this + 31) > v2 )
    v2 = *(this + 31);
  if ( *(this + 48) > v2 )
    v2 = *(this + 48);
  if ( *(this + 49) > v2 )
    v2 = *(this + 49);
  if ( *(this + 50) > v2 )
    v2 = *(this + 50);
  if ( *(this + 51) > v2 )
    v2 = *(this + 51);
  if ( *(this + 52) > v2 )
    v2 = *(this + 52);
  if ( *(this + 53) > v2 )
    v2 = *(this + 53);
  if ( *(this + 54) > v2 )
    v2 = *(this + 54);
  if ( *(this + 55) > v2 )
    v2 = *(this + 55);
  result = v2 * *((__int16 *)this + a2 + 40) / 10;
  if ( result < 1 )
    return 1;
  return result;
}
