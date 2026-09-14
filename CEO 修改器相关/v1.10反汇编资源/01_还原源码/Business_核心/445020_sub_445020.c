// 函数 0x445020  sub_445020  size=0xB7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_445020(int a1)
{
  int result; // eax
  int v2; // eax

  if ( a1 )
  {
    if ( dword_4CD128 < *(char *)(*(_DWORD *)dword_4D10B0 + 3) )
      result = a1;
    else
      result = 0;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 11) )
      result = 1;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 19) )
      result = 2;
  }
  else
  {
    result = 3;
    if ( dword_4CD128 < *(char *)(*(_DWORD *)dword_4D10B0 + 27) )
      result = 0;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 35) )
      result = 4;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 43) )
      result = 5;
  }
  switch ( result )
  {
    case 0:
      v2 = sub_47C740("pics\\cur_mgr0");
      goto LABEL_22;
    case 1:
      v2 = sub_47C740("pics\\cur_mgr1");
      goto LABEL_22;
    case 2:
      v2 = sub_47C740("pics\\cur_mgr2");
      goto LABEL_22;
    case 3:
      v2 = sub_47C740("pics\\cur_wkr0");
      goto LABEL_22;
    case 4:
      v2 = sub_47C740("pics\\cur_wkr1");
      goto LABEL_22;
    case 5:
      v2 = sub_47C740("pics\\cur_wkr2");
LABEL_22:
      result = sub_467AB0(v2);
      break;
    default:
      return result;
  }
  return result;
}
