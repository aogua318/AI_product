// 函数 0x43f7c0  sub_43F7C0  size=0x5B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F7C0(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  result = a2 - 7;
  switch ( a2 )
  {
    case 7:
      goto LABEL_5;
    case 8:
      dword_8A5E24 = 0;
      goto LABEL_5;
    case 10:
      dword_8A5E24 = 1;
      goto LABEL_5;
    case 11:
      dword_8A5E24 = 2;
LABEL_5:
      v3 = sub_464D00(628, 250, 786, 550);
      result = sub_47C950(v3);
      break;
    default:
      return result;
  }
  return result;
}
