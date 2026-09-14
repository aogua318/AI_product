// 函数 0x435b50  sub_435B50  size=0x4C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_435B50()
{
  int i; // edi
  int v1; // esi

  for ( i = 0; i < dword_4C43CC; ++i )
  {
    if ( sub_464E90(i) )
    {
      v1 = dword_4C43DC + i * dword_4C43C8;
      if ( *(_BYTE *)(v1 + 2) != 0xFF )
        *(_DWORD *)(v1 + 92) = sub_40F570((_DWORD *)(dword_4C43DC + i * dword_4C43C8), 0);
    }
  }
}
