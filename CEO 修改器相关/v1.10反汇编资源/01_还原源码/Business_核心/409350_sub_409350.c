// 函数 0x409350  sub_409350  size=0x229  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __cdecl sub_409350(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  char v8; // si

  LOBYTE(v2) = a2 - 26;
  switch ( a2 )
  {
    case 26:
      sub_435570(1, 0);
      v5 = sub_47E410(dword_4C2EA0 + 9792);
      v6 = dword_4C2EA0 + 9792;
      if ( v5 )
      {
        sub_482FE0(v6);
        sub_482FE0(dword_4C2EA0 + 10080);
        sub_481AC0(&unk_4CE0B0, 88, word_4D03D0, &word_4D0308);
        v7 = word_4D03D0 - 20;
        if ( v7 < 0 )
          v7 = 0;
        sub_47ECC0(v7 + 1);
        sub_480880(v7);
        sub_481500(v7);
        LOBYTE(v2) = sub_4801E0(-1);
      }
      else
      {
        sub_482060(v6);
        LOBYTE(v2) = sub_482060(dword_4C2EA0 + 10080);
      }
      break;
    case 27:
      sub_435570(1, 0);
      dword_8BE07C = (int)sub_453670;
      dword_8BE080 = (int)sub_4525A0;
      dword_8BF1D0 = (int)sub_452600;
      dword_8BF1CC = (int)sub_452630;
      dword_8BF1DC = (int)sub_456360;
      sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
      sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
      dword_8BE044 = 1;
      sub_47DD20(&unk_8BE078, 0);
      dword_8BE044 = 0;
      LOBYTE(v2) = sub_4688B0(&dword_8BE048);
      break;
    case 28:
      sub_435570(1, 0);
      v2 = a2;
      v3 = dword_4B1014;
      while ( 1 )
      {
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            if ( v4 == 1 )
              v2 = sub_455F10();
          }
          else
          {
            v2 = sub_4490C0();
          }
        }
        else
        {
          v2 = sub_457890();
        }
        if ( v2 == -1 )
          break;
        v3 = v2;
        dword_4B1014 = v2;
      }
      break;
    case 29:
      sub_435570(1, 0);
      dword_8B78EC = (int)sub_44A7E0;
      dword_8B78F0 = (int)sub_449F80;
      dword_8B8A40 = (int)sub_449FD0;
      dword_8B8A3C = (int)sub_44A000;
      dword_8B8A4C = (int)sub_456360;
      sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
      sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
      dword_8B72C0 = 1;
      v8 = sub_47DD20(&unk_8B78E8, 0);
      dword_8B72C0 = 0;
      sub_4688B0(&dword_8B72C4);
      LOBYTE(v2) = v8;
      break;
    case 30:
      if ( dword_4CE000 )
      {
        sub_435570(1, 0);
        dword_8B576C = (int)sub_4496F0;
        dword_8B5770 = (int)sub_449860;
        dword_8B68BC = (int)sub_449420;
        dword_8B68C0 = (int)sub_449880;
        dword_8B68CC = (int)sub_456360;
        sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
        sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
        dword_8B5730 = 1;
        sub_47DD20(&unk_8B5768, 0);
        dword_8B5730 = 0;
        sub_4688B0(&dword_8B5734);
        LOBYTE(v2) = sub_4091E0();
      }
      break;
    case 31:
      sub_435570(1, 0);
      LOBYTE(v2) = sub_44B960();
      break;
    case 32:
      LOBYTE(v2) = sub_435570(1, 0);
      dword_4C5DD4 = 1;
      break;
    case 33:
      sub_435570(1, 0);
      LOBYTE(v2) = sub_42BB00(word_4D03D0 - 1);
      break;
    case 34:
      sub_482060(dword_4C2EA0 + 9792);
      sub_482060(dword_4C2EA0 + 10080);
      LOBYTE(v2) = sub_42BB00(*(_DWORD *)(dword_4C2EA0 + 9844));
      break;
    case 37:
      sub_435570(1, 0);
      sub_462910();
      LOBYTE(v2) = dword_4C2D34 & 0xF;
      if ( (dword_4C2D34 & 0xF) == 1 )
        ++dword_4C2D34;
      break;
    default:
      return v2;
  }
  return v2;
}
