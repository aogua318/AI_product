// 函数 0x45fd30  sub_45FD30  size=0x50  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45FD30(int a1)
{
  __int16 *v1; // esi
  int v2; // edi

  v1 = (__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 488);
  v2 = 32;
  do
  {
    if ( v1[1] == dword_4B38B8 && sub_464E90(*v1) )
      ++dword_8D5F68;
    v1 += 4;
    --v2;
  }
  while ( v2 );
  return 0;
}
