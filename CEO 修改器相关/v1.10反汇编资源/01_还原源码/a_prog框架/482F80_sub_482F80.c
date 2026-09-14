// 函数 0x482f80  sub_482F80  size=0x37  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_482F80(int this)
{
  int result; // eax

  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
      result = sub_482180(this);
      break;
    case 2:
      result = sub_482450(this);
      break;
    case 3:
      result = sub_4816C0(this);
      break;
    case 4:
      result = sub_482A30(this);
      break;
    case 5:
      result = sub_47FD50(this);
      break;
    case 6:
      result = sub_480590((__int16 *)this);
      break;
    case 7:
      result = sub_481B10(this);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
