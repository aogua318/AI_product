// 函数 0x460f50  sub_460F50  size=0xD6  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_460F50()
{
  int result; // eax

  if ( dword_8D7A58 )
  {
    sub_4810E0(0);
    sub_4810E0(0);
    sub_4810E0(0);
    sub_4810E0(0);
    sub_4810E0(0);
    result = dword_4CE034 - 1;
    switch ( dword_4CE034 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        result = sub_4810E0(1);
        break;
      default:
        return result;
    }
  }
  return result;
}
