// 函数 0x43f6a0  sub_43F6A0  size=0x10A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43F6A0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A5CE8 )
    {
      v1 = sub_47C740("face\\face_btn1.fce");
      sub_481C90(&unk_8A5CF0, v1, 1);
      sub_47D1A0(&unk_8A5CF0, sub_43F640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      dword_8A5CE8 = 1;
      switch ( dword_4B37C8 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
          sub_4810E0(1);
          break;
        default:
          break;
      }
      sub_43F830(-1, dword_4B37C8);
    }
  }
  else if ( dword_8A5CE8 )
  {
    sub_43F830(-1, 0);
    sub_47CCD0(&unk_8A5CF0);
    dword_8A5CE8 = 0;
    sub_47E260(&unk_8A5CF0);
  }
}
