// 函数 0x4609f0  sub_4609F0  size=0x102  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4609F0(int a1, int a2)
{
  int v2; // esi

  switch ( a2 )
  {
    case '$':
      sub_45FF20(1, dword_4B38B8);
      sub_460070();
      break;
    case '%':
      dword_8D6074 = 1;
      sub_47CFC0(&unk_4D0DF4, &unk_4D0DF4);
      break;
    case '-':
      sub_435570(5, 0);
      if ( sub_45E910() )
      {
        if ( dbl_8D2308 <= dbl_4D10C0[23735 * dword_8703A0] )
        {
          v2 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
          sub_42EDA0((char *)&unk_4D10B8 + 189880 * dword_8703A0, -dbl_8D2308);
          sub_42EDA0((char *)&unk_4D10B8 + 189880 * *(char *)(v2 + 224), dbl_8D2308);
          sub_41C040(dword_4B1028, dword_8703A0);
          sub_40DD00(*(__int16 *)(v2 + 1620));
        }
      }
      break;
  }
}
