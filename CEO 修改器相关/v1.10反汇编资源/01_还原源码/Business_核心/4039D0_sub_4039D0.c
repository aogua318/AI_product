// 函数 0x4039d0  sub_4039D0  size=0x79  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_4039D0()
{
  int v0; // esi
  int i; // edi

  v0 = 0;
  for ( i = 0; v0 < dword_4CCA9C; ++v0 )
  {
    if ( sub_464E90(v0) )
    {
      if ( *(char *)(v0 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
      {
        sub_4023C0(v0);
        sub_403030(v0);
        sub_403260(v0);
        sub_403A50(v0);
        sub_403380(v0);
        sub_403730(v0);
      }
      if ( ++i >= dword_4CCAA4 )
        break;
    }
  }
}
