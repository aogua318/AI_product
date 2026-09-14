// 函数 0x4532a0  sub_4532A0  size=0x2DB  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_4532A0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ebx
  const char *v6; // esi
  char *v7; // edi

  result = a4 - 3;
  switch ( a4 )
  {
    case 3:
      result = sub_452950(0);
      break;
    case 19:
      sub_47C930(a1, a2);
      result = sub_435570(1, 0);
      break;
    case 20:
      if ( sub_47E410(dword_8BF458) )
      {
        v5 = dword_4D0C98;
        if ( dword_4D0C98 > 0 )
        {
          v6 = *(const char **)dword_4D0C94;
          v7 = (char *)&unk_8BDEA0;
          do
          {
            strcpy(v7, v6);
            v7 += 20;
            v6 += 68;
            --v5;
          }
          while ( v5 );
          v5 = dword_4D0C98;
        }
        sub_481AC0(&unk_8BDEA0, 20, v5, 0);
        sub_481A70(dword_4D0C98);
        sub_4801E0(dword_8BE030);
        result = sub_482FE0(dword_8BF458);
      }
      else
      {
        sub_482060(dword_8BF458);
        result = sub_482060(dword_8BF328);
      }
      break;
    case 21:
      sub_435570(6, 0);
      dword_4B382C = 1;
      result = sub_452950(1);
      break;
    case 22:
      sub_435570(6, 0);
      dword_4B382C = 0;
      result = sub_452950(1);
      break;
    case 23:
      sub_435570(6, 0);
      dword_8BE040 = 0;
      result = sub_452950(1);
      break;
    case 24:
      sub_435570(6, 0);
      dword_8BE040 = 1;
      result = sub_452950(1);
      break;
    case 25:
      sub_435570(6, 0);
      dword_8BE040 = 2;
      result = sub_452950(1);
      break;
    case 26:
      sub_435570(6, 0);
      dword_8BE040 = 3;
      result = sub_452950(1);
      break;
    case 27:
      sub_435570(6, 0);
      dword_8BE040 = 4;
      result = sub_452950(1);
      break;
    case 28:
      sub_435570(6, 0);
      dword_8BE040 = 5;
      result = sub_452950(1);
      break;
    case 29:
      sub_435570(6, 0);
      dword_8BE040 = 6;
      result = sub_452950(1);
      break;
    case 30:
      sub_435570(6, 0);
      dword_8BE040 = 7;
      result = sub_452950(1);
      break;
    case 31:
      sub_435570(6, 0);
      dword_8BE040 = 8;
      result = sub_452950(1);
      break;
    case 38:
      sub_435570(6, 0);
      dword_8BE03C = 0;
      result = sub_452950(1);
      break;
    case 39:
      sub_435570(6, 0);
      dword_8BE03C = 1;
      result = sub_452950(1);
      break;
    case 41:
      sub_435570(6, 0);
      dword_4B3828 = 0;
      result = sub_452950(1);
      break;
    case 42:
      sub_435570(6, 0);
      dword_4B3828 = 1;
      result = sub_452950(1);
      break;
    case 43:
      sub_435570(6, 0);
      dword_4B3828 = 2;
      result = sub_452950(1);
      break;
    default:
      return result;
  }
  return result;
}
