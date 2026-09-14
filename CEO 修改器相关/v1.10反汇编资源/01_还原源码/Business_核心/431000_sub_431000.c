// 函数 0x431000  sub_431000  size=0x28  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__thiscall sub_431000(__int16 *this, int a2)
{
  __int16 *result; // eax
  int v3; // ecx

  result = this + 8;
  v3 = 4;
  do
  {
    if ( *result == a2 )
      *result = -1;
    ++result;
    --v3;
  }
  while ( v3 );
  return result;
}
