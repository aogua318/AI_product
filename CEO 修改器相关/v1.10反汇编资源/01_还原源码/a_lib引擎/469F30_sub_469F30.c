// 函数 0x469f30  sub_469F30  size=0x57  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __cdecl sub_469F30(const char *a1)
{
  signed int result; // eax
  signed int v2; // esi
  char v3; // bl
  signed int i; // [esp+8h] [ebp-4h]

  result = strlen(a1);
  v2 = 0;
  for ( i = result; v2 < result; ++v2 )
  {
    v3 = a1[v2];
    if ( (unsigned __int8)v3 < 0x80u )
    {
      if ( v3 == 92 || v3 == 47 )
      {
        a1[v2] = 0;
        sub_469F20(a1);
        result = i;
        a1[v2] = v3;
      }
    }
    else
    {
      ++v2;
    }
  }
  return result;
}
