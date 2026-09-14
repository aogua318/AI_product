// 函数 0x43a770  sub_43A770  size=0x9B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43A770(int a1, int a2)
{
  int result; // eax
  int v3; // ecx

  if ( a2 == 28 )
  {
    result = *(unsigned __int16 *)(dword_4C4378 + dword_4B101C * dword_4C4364 + 2);
    if ( (_WORD)result != 0xFFFF )
    {
      result = dword_4D0BAC + dword_4D0B98 * (__int16)result;
      v3 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(result + 4);
      if ( *(char *)(v3 + 224) == dword_8703A0 )
      {
        sub_43F830(*(__int16 *)(v3 + 2 * *(unsigned __int8 *)result + 240), 1);
        return sub_43AEE0(0);
      }
    }
  }
  else
  {
    result = a2 - 29;
    if ( a2 == 29 )
    {
      sub_435570(5, 0);
      result = dword_4B101C;
      if ( dword_4B101C != -1 )
        return sub_40BF60(dword_4B101C);
    }
  }
  return result;
}
