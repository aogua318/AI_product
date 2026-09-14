// 函数 0x45e9d0  sub_45E9D0  size=0x54  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45E9D0(int a1)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax
  int v4; // ecx

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( *(char *)(v1 + 224) == sub_45E9A0() )
  {
    v2 = *(__int16 *)(v1 + 482);
    v3 = *(__int16 *)(v1 + 466);
    v4 = dword_8D35F8 + *(__int16 *)(v1 + 464);
    ++dword_8D35FC;
    dword_8D35F8 = v3 + v2 + v4;
  }
  return 0;
}
