// 函数 0x435520  sub_435520  size=0x2A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_435520(int a1)
{
  int *v1; // esi
  int result; // eax

  dword_4B32C8 = a1;
  v1 = (int *)&unk_89D1DC;
  do
  {
    result = sub_46C5D0(a1);
    v1 += 2;
  }
  while ( (int)v1 < (int)&dword_89D204 );
  return result;
}
