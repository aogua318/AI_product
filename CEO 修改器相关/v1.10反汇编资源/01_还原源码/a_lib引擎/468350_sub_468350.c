// 函数 0x468350  sub_468350  size=0x6E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int8 *__cdecl sub_468350(_WORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *result; // eax
  int v5; // ecx
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // bl
  int v8; // [esp+0h] [ebp-4h]

  result = (unsigned __int8 *)a3;
  HIBYTE(v8) = 0;
  if ( a3 > 0 )
  {
    result = a2;
    do
    {
      v5 = *result;
      v6 = result[1];
      v7 = result[2];
      LOBYTE(v8) = *result;
      BYTE1(v8) = v6;
      BYTE2(v8) = v7;
      result += 3;
      if ( v8 != dword_8DBD0C )
        *a1 = (v5 >> 3) | (4 * (v6 & 0xF8 | (32 * (v7 & 0xF8))));
      ++a1;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
