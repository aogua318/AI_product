// 函数 0x47e4a0  sub_47E4A0  size=0x82  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E4A0(__int16 *this, _DWORD *a2, int *a3)
{
  int result; // eax

  result = *(this + 2) - 1;
  switch ( *(this + 2) )
  {
    case 1:
    case 3:
      *a2 = *(this + 5);
      result = *(this + 6);
      *a3 = result;
      break;
    case 2:
      *a2 = *(this + 14);
      *a3 = *(this + 15);
      result = (int)a2;
      break;
    case 4:
      *a2 = *(this + 14);
      *a3 = *(this + 15);
      result = (int)a2;
      break;
    case 5:
    case 7:
      *a2 = *(this + 4);
      result = *(this + 5);
      *a3 = result;
      break;
    case 6:
      *a2 = *(this + 5);
      *a3 = *(this + 6);
      result = (int)a2;
      break;
    default:
      return result;
  }
  return result;
}
