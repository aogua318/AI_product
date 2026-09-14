// 函数 0x466ca0  sub_466CA0  size=0x8E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_466CA0(__int16 *this, _DWORD *Src, int a3, int a4)
{
  int v6; // ebx
  int v7; // edi

  if ( Src[3] != 16 )
    return 0;
  v6 = a3 + *this;
  v7 = a4 + *(this + 1);
  return v7 < Src[8]
      && v7 + *(this + 3) > Src[6]
      && v6 < Src[7]
      && v6 + *(this + 2) > Src[5]
      && sub_46DFA0(Src, v6, v7, *((_DWORD *)this + 4), *((_DWORD *)this + 2))
      && sub_46D8A0(Src, v6, v7, *((_DWORD *)this + 4) + *((_DWORD *)this + 2), *((_DWORD *)this + 3));
}
