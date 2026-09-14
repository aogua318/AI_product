// 函数 0x42b930  sub_42B930  size=0x1C4  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_42B930(__int16 a1, __int16 a2, int a3, char *a4, int a5)
{
  int v5; // eax
  __int16 v6; // si
  int v7; // eax
  char *v8; // eax
  char *v9; // ecx
  char *v10; // edx
  char v11; // al
  int v12; // esi
  int v13; // eax
  int v14; // eax
  char v15; // al
  int v16; // eax

  if ( !a5 || !*(_BYTE *)a5 )
  {
    v5 = 0;
    if ( !a5 || (a3 != dword_8703A0 ? (v5 = *(char *)(a5 + 3)) : (v5 = *(char *)(a5 + 2)), v5 >= 0) )
    {
      v6 = word_4B32A8[v5];
      *(_WORD *)(dword_4C2EA0 + 9780) = v6;
      sub_47F400(a4);
      if ( word_4D03D0 >= 100 )
      {
        word_4D03D0 = 99;
        memcpy_0(&unk_4CE0A8, &unk_4CE100, 0x2208u);
        memcpy_0(word_4D0308, &unk_4D030A, 0xC6u);
      }
      v7 = 88 * word_4D03D0;
      word_4D0308[word_4D03D0] = v6;
      v8 = (char *)&unk_4CE0A8 + v7;
      *(_WORD *)v8 = a1;
      *((_WORD *)v8 + 1) = a2;
      v8[4] = a3;
      if ( a5 )
        v8[5] = *(_BYTE *)a5;
      else
        v8[5] = 0;
      a4[79] = 0;
      v9 = a4;
      v10 = (char *)(v8 + 8 - a4);
      do
      {
        v11 = *v9;
        v9[(_DWORD)v10] = *v9;
        ++v9;
      }
      while ( v11 );
      ++word_4D03D0;
      if ( !sub_47E410(dword_4C2EA0 + 9792) )
      {
        v12 = word_4D03D0 - 20;
        if ( v12 < 0 )
          v12 = 0;
        sub_481AC0(&unk_4CE0B0, 88, word_4D03D0, word_4D0308);
        sub_47ECC0(v12 + 1);
        v13 = sub_481F90(dword_4C2EA0 + 9792);
        sub_47C950(v13);
        v14 = sub_481F90(dword_4C2EA0 + 10080);
        sub_47C950(v14);
      }
      if ( a5 )
      {
        if ( !dword_4C2D18 )
        {
          v15 = *(_BYTE *)(a5 + 1);
          if ( v15 != -1 )
            sub_435570(v15, 0);
        }
        v16 = *(_DWORD *)(a5 + 4);
        if ( v16 != -1 )
          sub_45F0F0(v16, a4);
      }
    }
  }
}
