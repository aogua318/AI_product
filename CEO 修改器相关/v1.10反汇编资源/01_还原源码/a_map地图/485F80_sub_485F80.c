// 函数 0x485f80  sub_485F80  size=0x58  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_485F80(int *this, int a2, int a3)
{
  int result; // eax
  int v5; // edx
  bool v6; // zf
  int *v7; // eax

  sub_484060(this, a2, a3, &a3, &a2);
  result = *(this + 3) / 2;
  v5 = a2 - result;
  v6 = *(this + 16) == 0;
  *(this + 24) = a3 - *(this + 2) / 2;
  *(this + 25) = v5;
  if ( !v6 )
  {
    v7 = sub_483910(this);
    return (int)sub_47C950(v7);
  }
  return result;
}
