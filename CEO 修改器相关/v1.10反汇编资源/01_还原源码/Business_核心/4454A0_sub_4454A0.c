// 函数 0x4454a0  sub_4454A0  size=0x147  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4454A0(int a1, int a2)
{
  if ( dword_4B1024 != -1 )
  {
    switch ( a2 )
    {
      case 0:
      case 1:
        if ( sub_447B80() )
        {
          sub_40DF20(dword_4B1024, 0);
          sub_4472C0(1, 1);
          sub_435570(35, 0);
        }
        break;
      case 2:
        if ( sub_447B80() )
        {
          sub_40DF20(dword_4B1024, 1);
          goto LABEL_7;
        }
        break;
      case 3:
        if ( sub_447B80() )
        {
          sub_40DF20(dword_4B1024, 2);
LABEL_7:
          sub_4472C0(1, 1);
          sub_435570(36, 0);
        }
        break;
      case 4:
        if ( sub_447B80() )
        {
          sub_40DF20(dword_4B1024, 3);
          goto LABEL_12;
        }
        break;
      case 5:
        if ( sub_447B80() )
        {
          sub_40DF20(dword_4B1024, 4);
LABEL_12:
          sub_4472C0(1, 1);
          sub_435570(37, 0);
        }
        break;
      case 6:
        if ( sub_447B80() )
        {
          sub_40DF20(dword_4B1024, 5);
          sub_4472C0(1, 1);
          sub_435570(38, 0);
        }
        break;
      case 13:
        if ( sub_447E10() )
        {
          sub_40FC00(dword_4B1024);
          sub_40DD00(dword_4B1024);
          sub_435570(5, 0);
        }
        break;
      default:
        return;
    }
  }
}
