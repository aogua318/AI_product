// 函数 0x49d640  sub_49D640  size=0x4A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_49D640(HWND a1)
{
  if ( DirectDrawCreate(0, &lpDD, 0) || lpDD->lpVtbl->SetCooperativeLevel(lpDD, a1, 17) )
  {
    sub_49D610();
    return 0;
  }
  else
  {
    dword_8F38D4 = (int)a1;
    dword_8F38D8 = 1;
    return 1;
  }
}
