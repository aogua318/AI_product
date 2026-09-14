// 函数 0x482120  sub_482120  size=0x42  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_482120(_WORD *this, __int16 a2, __int16 a3)
{
  HWND result; // eax

  result = (HWND)((__int16)*(this + 2) - 1);
  switch ( *(this + 2) )
  {
    case 1:
      result = sub_47E910(this, a2, a3);
      break;
    case 2:
      result = sub_481640(this, a2, a3);
      break;
    case 3:
      result = sub_47F210(this, a2, a3);
      break;
    case 4:
      result = sub_47F8A0(this, a2, a3);
      break;
    case 5:
      result = sub_47FED0(this, a2, a3);
      break;
    case 6:
      result = sub_4808E0(this, a2, a3);
      break;
    case 7:
      result = sub_480F40(this, a2, a3);
      break;
    default:
      return result;
  }
  return result;
}
