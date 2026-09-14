// 函数 0x412390  sub_412390  size=0x42  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_412390(_DWORD *this)
{
  int v2; // esi
  int v3; // edx
  int v4; // esi
  int v6; // esi

  v2 = *(this + 3) + *this + *(this + 2) + *(this + 1);
  v3 = sub_4640D0() % v2;
  v4 = v2 - *(this + 3);
  if ( v3 >= v4 )
    return 3;
  v6 = v4 - *(this + 2);
  if ( v3 < v6 )
    return v3 >= v6 - *(this + 1);
  else
    return 2;
}
