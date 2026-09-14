// 函数 0x468720  sub_468720  size=0x40  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__cdecl sub_468720(_BYTE *a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax
  int v5; // esi

  result = (_BYTE *)a3;
  if ( a3 > 0 )
  {
    v5 = a3;
    result = a2;
    do
    {
      if ( result[2] )
      {
        *a1 = *result;
        a1[1] = result[1];
        a1[2] = result[2];
        a1 += 3;
        result += 3;
      }
      else
      {
        result += 3;
        a1 += 3;
      }
      --v5;
    }
    while ( v5 );
  }
  return result;
}
