// 函数 0x4416e0  sub_4416E0  size=0x56  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_4416E0(int a1)
{
  int v1; // eax

  dword_8A66F8 = 0;
  v1 = *(__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98 + 2 * a1 + 240);
  if ( v1 == -1 || *(_BYTE *)(v1 * dword_4CC8BC + dword_4CC8D0 + 9) == 2 )
    return 0;
  sub_464ED0(sub_441600);
  return dword_8A66F8;
}
