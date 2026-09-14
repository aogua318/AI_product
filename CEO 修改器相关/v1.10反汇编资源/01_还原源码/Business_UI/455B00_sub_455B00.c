// 函数 0x455b00  sub_455B00  size=0x49  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_455B00(int a1, int a2)
{
  int v2; // ecx
  int result; // eax

  if ( !a2 )
  {
    v2 = *(_DWORD *)(a1 + 296);
    if ( dword_8BF5B0 != *(_DWORD *)(v2 + 52) )
    {
      dword_8BF5B0 = *(_DWORD *)(v2 + 52);
      dword_8BF6A8 = -1;
    }
    sub_482060(dword_8C0C20);
    sub_454030();
    sub_455730();
    return sub_453A70();
  }
  return result;
}
