// 函数 0x46ea70  sub_46EA70  size=0x64  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_46EA70(int a1, int a2, int a3)
{
  _WORD *v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // esi
  _WORD *v7; // eax
  int i; // edx
  int v9; // [esp+14h] [ebp+10h]

  v3 = (_WORD *)dword_8DBE50;
  v4 = a3;
  if ( a3 )
  {
    v5 = dword_8DBE60 + 8 * a1;
    v9 = v5;
    do
    {
      v6 = *(__int16 *)(v5 + 4);
      v7 = *(_WORD **)v5;
      for ( i = 0; i < v6; ++i )
      {
        if ( a2 )
        {
          --a2;
          ++v7;
        }
        else
        {
          *v3++ = *v7++;
          if ( !--v4 )
            break;
        }
      }
      v5 = v9 + 8;
      v9 += 8;
    }
    while ( v4 );
  }
}
