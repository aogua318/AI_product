// 函数 0x419c70  sub_419C70  size=0x39  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419C70(__int16 *this)
{
  int v1; // eax
  int i; // edi
  int v3; // esi

  v1 = *(this + 240);
  for ( i = 0; v1 != -1; v1 = *(__int16 *)(v3 + 10) )
  {
    v3 = dword_870840 + v1 * dword_87082C;
    if ( sub_4334C0(v3) )
      ++i;
  }
  return i;
}
