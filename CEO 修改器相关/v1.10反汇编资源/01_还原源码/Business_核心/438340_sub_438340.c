// 函数 0x438340  sub_438340  size=0xD7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__cdecl sub_438340(__int64 Value, _BYTE *a2)
{
  unsigned int v2; // kr00_4
  int v3; // ecx
  int v4; // esi
  int i; // eax
  int v6; // eax
  int v7; // ecx
  char Buffer[512]; // [esp+4h] [ebp-204h] BYREF

  _i64toa(Value, Buffer, 10);
  v2 = strlen(Buffer);
  v3 = 0;
  v4 = 0;
  for ( i = v2 - 1; i >= 0; --i )
  {
    if ( v4 == 3 )
    {
      if ( Value >= 0 || i > 0 )
        Buffer[v3++ + 256] = 44;
      v4 = 0;
    }
    Buffer[v3++ + 256] = Buffer[i];
    ++v4;
  }
  Buffer[v3 + 256] = 0;
  v6 = 0;
  v7 = v3 - 1;
  if ( v7 < 0 )
  {
    *a2 = 0;
    return a2;
  }
  else
  {
    do
      a2[v6++] = Buffer[v7-- + 256];
    while ( v7 >= 0 );
    a2[v6] = 0;
    return a2;
  }
}
