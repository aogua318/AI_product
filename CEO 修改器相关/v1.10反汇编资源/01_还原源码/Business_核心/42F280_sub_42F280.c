// 函数 0x42f280  sub_42F280  size=0xD7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_42F280(char *this)
{
  double v2; // st7
  int *v3; // esi
  long double v4; // st7
  int v5; // esi
  int v6; // edi
  double v7; // [esp+Ch] [ebp-10h]
  double v8; // [esp+14h] [ebp-8h]

  if ( *this == dword_8703A0 )
    v2 = dbl_4CDF00;
  else
    v2 = (double)*(__int16 *)(54 * *((__int16 *)this + 94875) + *(_DWORD *)dword_4B9910 + 52) * dbl_4CDF08 / 100.0;
  v7 = v2;
  if ( *this >= 7 && dword_4CDEBC == 1 )
  {
    v3 = dword_4B10E4;
    v8 = 0.0;
    do
    {
      v4 = sub_41EE50(*v3++) + v8;
      v8 = v4;
    }
    while ( (int)v3 < (int)&dword_4B1100 );
    v5 = 0;
    if ( dword_870818 > 0 )
    {
      v6 = 0;
      do
      {
        if ( !*(_WORD *)(v6 + *(_DWORD *)dword_870814 + 68) )
        {
          v4 = sub_41EE50(v5) + v8;
          v8 = v4;
        }
        ++v5;
        v6 += 72;
      }
      while ( v5 < dword_870818 );
    }
    v2 = v4 / 10.0 + v7;
  }
  sub_42F250((int)this, v2);
}
