// 函数 0x449be0  sub_449BE0  size=0x147  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_449BE0(int a1)
{
  const char *v1; // edi
  int v2; // edx
  __int16 *v3; // esi
  int v4; // ecx
  __int16 *v5; // eax
  int v7; // [esp+0h] [ebp-8h]
  char *v8; // [esp+4h] [ebp-4h]

  sub_47FF50(*(_DWORD *)dword_870814 + 72 * a1);
  dword_8B6A28 = 0;
  v7 = 0;
  if ( dword_870818 > 0 )
  {
    v1 = *(const char **)dword_870814;
    v8 = (char *)&unk_8B6D10;
    do
    {
      v2 = 0;
      v3 = (__int16 *)(v1 + 16);
      while ( *v3 == -1 )
      {
LABEL_10:
        ++v2;
        ++v3;
        if ( v2 >= 4 )
          goto LABEL_11;
      }
      v4 = 0;
      v5 = (__int16 *)(*(_DWORD *)dword_87081C + 116 * *v3 + 20);
      while ( *v5 != a1 )
      {
        ++v4;
        ++v5;
        if ( v4 >= 4 )
          goto LABEL_10;
      }
      dword_8B6B20[dword_8B6A28] = v7;
      strcpy(v8, v1);
      ++dword_8B6A28;
      v8 += 12;
LABEL_11:
      v1 += 72;
      ++v7;
    }
    while ( v7 < dword_870818 );
  }
  sub_481AC0(&unk_8B6D10, 12, dword_8B6A28, 0);
  sub_47ECC0(dword_8B6A28 - 11);
  sub_480880(0);
  sub_4801E0(-1);
  return sub_449A80();
}
