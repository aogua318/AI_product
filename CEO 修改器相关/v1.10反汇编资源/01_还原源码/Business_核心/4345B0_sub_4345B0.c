// 函数 0x4345b0  sub_4345B0  size=0x6F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4345B0(int this, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = dword_4D0BAC + a2 * dword_4D0B98;
  sub_4868E0(*(__int16 *)(this + 6), 0);
  result = *(unsigned __int16 *)(v2 + 6);
  if ( (_WORD)result != 0xFFFF )
  {
    sub_4864E0((__int16)result);
    sub_4864E0(*(__int16 *)(v2 + 8));
    result = -1;
    *(_WORD *)(v2 + 6) = -1;
    *(_WORD *)(v2 + 8) = -1;
  }
  *(_BYTE *)(this + 15) = 1;
  return result;
}
