// 函数 0x418140  sub_418140  size=0x3D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_418140(__int16 *this)
{
  int v1; // ecx
  int v2; // eax
  int v3; // esi
  char result; // al

  v1 = *(this + 382);
  if ( v1 != -1 )
  {
    do
    {
      v2 = dword_4D10A8 + v1 * dword_4D1094;
      v3 = *(__int16 *)(v2 + 6);
      result = *(_BYTE *)(v2 + 11) & 0xF;
      if ( result == 1 )
        result = sub_42BF60(v1);
      v1 = v3;
    }
    while ( v3 != -1 );
  }
  return result;
}
