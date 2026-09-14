// 函数 0x419c10  sub_419C10  size=0x57  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419C10(__int16 *this, int a2, __int16 a3)
{
  int v3; // ecx
  char *v4; // eax

  v3 = *(this + 119);
  if ( v3 == -1 )
    return 0;
  while ( 1 )
  {
    v4 = (char *)(dword_4CC8D0 + v3 * dword_4CC8BC);
    if ( *v4 == a2 )
      break;
    v3 = *((__int16 *)v4 + 3);
    if ( v3 == -1 )
      return 0;
  }
  v4[8] &= ~1u;
  *((_WORD *)v4 + 16) += a3;
  return 1;
}
