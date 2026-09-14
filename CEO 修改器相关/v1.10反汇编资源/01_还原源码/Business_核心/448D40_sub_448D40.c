// 函数 0x448d40  sub_448D40  size=0x1DB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_448D40(int a1, int a2)
{
  int v2; // eax
  int result; // eax
  char *v4; // edx
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // [esp-4h] [ebp-88h]
  int v18; // [esp+10h] [ebp-74h]
  char *v19; // [esp+14h] [ebp-70h]
  int v20[26]; // [esp+18h] [ebp-6Ch] BYREF

  if ( !a2 || (v2 = sub_464D00(273, 457, 619, 518), (result = sub_464BC0(v2)) != 0) )
  {
    v4 = (char *)&unk_4D10B8 + 189880 * dword_8B4298[dword_8B4290];
    v19 = v4;
    if ( dword_8B42EC )
    {
      if ( dword_8B42EC == 1 )
      {
        v9 = byte_4CE047;
        v10 = 0;
        v11 = byte_4CE047 - 14;
        do
        {
          v12 = v9;
          if ( v9 > 13 )
            v12 = v9 - 13 * (v11 / 0xD + 1);
          if ( v12 < 0 )
            v12 += 13 * ((-1 - v12) / 0xDu) + 13;
          v4 = v19;
          ++v10;
          *((double *)&v18 + v10) = *(double *)&v19[8 * v12 + 8096];
          --v9;
          --v11;
        }
        while ( v10 < 13 );
      }
      else if ( dword_8B42EC == 2 )
      {
        v5 = byte_4CE045;
        v6 = 0;
        v7 = byte_4CE045 - 14;
        do
        {
          v8 = v5;
          if ( v5 > 13 )
            v8 = v5 - 13 * (v7 / 0xD + 1);
          if ( v8 < 0 )
            v8 += 13 * ((-1 - v8) / 0xDu) + 13;
          v4 = v19;
          ++v6;
          *((double *)&v18 + v6) = *(double *)&v19[8 * v8 + 8200];
          --v5;
          --v7;
        }
        while ( v6 < 13 );
      }
    }
    else
    {
      v13 = dword_4CE04C;
      v14 = 0;
      do
      {
        v15 = v13;
        if ( v13 > 1000 )
          v15 = v13 - 1000 * ((v13 - 1001) / 0x3E8u + 1);
        if ( v15 < 0 )
          v15 += 1000 * ((-1 - v15) / 0x3E8u) + 1000;
        v4 = v19;
        ++v14;
        *((double *)&v18 + v14) = *(double *)&v19[8 * v15 + 96];
        --v13;
      }
      while ( v14 < 13 );
    }
    v17 = (unsigned __int16)word_87094E[*((__int16 *)v4 + 1)];
    v16 = sub_464D00(273, 457, 619, 518);
    return sub_45DE00(v16, 13, (int)v20, 1, v17, 0.0);
  }
  return result;
}
