// 函数 0x41a5c0  sub_41A5C0  size=0x49  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41A5C0(char *this, int a2, int a3)
{
  int result; // eax
  char *i; // ecx

  result = 0;
  for ( i = this + 484; *((__int16 *)i + 2) != a2; i += 8 )
  {
    if ( ++result >= 32 )
      return result;
  }
  result = *((unsigned __int16 *)i + 3);
  if ( (_WORD)result != 0xFFFF )
  {
    result = dword_870840 + dword_87082C * (__int16)result;
    *(_DWORD *)(result + 12) += a3;
  }
  return result;
}
