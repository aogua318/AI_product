// 函数 0x47e450  sub_47E450  size=0x29  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E450(int this)
{
  int result; // eax

  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
    case 3:
      result = *(_BYTE *)(this + 9) & 1;
      break;
    case 2:
    case 4:
    case 5:
    case 6:
      result = *(char *)(this + 6);
      break;
    case 7:
      result = *(_BYTE *)(this + 17) & 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
