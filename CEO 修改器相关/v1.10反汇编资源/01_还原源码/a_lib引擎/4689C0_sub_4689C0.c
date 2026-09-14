// 函数 0x4689c0  sub_4689C0  size=0x63  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4689C0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  if ( a2 )
  {
    *(this + 5) = *a2;
    *(this + 6) = a2[1];
    *(this + 7) = a2[2];
    *(this + 8) = a2[3];
    if ( (int)*(this + 5) < 0 )
      *(this + 5) = 0;
    if ( (int)*(this + 6) < 0 )
      *(this + 6) = 0;
    if ( *(this + 7) > *this )
      *(this + 7) = *this;
    result = *(this + 1);
    if ( *(this + 8) > result )
      *(this + 8) = result;
  }
  else
  {
    result = *(this + 1);
    *(this + 5) = 0;
    *(this + 6) = 0;
    *(this + 7) = *this;
    *(this + 8) = result;
  }
  return result;
}
