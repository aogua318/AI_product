// 函数 0x404a60  sub_404A60  size=0xD3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_404A60(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  char *v5; // edi
  int *v6; // ebx
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  int v13; // [esp+4h] [ebp-18h]
  int *v14; // [esp+8h] [ebp-14h]
  char *v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  v17 = 100000;
  if ( dword_4C5DD8 <= 0 )
    return 100000;
  v3 = dword_4C5DEC;
  v4 = 2302 * dword_4C5DEC;
  v18 = a3 - 16;
  v5 = &byte_4B9FC8;
  v6 = (int *)(*(_DWORD *)dword_4C5DF4 + 4 * a1 + 8784);
  v15 = &byte_4B9FC8;
  v14 = v6;
  v13 = dword_4C5DD8;
  do
  {
    if ( v3 > 0 )
    {
      v7 = a2 - 16;
      v16 = v3;
      do
      {
        if ( *v5 && *v6 > 0 )
        {
          v8 = abs32(v7);
          v9 = abs32(v18);
          if ( v8 < v9 )
            v8 >>= 1;
          else
            v9 >>= 1;
          v10 = v8 + v9;
          if ( v10 < v17 )
            v17 = v10;
        }
        ++v5;
        v6 += 2302;
        v7 -= 32;
        --v16;
      }
      while ( v16 );
      v4 = 2302 * dword_4C5DEC;
      v3 = dword_4C5DEC;
    }
    v18 -= 32;
    v5 = &v15[v3];
    v6 = &v14[v4];
    v11 = v13-- == 1;
    v15 += v3;
    v14 = (int *)((char *)v14 + v4 * 4);
  }
  while ( !v11 );
  return v17;
}
