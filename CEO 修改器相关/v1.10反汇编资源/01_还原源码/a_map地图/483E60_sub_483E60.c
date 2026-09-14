// 函数 0x483e60  sub_483E60  size=0xD7  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_483E60(char *FileName, _DWORD *a2)
{
  signed int v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx
  signed int v5; // edx
  FILE *v7[2]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v7);
  v2 = 0;
  v8 = 0;
  if ( sub_46A040(v7, FileName) )
  {
    v2 = sub_46A270((int)v7) / 0xAu;
    v3 = sub_465E40(10 * v2, "a_map\\a_map.cpp", 2171);
    *a2 = v3;
    sub_46A320(v7, v3, 10 * v2);
    if ( v2 > 0 )
    {
      v4 = 0;
      v5 = v2;
      do
      {
        if ( !*(_WORD *)(v4 + *a2 + 8) )
          *(_WORD *)(v4 + *a2 + 8) = 1;
        v4 += 10;
        --v5;
      }
      while ( v5 );
    }
    sub_46A1F0((int *)v7);
  }
  v8 = -1;
  nullsub_2();
  return v2;
}
