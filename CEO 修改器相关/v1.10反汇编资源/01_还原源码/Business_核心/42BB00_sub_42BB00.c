// 函数 0x42bb00  sub_42BB00  size=0x32  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__cdecl sub_42BB00(int a1)
{
  __int16 *result; // eax

  result = (__int16 *)((char *)&unk_4CE0A8 + 88 * a1);
  if ( *result != -1 || result[1] != -1 )
    return (__int16 *)sub_485F80(*result, result[1]);
  return result;
}
