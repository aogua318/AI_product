// 函数 0x467090  sub_467090  size=0x69  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_467090(__int16 *this, _DWORD *Src, int a3, int a4)
{
  int v5; // eax
  int v6; // edx

  if ( Src[3] != 16 )
    return 0;
  v5 = a4 + *(this + 1);
  v6 = a3 + *this;
  return v5 < Src[8]
      && v5 + *(this + 3) > Src[6]
      && v6 < Src[7]
      && v6 + *(this + 2) > Src[5]
      && sub_46DFA0(Src, v6, v5, *((_DWORD *)this + 4), *((_DWORD *)this + 2)) != 0;
}
