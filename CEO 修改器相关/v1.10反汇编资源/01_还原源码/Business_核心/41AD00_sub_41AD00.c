// 函数 0x41ad00  sub_41AD00  size=0x50  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41AD00(__int16 *this, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int result; // eax

  v2 = *(this + 377);
  if ( v2 != -1 )
  {
    do
    {
      v3 = dword_4C4378 + v2 * dword_4C4364;
      v4 = *(__int16 *)(v3 + 6);
      result = *(char *)(v3 + 10);
      if ( result == a2 )
        result = sub_40BF60(v2);
      v2 = v4;
    }
    while ( v4 != -1 );
  }
  return result;
}
