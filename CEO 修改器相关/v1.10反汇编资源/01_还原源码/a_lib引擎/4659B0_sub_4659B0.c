// 函数 0x4659b0  sub_4659B0  size=0x168  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __cdecl sub_4659B0(int a1, const char *a2, int a3)
{
  char *v3; // esi
  size_t v4; // ebx
  char *v5; // edi
  char *v6; // ecx
  int v7; // eax
  const char *v8; // eax
  int v9; // esi
  char v10; // dl

  if ( (dword_8DB85C & 1) == 0 )
  {
    dword_8DB85C |= 1u;
    sub_464A40(Addend);
    atexit(sub_4A0FC0);
  }
  sub_464A60(Addend, (char *)byte_4A2869, 0xFFFFFFFF, 0, 0);
  v3 = (char *)Block;
  if ( Block )
  {
    if ( dword_8DB84C >= dword_8DB850 )
    {
      v4 = 2 * dword_8DB850;
      if ( !realloc(Block, 2 * dword_8DB850) )
      {
        v5 = (char *)malloc(v4);
        memcpy(v5, v3, dword_8DB84C << 6);
        free(v3);
        v3 = v5;
        Block = v5;
      }
      dword_8DB850 = v4;
    }
  }
  else
  {
    v3 = (char *)malloc((size_t)&unk_61A800);
    Block = v3;
    dword_8DB84C = 0;
    dword_8DB850 = 100000;
  }
  v6 = &v3[64 * dword_8DB84C];
  *((_DWORD *)v6 + 15) = a1;
  v7 = strlen(a2);
  if ( v7 >= 56 )
  {
    v8 = &a2[v7 - 54];
    v9 = v6 - v8;
    do
    {
      v10 = *v8;
      v8[v9] = *v8;
      ++v8;
    }
    while ( v10 );
  }
  else
  {
    strcpy(v6, a2);
  }
  ++dword_8DB84C;
  *((_DWORD *)v6 + 14) = a3;
  return sub_464B40(Addend);
}
