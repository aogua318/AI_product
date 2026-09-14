// 函数 0x427a30  sub_427A30  size=0x6F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_427A30(int this)
{
  int result; // eax
  int v3; // esi
  __int16 *v4; // edi
  int v5; // edi
  __int16 *v6; // esi

  result = *(unsigned __int16 *)(this + 18);
  if ( (result & 1) != 0 )
  {
    *(_WORD *)(this + 18) = result & 0xFFFE;
    result = sub_426B30((__int16 *)this, 1);
    v3 = *(char *)(this + 23) - 1;
    if ( v3 >= 0 )
    {
      v4 = (__int16 *)(this + 2 * v3 + 64);
      do
      {
        result = sub_42BF60(*v4);
        *v4-- = -1;
        --v3;
      }
      while ( v3 >= 0 );
    }
    v5 = *(char *)(this + 22) - 1;
    if ( v5 >= 0 )
    {
      v6 = (__int16 *)(this + 2 * v5 + 24);
      do
      {
        sub_42BF60(*v6);
        result = -1;
        *v6-- = -1;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
  return result;
}
