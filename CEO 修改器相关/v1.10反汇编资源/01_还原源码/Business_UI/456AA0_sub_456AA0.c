// 函数 0x456aa0  sub_456AA0  size=0x125  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_456AA0(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax

  result = a2 - 21;
  switch ( a2 )
  {
    case 21:
      sub_47C920(1);
      goto LABEL_15;
    case 22:
      sub_47C920(2);
      goto LABEL_15;
    case 37:
      sub_435570(6, 0);
      return sub_4569F0(1);
    case 38:
      sub_435570(6, 0);
      return sub_4569F0(2);
    case 39:
      sub_435570(6, 0);
      return sub_4569F0(3);
    case 40:
      sub_435570(6, 0);
      return sub_4569F0(4);
    case 41:
      sub_435570(6, 0);
      return sub_4569F0(5);
    case 42:
      sub_435570(6, 0);
      return sub_4569F0(6);
    case 43:
      sub_435570(6, 0);
      return sub_4569F0(7);
    case 44:
      sub_435570(6, 0);
      return sub_4569F0(8);
    case 142:
    case 143:
      sub_435570(6, 0);
      v5 = sub_464D00(228, 450, 669, 552);
      return sub_47C950(v5);
    case 144:
      sub_47C920(-1);
LABEL_15:
      sub_47C930(v4, v3);
      result = sub_435570(1, 0);
      break;
    case 153:
      result = sub_4565A0();
      break;
    default:
      return result;
  }
  return result;
}
