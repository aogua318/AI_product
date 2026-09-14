// 函数 0x45d840  sub_45D840  size=0x61  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __cdecl sub_45D840(int a1)
{
  DWORD result; // eax
  int v2; // eax

  result = GetTickCount();
  if ( a1 != *(_DWORD *)(dword_8D21C0 + 324) || (int)(result - dword_8D21C8) > 500 )
  {
    dword_8D21C8 = result;
    v2 = *(__int16 *)(dword_8D21C0 + 14) + 1;
    if ( v2 > 3 )
      v2 = 0;
    sub_47E650(v2);
    sub_480A80(a1);
    return sub_47CB10(1);
  }
  return result;
}
