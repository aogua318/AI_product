// 函数 0x43dba0  sub_43DBA0  size=0x160  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __fastcall sub_43DBA0(int a1)
{
  int v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  if ( !dword_8A8C24 )
  {
    v1 = a1 + *(_DWORD *)(dword_8A1D58 + 2032);
    v2 = dword_8A1B1C;
    if ( v1 < dword_8A1B1C )
    {
      v3 = 0;
      if ( dword_8A1B1C > 0 )
      {
        do
          byte_8A1B25[8 * v3++] = 0;
        while ( v3 < v2 );
      }
      byte_8A1B25[8 * v1] = 1;
      v4 = sub_464D00(624, 200, 800, 600);
      sub_47C950(v4);
      sub_4095B0();
      sub_43E360(0);
      sub_43E3F0(0);
      sub_43E650(0);
      sub_484120(dword_8EED88, dword_8EED8C, &v6, &v7);
      v5 = byte_8A1B24[8 * v1];
      switch ( byte_8A1B24[8 * v1] )
      {
        case 0:
          sub_4268F0(dword_4B1028, word_8A1B26[4 * v1], v6, v7, 0);
          break;
        case 1:
          dword_8A1C20 = v1;
          sub_40C120(v6, v7, 0);
          break;
        case 2:
          dword_8A1C24 = v1 - 8;
          sub_4307E0(dword_4B1028, v6, v7, 0);
          break;
        case 3:
          sub_413C50(v6, v7, 0);
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          dword_8A1B14 = v5 - 4;
          sub_434280(v5 - 4, v6, v7, 0);
          break;
        default:
          return;
      }
    }
  }
}
