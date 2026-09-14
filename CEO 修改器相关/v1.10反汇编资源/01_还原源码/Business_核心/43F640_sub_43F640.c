// 函数 0x43f640  sub_43F640  size=0x4A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F640(int a1, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      result = sub_43F830(-1, 1);
      break;
    case 1:
      result = sub_43F830(-1, 2);
      break;
    case 2:
      result = sub_43F830(-1, 3);
      break;
    case 3:
      result = sub_43F830(-1, 4);
      break;
    default:
      return result;
  }
  return result;
}
