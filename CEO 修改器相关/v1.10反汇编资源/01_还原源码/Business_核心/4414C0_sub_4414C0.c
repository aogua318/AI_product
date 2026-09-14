// 函数 0x4414c0  sub_4414C0  size=0xD5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4414C0(int a1)
{
  char *v1; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // edi
  char v5; // dl
  int v6; // edi
  int v7; // esi
  int v8; // eax
  __int16 *i; // ecx

  if ( a1 != dword_4B1028 )
  {
    v1 = (char *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC);
    v2 = dword_4CCAAC + a1 * dword_4CCA98;
    v3 = *(__int16 *)(v2 + 2 * *v1 + 240);
    if ( v3 != -1 )
    {
      v4 = dword_4CC8D0 + v3 * dword_4CC8BC;
      v5 = *(_BYTE *)(v4 + 9);
      if ( v5 != 2 )
      {
        v6 = *(char *)(dword_4CCA98 * *(__int16 *)(v4 + 2) + dword_4CCAAC + 224);
        v7 = *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224);
        if ( v6 == v7 )
          ++dword_8A66FC;
        if ( (v5 != 1 || v6 == v7) && (v1[10] != 1 || v6 == v7) )
        {
          v8 = 0;
          for ( i = (__int16 *)(v2 + 488); *i != dword_4B1028; i += 4 )
          {
            if ( ++v8 >= 32 )
              return 0;
          }
          ++dword_8A66FC;
        }
      }
    }
  }
  return 0;
}
