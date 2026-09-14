// 函数 0x461610  sub_461610  size=0x2D0  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_461610(int a1, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      sub_435570(1, 0);
      if ( (*(_BYTE *)(dword_8D7DF8 + 9) & 2) == 0 )
        goto LABEL_4;
      sub_4810E0(0);
      sub_4810E0(0);
      sub_4810E0(0);
      sub_4810E0(0);
      dword_4CE034 = 1;
      goto LABEL_5;
    case 1:
      sub_435570(1, 0);
      if ( (*(_BYTE *)(dword_8D7DF8 + 297) & 2) == 0 )
        goto LABEL_4;
      sub_4810E0(0);
      sub_4810E0(0);
      sub_4810E0(0);
      sub_4810E0(0);
      dword_4CE034 = 2;
      goto LABEL_5;
    case 2:
      sub_435570(1, 0);
      if ( (*(_BYTE *)(dword_8D7DF8 + 585) & 2) == 0 )
        goto LABEL_4;
      sub_4810E0(0);
      sub_4810E0(0);
      sub_4810E0(0);
      sub_4810E0(0);
      dword_4CE034 = 3;
      goto LABEL_5;
    case 3:
      sub_435570(1, 0);
      if ( (*(_BYTE *)(dword_8D7DF8 + 873) & 2) != 0 )
      {
        sub_4810E0(0);
        sub_4810E0(0);
        sub_4810E0(0);
        sub_4810E0(0);
        dword_4CE034 = 4;
      }
      else
      {
        dword_4CE034 = 0;
      }
      sub_486D40(0, 0);
      sub_486D40(1, 1);
      result = sub_461100();
      if ( dword_4C2D34 == 4 )
        dword_4C2D34 = 5;
      return result;
    case 4:
      sub_435570(1, 0);
      if ( (*(_BYTE *)(dword_8D7DF8 + 1161) & 2) != 0 )
      {
        sub_4810E0(0);
        sub_4810E0(0);
        sub_4810E0(0);
        sub_4810E0(0);
        dword_4CE034 = 5;
      }
      else
      {
LABEL_4:
        dword_4CE034 = 0;
      }
LABEL_5:
      sub_486D40(0, 0);
      sub_486D40(1, 1);
      result = sub_461100();
      break;
    case 5:
      sub_435570(6, 0);
      if ( sub_47E410(dword_8D7CB8) )
      {
        result = sub_482FE0(dword_8D7CB8);
      }
      else
      {
        sub_482060(dword_8D7CB8);
        result = sub_482060(dword_8D7B88);
      }
      break;
    default:
      return result;
  }
  return result;
}
