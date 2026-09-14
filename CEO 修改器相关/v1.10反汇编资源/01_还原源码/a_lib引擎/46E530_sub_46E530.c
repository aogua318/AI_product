// 函数 0x46e530  sub_46E530  size=0x6F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_46E530(int a1, int a2, int a3)
{
  _BYTE *v3; // ecx
  int v4; // edx
  int v5; // edi
  _BYTE *v6; // eax
  int i; // esi

  v3 = (_BYTE *)dword_8DBE20;
  if ( a3 )
  {
    v4 = dword_8DBE30 + 8 * a1;
    do
    {
      v5 = *(__int16 *)(v4 + 4);
      v6 = *(_BYTE **)v4;
      for ( i = 0; i < v5; ++i )
      {
        if ( a2 )
        {
          --a2;
          v6 += 3;
        }
        else
        {
          *v3 = *v6;
          v3[1] = v6[1];
          v3[2] = v6[2];
          v3 += 3;
          v6 += 3;
          if ( !--a3 )
            break;
        }
      }
      v4 += 8;
    }
    while ( a3 );
  }
}
