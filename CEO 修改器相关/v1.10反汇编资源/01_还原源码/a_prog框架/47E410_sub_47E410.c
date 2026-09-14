// 函数 0x47e410  sub_47E410  size=0x19  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E410(int this)
{
  int result; // eax

  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      result = *(char *)(this + 6);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
