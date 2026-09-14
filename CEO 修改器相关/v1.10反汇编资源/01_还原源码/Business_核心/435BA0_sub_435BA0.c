// 函数 0x435ba0  sub_435BA0  size=0x58  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_435BA0()
{
  int i; // esi
  int v1; // ecx
  int v2; // eax
  _WORD *v3; // edx

  for ( i = 0; i < dword_4CCA9C; ++i )
  {
    if ( sub_464E90(i) )
    {
      v1 = dword_4CCAAC + i * dword_4CCA98;
      v2 = 0;
      v3 = (_WORD *)(v1 + 768);
      while ( *v3 )
      {
        ++v2;
        ++v3;
        if ( v2 >= 8 )
          goto LABEL_8;
      }
      *(_DWORD *)(v1 + 1848) = v2;
    }
LABEL_8:
    ;
  }
}
