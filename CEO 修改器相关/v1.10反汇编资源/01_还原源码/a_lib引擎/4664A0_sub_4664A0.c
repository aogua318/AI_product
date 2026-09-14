// 函数 0x4664a0  sub_4664A0  size=0x48  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4664A0(int *this, int a2, int a3, int a4)
{
  if ( *(this + 3) != 1 )
    return 0;
  sub_466260(this, (int)&a3, 4);
  sub_466260(this, (int)&a4, 4);
  sub_466260(this, a2, a4 * a3);
  return 1;
}
