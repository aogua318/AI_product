// 函数 0x48c450  ___initstdio  size=0xB1  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __initstdio()
{
  int v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_8F72E0;
  if ( !dword_8F72E0 )
  {
    v0 = 512;
LABEL_5:
    dword_8F72E0 = v0;
    goto LABEL_6;
  }
  if ( dword_8F72E0 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_8F62C8 = v1;
  if ( !v1 )
  {
    dword_8F72E0 = 20;
    v1 = (char *)_calloc_crt(20, 4);
    dword_8F62C8 = v1;
    if ( !v1 )
      return 26;
  }
  v3 = 0;
  v4 = &off_4B8318;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)off_4B8598 )
      break;
    v1 = (char *)dword_8F62C8;
  }
  v5 = 0;
  v6 = &unk_4B8328;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_8F61C0[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || !v7 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_4B8388 );
  return 0;
}
