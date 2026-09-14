// 函数 0x466fe0  sub_466FE0  size=0xAE  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_466FE0(__int16 *this, _DWORD *Src, int a3, int a4, __int16 a5)
{
  BOOL result; // eax
  int v7; // ebx
  int v8; // edi

  if ( Src[3] != 16 )
    return 0;
  v7 = a3 + *this;
  v8 = a4 + *(this + 1);
  result = 0;
  if ( v8 < Src[8] && v8 + *(this + 3) > Src[6] && v7 < Src[7] && v7 + *(this + 2) > Src[5] )
  {
    dword_8DBD14 = a5 & 0x7C1F;
    dword_8DBD10 = a5 & 0x3E0;
    if ( sub_46DFA0(Src, v7, v8, *((_DWORD *)this + 4), *((_DWORD *)this + 2)) )
    {
      if ( sub_46E5A0(Src, v7, v8, *((_DWORD *)this + 4) + *((_DWORD *)this + 2), *((_DWORD *)this + 3), sub_466B50) )
        return 1;
    }
  }
  return result;
}
