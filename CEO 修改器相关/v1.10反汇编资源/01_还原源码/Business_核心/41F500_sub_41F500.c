// 函数 0x41f500  sub_41F500  size=0x5E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_41F500()
{
  int v0; // ebx
  int v1; // edi
  int i; // esi
  int v3; // eax

  v0 = 0;
  v1 = 0;
  for ( i = 0; i < dword_4CCA9C; ++i )
  {
    if ( sub_464E90(i) )
    {
      v3 = dword_4CCAAC + i * dword_4CCA98;
      if ( *(char *)(v3 + 224) == dword_8703A0 )
        v0 += *(__int16 *)(v3 + 740);
      if ( ++v1 >= dword_4CCAA4 )
        break;
    }
  }
  return v0;
}
