// 函数 0x42e350  sub_42E350  size=0x53  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42E350(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = dword_4D10A8 + a1 * dword_4D1094;
  if ( !dword_4CD13C || *(char *)(dword_4CCA98 * *(__int16 *)(v1 + 14) + dword_4CCAAC + 224) >= 7 )
  {
    v2 = *(char *)(v1 + 12) - 1;
    if ( !v2 || v2 == 2 )
      sub_42DD90(a1);
  }
  return 0;
}
