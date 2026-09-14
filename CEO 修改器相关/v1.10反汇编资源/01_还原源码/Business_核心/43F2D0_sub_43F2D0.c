// 函数 0x43f2d0  sub_43F2D0  size=0x99  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F2D0(int a1, int a2)
{
  int result; // eax

  result = a2 - 4;
  switch ( a2 )
  {
    case 4:
      if ( *(_BYTE *)(dword_8A5CE0 + 7494) )
      {
        sub_43EEF0();
        result = sub_482FE0(dword_8A5CE0 + 7488);
      }
      else
      {
        result = sub_482060(dword_8A5CE0 + 7488);
      }
      break;
    case 14:
      if ( dword_8A4A20 )
      {
        sub_4830C0(&unk_8A4900);
        result = sub_482F10(370, 295);
      }
      else
      {
        result = sub_4830A0(&unk_8A4900);
      }
      break;
    case 26:
      sub_43F010();
      result = sub_482060(dword_8A5CE0 + 7488);
      break;
    case 27:
      result = sub_47C930();
      break;
    default:
      return result;
  }
  return result;
}
