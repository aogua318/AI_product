// 函数 0x45f090  sub_45F090  size=0x5A  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45F090()
{
  int v0; // edx
  int v1; // ecx
  signed int v2; // esi

  v2 = GetTickCount() - dword_8D3740;
  if ( v2 > 5000 )
    sub_47C930(v1, v0);
  if ( v2 % 400 <= 200 )
    return sub_4820C0(dword_8D4A28 + 288);
  else
    return sub_483040(dword_8D4A28 + 288);
}
