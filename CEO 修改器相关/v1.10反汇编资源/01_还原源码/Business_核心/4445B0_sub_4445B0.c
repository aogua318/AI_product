// 函数 0x4445b0  sub_4445B0  size=0xDF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4445B0(int a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // edi
  int v5; // ebx
  int i; // edi
  int v7; // [esp+Ch] [ebp-4h]

  v7 = sub_45E9A0();
  if ( a1 )
  {
    v1 = dword_4B1024 - 1;
    if ( dword_4B1024 - 1 < 0 )
      v1 = dword_4C43CC - 1;
    v5 = 0;
    for ( i = 0; i < dword_4C43CC; ++i )
    {
      if ( sub_464E90(v1) )
      {
        if ( *(char *)(v1 * dword_4C43C8 + dword_4C43DC + 2) == v7 )
          return v1;
        if ( ++v5 >= dword_4C43D4 )
          return -1;
      }
      if ( --v1 < 0 )
        v1 = dword_4C43CC - 1;
    }
  }
  else
  {
    v1 = dword_4B1024 + 1;
    if ( dword_4B1024 + 1 >= dword_4C43CC )
      v1 = 0;
    v2 = 0;
    v3 = 0;
    if ( dword_4C43CC > 0 )
    {
      while ( 1 )
      {
        if ( sub_464E90(v1) )
        {
          if ( *(char *)(v1 * dword_4C43C8 + dword_4C43DC + 2) == v7 )
            return v1;
          if ( ++v2 >= dword_4C43D4 )
            break;
        }
        if ( ++v1 >= dword_4C43CC )
          v1 = 0;
        if ( ++v3 >= dword_4C43CC )
          return -1;
      }
    }
  }
  return -1;
}
