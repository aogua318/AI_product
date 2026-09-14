// 函数 0x402ed0  sub_402ED0  size=0xD2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_402ED0(int a1)
{
  int v1; // ecx
  int result; // eax
  int v3; // ebx
  char *v4; // esi
  __int16 v5; // ax
  int v6; // edi
  int v7; // eax

  dbl_4B9908 = 0.0;
  v1 = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 238);
  result = -1;
  v3 = 0;
  dword_4B1004 = -1;
  dword_4B1008 = -1;
  if ( v1 != -1 )
  {
    do
    {
      v4 = (char *)(dword_4CC8D0 + v1 * dword_4CC8BC);
      if ( !v4[9] )
      {
        if ( *((__int16 *)v4 + 13) <= 0 )
        {
          v7 = sub_4640D0() % 100 + 1000000;
        }
        else
        {
          v5 = *((_WORD *)v4 + 14);
          v6 = 1;
          if ( v5 >= 1 )
            v6 = v5;
          v7 = 100 * sub_4151B0(v4) / v6;
        }
        if ( v7 > v3 )
        {
          v3 = v7;
          dword_4B1004 = *v4;
        }
      }
      v1 = *((__int16 *)v4 + 3);
    }
    while ( v1 != -1 );
    if ( dword_4B1004 != -1 )
    {
      dword_4B1000 = a1;
      sub_464ED0(sub_402D10);
    }
    return dword_4B1008;
  }
  return result;
}
