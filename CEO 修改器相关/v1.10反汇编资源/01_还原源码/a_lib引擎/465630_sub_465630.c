// 函数 0x465630  sub_465630  size=0x97  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_465630(int *this, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax
  int result; // eax
  int v8; // eax

  sub_464DC0(this);
  v6 = (a2 + 3) & 0xFFFFFFFC;
  *(this + 1) = v6;
  *(this + 3) = a4;
  *(this + 7) = a5;
  result = sub_465E40(a3 * v6, (int)"a_lib\\a_block.cpp", 50);
  *(this + 6) = result;
  if ( result )
  {
    *(this + 2) = a3;
    if ( a3 >= 0x8000 )
    {
      *this = 4;
      v8 = sub_465E40(4 * a3, (int)"a_lib\\a_block.cpp", 60);
    }
    else
    {
      *this = 2;
      v8 = sub_465E40(2 * a3, (int)"a_lib\\a_block.cpp", 57);
    }
    *(this + 5) = v8;
    sub_464D90(this);
    return 1;
  }
  return result;
}
