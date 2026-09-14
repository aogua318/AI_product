// 函数 0x430bc0  sub_430BC0  size=0x38  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430BC0(__int16 *this)
{
  int v1; // edx
  __int16 *i; // ecx
  int result; // eax

  v1 = 3;
  for ( i = this + 7; ; --i )
  {
    result = *i;
    if ( result != -1 && *(_BYTE *)(result * dword_4D0B98 + dword_4D0BAC + 11) == 0xFF )
      break;
    if ( --v1 < 0 )
      return -1;
  }
  return result;
}
