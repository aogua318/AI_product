// 函数 0x46a2e0  sub_46A2E0  size=0x3C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A2E0(FILE **this, int Offset)
{
  FILE *v3; // ecx

  v3 = *this;
  if ( !v3 )
    return 0;
  if ( *(this + 1) )
  {
    sub_46F310(Offset);
  }
  else if ( fseek(v3, Offset, 0) )
  {
    return 0;
  }
  return 1;
}
