// 函数 0x418180  sub_418180  size=0x3A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_418180(__int16 *this)
{
  int v1; // ecx
  int result; // eax
  int v3; // esi

  v1 = *(this + 382);
  if ( v1 != -1 )
  {
    do
    {
      result = dword_4D10A8 + v1 * dword_4D1094;
      v3 = *(__int16 *)(result + 6);
      if ( (*(_BYTE *)(result + 11) & 0xF) == 0 )
        result = sub_42BF60(v1);
      v1 = v3;
    }
    while ( v3 != -1 );
  }
  return result;
}
