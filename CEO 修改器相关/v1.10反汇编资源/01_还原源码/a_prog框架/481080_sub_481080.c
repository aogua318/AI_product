// 函数 0x481080  sub_481080  size=0x44  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_481080(void *this, int a2, int a3)
{
  int result; // eax

  switch ( *((_WORD *)this + 2) )
  {
    case 1:
      result = sub_47E8A0(this, a2, a3);
      break;
    case 2:
      result = sub_47ED10((__int16 *)this, a2, a3);
      break;
    case 3:
      result = sub_47F1F0((__int16 *)this, a2, a3);
      break;
    case 4:
      result = sub_47F880((__int16 *)this, a2, a3);
      break;
    case 5:
      result = sub_47FEB0((__int16 *)this, a2, a3);
      break;
    case 6:
      result = sub_480750((int)this, a2, a3);
      break;
    case 7:
      result = sub_480E60((__int16 *)this, a2, a3);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
