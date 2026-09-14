// 函数 0x480920  sub_480920  size=0x62  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_480920(int *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int *v5; // ecx

  if ( a2 >= 0 && a2 < *(__int16 *)(*this + 292) )
  {
    v3 = *(_DWORD *)(*this + 296);
    v4 = *(__int16 *)(v3 + 288 * a2 + 4);
    v5 = (int *)(288 * a2 + v3);
    if ( v4 == 4 )
    {
      sub_47F920(v5, *(this + 11));
      *((_WORD *)this + 4) = a2;
      return 0;
    }
    if ( v4 == 2 )
      sub_47ECC0(v5, *(this + 11));
  }
  *((_WORD *)this + 4) = a2;
  return 0;
}
