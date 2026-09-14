// 函数 0x435ae0  sub_435AE0  size=0x68  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_435AE0()
{
  int i; // edi
  int v1; // esi

  for ( i = 0; i < dword_4D0C74; ++i )
  {
    if ( sub_464E90(i) )
    {
      v1 = dword_4D0C84 + i * dword_4D0C70;
      byte_4FF604[189880 * *(char *)(dword_4CCA98 * *(__int16 *)(v1 + 2) + dword_4CCAAC + 224) + sub_4275A0((char *)v1)] = 1;
    }
  }
}
