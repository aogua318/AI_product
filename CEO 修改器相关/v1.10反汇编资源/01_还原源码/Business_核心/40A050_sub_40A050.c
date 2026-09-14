// 函数 0x40a050  sub_40A050  size=0x55  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_40A050()
{
  int v0; // esi
  int i; // edi

  v0 = 0;
  for ( i = 0; v0 < dword_4C43CC; ++v0 )
  {
    if ( sub_464E90(v0) )
    {
      sub_486260(*(_DWORD *)(v0 * dword_4C43C8 + dword_4C43DC + 80), 0, 0);
      if ( ++i >= dword_4C43D4 )
        break;
    }
  }
}
