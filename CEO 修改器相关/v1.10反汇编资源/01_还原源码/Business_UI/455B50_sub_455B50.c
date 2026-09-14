// 函数 0x455b50  sub_455B50  size=0x79  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_455B50(int a1, int a2)
{
  int result; // eax
  int v3; // esi

  result = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 340);
  }
  else
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
  }
  sub_482060(dword_8C0AF0);
  sub_482060(dword_8C0AF0 + 288);
  sub_482060(dword_8C0AF0 + 576);
  dword_8BF6A8 = *(__int16 *)(*(_DWORD *)dword_8BF768 + 2 * v3);
  sub_455730();
  return sub_453A70();
}
