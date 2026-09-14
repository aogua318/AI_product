// 函数 0x466b50  sub_466B50  size=0xF9  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_466B50(_WORD *a1, int a2, int a3)
{
  int result; // eax
  _WORD *v5; // esi
  int v6; // edx
  __int16 v7; // bx
  bool v8; // zf

  result = a3;
  if ( a3 > 0 )
  {
    v5 = a1;
    do
    {
      v6 = ((dword_8DBD10 + (*(_WORD *)a2 & 0x3E0)) >> 1) & 0x3E0
         | ((dword_8DBD14 + (*(_WORD *)a2 & 0x7C1F)) >> 1) & 0x7C1F;
      result = *(unsigned __int8 *)(a2 + 2);
      a2 += 3;
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
          result = ((((v7 & 0x7C00) << 8) + (result + 1) * ((v6 & 0x7C00) - (v7 & 0x7C00))) >> 8) & 0x7C00
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
