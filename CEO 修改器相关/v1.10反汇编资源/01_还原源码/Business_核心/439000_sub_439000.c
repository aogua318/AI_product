// 函数 0x439000  sub_439000  size=0x88  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_439000(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  LOBYTE(v3) = *(_BYTE *)(this + 17);
  if ( (unsigned __int8)v3 >= a2 )
  {
    v4 = *(__int16 *)(this + 4);
    *(_BYTE *)(this + 17) = v3 - a2;
    sub_419C10((__int16 *)(dword_4CCAAC + dword_4CCA98 * v4), *(unsigned __int8 *)(this + 16), -(__int16)a2);
    v5 = *(__int16 *)(this + 6);
    if ( *(_BYTE *)(this + 18) )
    {
      v3 = dword_4CC8D0
         + dword_4CC8BC * *(__int16 *)(dword_4CCAAC + dword_4CCA98 * v5 + 2 * *(unsigned __int8 *)(this + 16) + 240);
      *(_WORD *)(v3 + 34) -= a2;
    }
    else
    {
      LOBYTE(v3) = sub_438E20(v5, *(unsigned __int8 *)(this + 16), a2);
    }
  }
  return v3;
}
