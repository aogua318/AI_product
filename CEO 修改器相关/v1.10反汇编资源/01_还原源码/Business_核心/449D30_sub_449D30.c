// 函数 0x449d30  sub_449D30  size=0x189  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_449D30(unsigned int a1)
{
  int v1; // edx
  const char *v2; // edi
  char *v3; // ebx
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  char *v8; // [esp+Ch] [ebp-4h]

  if ( a1 < dword_4D0C98 )
  {
    sub_47FF50((char *)&unk_8B6A30 + 12 * a1);
    v4 = 0;
    v5 = 0;
    dword_8B6A28 = 0;
    if ( dword_870818 > 0 )
    {
      v6 = *(_DWORD *)dword_870814;
      v8 = (char *)&unk_8B6D10;
      do
      {
        if ( *(char *)(v6 + 12) == a1 )
        {
          dword_8B6B20[v4] = v5;
          strcpy(v8, (const char *)v6);
          ++v4;
          v8 += 12;
        }
        ++v5;
        v6 += 72;
      }
      while ( v5 < dword_870818 );
      dword_8B6A28 = v4;
    }
    sub_481AC0(&unk_8B6D10, 12, v4, 0);
    sub_47ECC0(dword_8B6A28 - 11);
  }
  else
  {
    sub_47FF50((char *)&unk_8B6A30 + 12 * dword_4D0C98);
    v1 = 0;
    if ( dword_870818 > 0 )
    {
      v2 = *(const char **)dword_870814;
      v3 = (char *)&unk_8B6D10;
      do
      {
        dword_8B6B20[v1] = v1;
        strcpy(v3, v2);
        ++v1;
        v3 += 12;
        v2 += 72;
      }
      while ( v1 < dword_870818 );
    }
    sub_481AC0(&unk_8B6D10, 12, dword_870818, 0);
    sub_47ECC0(dword_870818 - 11);
  }
  sub_480880(0);
  sub_4801E0(0);
  return sub_449A80();
}
