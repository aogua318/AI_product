// 函数 0x4271f0  sub_4271F0  size=0xD1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4271F0(int a1, int a2)
{
  double v2; // st7
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  unsigned __int8 *v7; // eax
  double v8; // st5
  int v9; // [esp+4h] [ebp-4h]

  v2 = 1.0e11;
  result = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 754);
  v4 = a2;
  v9 = -1;
  if ( result != -1 )
  {
    while ( 1 )
    {
      v5 = result * dword_4C4364;
      v6 = *(__int16 *)(result * dword_4C4364 + dword_4C4378 + 2);
      v7 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v6);
      if ( *((_WORD *)v7 + 7) != 0xFFFF )
        goto LABEL_11;
      if ( v4 == -1 )
      {
        v8 = (double)*((int *)dword_870824 + 28 * *v7 + 17) * 0.00390625 * (double)*((int *)v7 + 5);
      }
      else
      {
        if ( *v7 != v4 )
          goto LABEL_11;
        v8 = (double)*((int *)v7 + 5);
      }
      if ( v8 < v2 )
      {
        v2 = v8;
        v9 = v6;
      }
LABEL_11:
      result = *(__int16 *)(v5 + dword_4C4378 + 6);
      if ( result == -1 )
      {
        result = v9;
        if ( v9 != -1 )
          return sub_420B10(v9);
        return result;
      }
      v4 = a2;
    }
  }
  return result;
}
