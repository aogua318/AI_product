// 函数 0x421bd0  sub_421BD0  size=0x9F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_421BD0(int this)
{
  int v2; // eax
  unsigned int v3; // eax
  int result; // eax

  switch ( *(_BYTE *)(this + 11) )
  {
    case 3:
      *(_WORD *)(dword_4C4364 * *(__int16 *)(this + 14) + dword_4C4378 + 2) = -1;
      break;
    case 6:
      v3 = sub_420D50((void *)this);
      sub_430AF0(v3);
      break;
    case 7:
      v2 = dword_870868 + dword_870854 * *(__int16 *)(this + 14);
      *(_WORD *)(v2 + 10) = -1;
      *(_BYTE *)(v2 + 15) = 0;
      break;
  }
  result = *(unsigned __int16 *)(this + 28);
  *(_BYTE *)(this + 11) = -1;
  *(_WORD *)(this + 14) = -1;
  if ( (_WORD)result != 0xFFFF )
  {
    sub_42C3E0(0, 1);
    *(_WORD *)(this + 28) = -1;
    return -1;
  }
  return result;
}
