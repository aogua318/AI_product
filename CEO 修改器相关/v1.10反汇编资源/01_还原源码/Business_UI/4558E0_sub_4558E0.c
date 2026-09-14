// 函数 0x4558e0  sub_4558E0  size=0x1AF  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4558E0(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx

  result = a2 - 20;
  switch ( a2 )
  {
    case 20:
      sub_435570(6, 0);
      sub_47C920(0);
      return sub_47C930(v6, v5);
    case 21:
      sub_435570(6, 0);
      sub_47C920(1);
      return sub_47C930(v8, v7);
    case 26:
      sub_435570(6, 0);
      dword_8BF808 = 0;
      sub_455730();
      goto LABEL_3;
    case 27:
      sub_435570(6, 0);
      dword_8BF808 = 1;
      sub_455730();
      goto LABEL_3;
    case 28:
      sub_435570(6, 0);
      dword_8BF808 = 2;
      sub_455730();
LABEL_3:
      result = sub_453A70();
      break;
    case 80:
      sub_435570(1, 0);
      sub_47C920(-1);
      result = sub_47C930(v10, v9);
      break;
    case 81:
      sub_435570(1, 0);
      v3 = sub_47E410(dword_8C0C20);
      v4 = dword_8C0C20;
      if ( v3 )
      {
        sub_482FE0(dword_8C0C20);
        sub_482060(dword_8C0AF0);
        sub_482060(dword_8C0AF0 + 288);
        v4 = dword_8C0AF0 + 576;
      }
      result = sub_482060(v4);
      break;
    case 82:
      sub_435570(1, 0);
      if ( sub_47E410(dword_8C0AF0 + 288 * dword_8BF6AC) )
      {
        sub_482FE0(dword_8C0AF0 + 288 * dword_8BF6AC);
        if ( dword_8BF6AC == 1 )
          sub_482FE0(dword_8C0AF0 + 576);
        result = sub_482060(dword_8C0C20);
      }
      else
      {
        result = sub_482060(dword_8C0AF0 + 288 * dword_8BF6AC);
        if ( dword_8BF6AC == 1 )
          result = sub_482060(dword_8C0AF0 + 576);
      }
      break;
    default:
      return result;
  }
  return result;
}
