// 函数 0x43c690  sub_43C690  size=0xA7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43C690(int a1)
{
  int v1; // eax
  char v2; // bl
  char v3; // dl
  int v4; // edx
  int v5; // eax

  v1 = dword_89E57C + a1 * dword_89E568;
  v2 = *(_BYTE *)(v1 + 19);
  v3 = v2 & 0xF;
  if ( (v2 & 0xF) == 0 || v3 == 2 )
  {
    v4 = *(__int16 *)(v1 + 4);
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 18) || v3 != 1 && v3 != 3 )
      return 0;
    v4 = *(__int16 *)(v1 + 6);
  }
  if ( v4 == dword_4B1028 )
  {
    v5 = *(__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98 + 2 * *(unsigned __int8 *)(v1 + 16) + 240);
    if ( v5 != -1 && *(unsigned __int8 *)(v5 * dword_4CC8BC + dword_4CC8D0 + 1257) == dword_8A11E0 )
    {
      ++dword_8A11E4;
      if ( (v2 & 0x10) != 0 )
        ++dword_8A11E8;
    }
  }
  return 0;
}
