// 函数 0x434430  sub_434430  size=0x85  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_434430(int a1, int a2)
{
  __int16 *v2; // esi
  int v3; // edx
  int result; // eax
  char *v5; // ecx
  int v6; // edx

  v2 = (__int16 *)(dword_870868 + a1 * dword_870854);
  v3 = *(__int16 *)(dword_4CCA98 * *v2 + dword_4CCAAC + 238);
  for ( result = 0; v3 != -1; v3 = *((__int16 *)v5 + 3) )
  {
    v5 = (char *)(dword_4CC8D0 + v3 * dword_4CC8BC);
    v6 = *v5;
    if ( *(_BYTE *)(*(_DWORD *)dword_870814 + (*((unsigned __int8 *)v2 + 14) >> 3) + 72 * v6 + 48) )
    {
      *(_DWORD *)(a2 + 4 * result++) = v6;
      if ( result == 128 )
        break;
    }
  }
  return result;
}
