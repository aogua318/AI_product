// 函数 0x4657b0  sub_4657B0  size=0x10B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4657B0()
{
  int v0; // esi
  int v1; // edi
  CHAR Text[256]; // [esp+4h] [ebp-104h] BYREF

  while ( dword_8DBCF0 )
    Sleep(0xAu);
  if ( dword_8DB830 != dword_8DB834 )
  {
    sprintf(Text, "alloc_count=%d\nfree_count=%d", dword_8DB830, dword_8DB834);
    MessageBoxA(0, Text, "alloc_sum != free_sum", 0);
  }
  if ( dword_8DB838 != dword_8DB83C )
  {
    sprintf(Text, "alloc_size=%d\nfree_size=%d", dword_8DB838, dword_8DB83C);
    MessageBoxA(0, Text, "alloc_size != free_size", 0);
  }
  if ( Block )
  {
    if ( dword_8DB84C )
    {
      v0 = 0;
      if ( dword_8DB84C > 0 )
      {
        v1 = 0;
        do
        {
          sub_4643C0(
            "unfree memory %X: %s line:%d",
            *(_DWORD *)((char *)Block + v1 + 60),
            (const char *)Block + v1,
            *(_DWORD *)((char *)Block + v1 + 56));
          ++v0;
          v1 += 64;
        }
        while ( v0 < dword_8DB84C );
      }
    }
    free(Block);
  }
}
