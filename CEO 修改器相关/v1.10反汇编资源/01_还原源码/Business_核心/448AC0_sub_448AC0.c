// 函数 0x448ac0  sub_448AC0  size=0xF9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_448AC0(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx

  result = a2 - 20;
  switch ( a2 )
  {
    case 20:
      sub_435570(6, 0);
      sub_47C920(0);
      return sub_47C930(v4, v3);
    case 22:
      sub_435570(6, 0);
      sub_47C920(2);
      return sub_47C930(v6, v5);
    case 28:
      sub_435570(6, 0);
      dword_8B42EC = 0;
      goto LABEL_8;
    case 29:
      sub_435570(6, 0);
      dword_8B42EC = 1;
      goto LABEL_8;
    case 30:
      sub_435570(6, 0);
      dword_8B42EC = 2;
LABEL_8:
      v7 = sub_464D00(273, 457, 619, 518);
      result = sub_47C950(v7);
      break;
    case 65:
      sub_435570(1, 0);
      sub_47C920(-1);
      result = sub_47C930(v9, v8);
      break;
    case 66:
      sub_435570(6, 0);
      if ( sub_47E410(dword_8B55D8) )
        result = sub_482FE0(dword_8B55D8);
      else
        result = sub_482060(dword_8B55D8);
      break;
    default:
      return result;
  }
  return result;
}
