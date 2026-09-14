// 函数 0x435c40  sub_435C40  size=0x64  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_435C40()
{
  int i; // esi

  for ( i = 0; i < dword_4CC8C0; ++i )
  {
    if ( sub_464E90(i) )
      *(_BYTE *)(dword_4CC8D0 + i * dword_4CC8BC + 11) = 100
                                                       - *(_BYTE *)(54
                                                                  * *(char *)(dword_4CCA98
                                                                            * *(__int16 *)(dword_4CC8D0
                                                                                         + i * dword_4CC8BC
                                                                                         + 2)
                                                                            + dword_4CCAAC
                                                                            + 224)
                                                                  + *(_DWORD *)dword_4B9910
                                                                  + 42);
  }
}
