// 函数 0x4975ea  sub_4975EA  size=0x2D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4975EA(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_4B9180;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}
