// 函数 0x489ea6  sub_489EA6  size=0x21  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

struct type_info *__thiscall sub_489EA6(struct type_info *this, char a2)
{
  sub_489E96(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
