// 函数 0x45af20  sub_45AF20  size=0xE7  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45AF20(int a1, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      dword_8CB1E0 = 0;
      break;
    case 1:
      dword_8CB1E0 = 1;
      break;
    case 2:
      dword_8CB1E0 = 2;
      break;
    case 3:
      dword_4B385C = 0;
      break;
    case 4:
      dword_4B385C = 27;
      break;
    case 5:
      dword_4B385C = 30;
      break;
    case 6:
      dword_4B385C = 9;
      break;
    case 7:
      dword_4B385C = 15;
      break;
    case 8:
      dword_4B385C = 21;
      break;
    case 9:
      dword_4B385C = 18;
      break;
    case 10:
      dword_4B385C = 24;
      break;
    case 11:
      dword_4B385C = 3;
      break;
    case 12:
      dword_4B385C = 6;
      break;
    case 13:
      dword_4B385C = 12;
      break;
    case 14:
      dword_4B385C = 66;
      break;
    case 15:
      result = sub_45B050(0);
      break;
    default:
      if ( a2 >= 16 )
      {
        dword_4B385C = a2 + 150;
        result = a2 + 150;
      }
      break;
  }
  return result;
}
