// 函数 0x438660  sub_438660  size=0x4B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_438660()
{
  int v0; // ecx
  int i; // esi
  unsigned int v2; // edi
  int v3; // ecx
  int v4; // eax

  v0 = dword_4D0E80 + dword_4D0E84;
  for ( i = 0; i < dword_4D0E80 + dword_4D0E84; ++i )
  {
    v2 = sub_4640D0(v0) % dword_4D0E80;
    v4 = sub_4640D0(v3);
    sub_423A20(v2, v4 % dword_4D0E84);
  }
}
