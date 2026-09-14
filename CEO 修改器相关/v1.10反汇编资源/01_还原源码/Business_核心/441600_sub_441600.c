// 函数 0x441600  sub_441600  size=0xD5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_441600(int a1)
{
  char *v1; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // edi
  char v5; // dl
  int v7; // eax
  __int16 *i; // ecx

  if ( a1 != dword_4B1028 )
  {
    v1 = (char *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC);
    v2 = dword_4CCAAC + a1 * dword_4CCA98;
    v3 = *(__int16 *)(v2 + 2 * *v1 + 240);
    if ( v3 != -1 )
    {
      v4 = dword_4CC8D0 + v3 * dword_4CC8BC;
      v5 = *(_BYTE *)(v4 + 10);
      if ( v5 != 2 )
      {
        if ( *(char *)(dword_4CCA98 * *(__int16 *)(v4 + 2) + dword_4CCAAC + 224) == *(char *)(dword_4B1028
                                                                                            * dword_4CCA98
                                                                                            + dword_4CCAAC
                                                                                            + 224) )
        {
          ++dword_8A66F8;
          return 0;
        }
        if ( v5 != 1 && v1[9] != 1 )
        {
          v7 = 0;
          for ( i = (__int16 *)(v2 + 488); *i != dword_4B1028; i += 4 )
          {
            if ( ++v7 >= 32 )
              return 0;
          }
          ++dword_8A66F8;
        }
      }
    }
  }
  return 0;
}
