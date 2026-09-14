// 函数 0x468480  sub_468480  size=0xDD  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __cdecl sub_468480(__int16 *a1, __int16 *a2, int a3)
{
  signed int result; // eax
  __int16 *v5; // esi
  __int16 v6; // dx
  __int16 v7; // bx
  bool v8; // zf

  result = a3;
  if ( a3 > 0 )
  {
    v5 = a1;
    do
    {
      result = *((unsigned __int8 *)a2 + 2);
      v6 = *a2;
      a2 = (__int16 *)((char *)a2 + 3);
      if ( result > 15 )
      {
        if ( result == 255 )
        {
          *v5 = v6;
        }
        else
        {
          v7 = *v5;
          v5 = a1;
          result = *a1 & 0xFFFF8000
                 | ((((v7 & 0x7C00) << 8) + (result + 1) * ((v6 & 0x7C00) - (v7 & 0x7C00))) >> 8) & 0x7C00
                 | ((((v7 & 0x1F) << 8) + (result + 1) * ((v6 & 0x1F) - (v7 & 0x1F))) >> 8) & 0x1F
                 | ((((v7 & 0x3E0) << 8) + (result + 1) * ((v6 & 0x3E0) - (v7 & 0x3E0))) >> 8) & 0x3E0;
          *a1 = result;
        }
      }
      ++v5;
      v8 = a3-- == 1;
      a1 = v5;
    }
    while ( !v8 );
  }
  return result;
}
