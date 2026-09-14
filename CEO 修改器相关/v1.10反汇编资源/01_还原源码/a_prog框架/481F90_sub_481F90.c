// 函数 0x481f90  sub_481F90  size=0x51  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_481F90(_WORD *this)
{
  int *result; // eax

  switch ( *(this + 2) )
  {
    case 1:
      result = sub_47E590(this);
      break;
    case 2:
      result = sub_481220(this);
      break;
    case 3:
      result = sub_47EEA0(this);
      break;
    case 4:
      result = sub_47F430(this);
      break;
    case 5:
      result = sub_47F9F0(this);
      break;
    case 6:
      result = sub_47FFB0(this);
      break;
    case 7:
      result = sub_480990(this);
      break;
    default:
      result = sub_464D00(100000, 100000, -100000, -100000);
      break;
  }
  return result;
}
