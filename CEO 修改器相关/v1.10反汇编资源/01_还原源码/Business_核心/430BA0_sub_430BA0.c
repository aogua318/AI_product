// 函数 0x430ba0  sub_430BA0  size=0x19  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430BA0(__int16 *this)
{
  int v1; // edx
  __int16 *v2; // ecx
  int result; // eax

  v1 = 3;
  v2 = this + 7;
  do
  {
    result = *v2;
    if ( result != -1 )
      break;
    --v2;
    --v1;
  }
  while ( v1 >= 0 );
  return result;
}
