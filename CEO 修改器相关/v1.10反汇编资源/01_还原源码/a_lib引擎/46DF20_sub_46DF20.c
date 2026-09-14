// 函数 0x46df20  sub_46DF20  size=0x67  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_46DF20(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  _WORD *v5; // esi
  int v6; // edx
  _WORD *v7; // eax
  int i; // ecx
  int v9; // [esp+14h] [ebp+10h]

  v3 = a3;
  if ( a3 )
  {
    v4 = dword_8DBDF4 + 8 * a1;
    v5 = Src;
    v9 = v4;
    do
    {
      v6 = *(__int16 *)(v4 + 4);
      v7 = *(_WORD **)v4;
      for ( i = 0; i < v6; ++v7 )
      {
        if ( a2 )
        {
          --a2;
        }
        else
        {
          *v5++ = *v7;
          if ( !--v3 )
            break;
        }
        ++i;
      }
      v4 = v9 + 8;
      v9 += 8;
    }
    while ( v3 );
    Src = v5;
  }
}
