// 函数 0x4272d0  sub_4272D0  size=0x72  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4272D0(__int16 *this)
{
  int i; // esi
  int j; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  for ( i = 0; i < 4; ++i )
  {
    if ( sub_426D10(this, i, (int)&v5, (int)&v6) )
      sub_426E70((int)this, v5, v6);
  }
  for ( j = 0; j < 8; ++j )
  {
    result = sub_426D70(this, j, (int)&v5, (int)&v6);
    if ( result )
      result = sub_426E70((int)this, v5, v6);
  }
  return result;
}
