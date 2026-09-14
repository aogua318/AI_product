// 函数 0x433710  sub_433710  size=0x63  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_433710(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax

  result = *(_DWORD *)(this + 24);
  v3 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(this + 4);
  if ( result != -1 )
  {
    sub_483BD0(result, 8, *(_WORD *)(this + 6));
    LOBYTE(v4) = *(_BYTE *)(v3 + 224);
    if ( (v4 & 0x80u) != 0 )
      v4 = 0;
    else
      v4 = (char)v4;
    return sub_4868E0(*(_DWORD *)(this + 24), 4 * word_4D10BA[94940 * v4]);
  }
  return result;
}
