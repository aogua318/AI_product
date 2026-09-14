// 函数 0x464d00  sub_464D00  size=0x49  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl sub_464D00(int a1, int a2, int a3, int a4)
{
  if ( (dword_8DB824 & 1) == 0 )
  {
    dword_8DB824 |= 1u;
    sub_464B60(&dword_8DB814);
  }
  dword_8DB814 = a1;
  dword_8DB820 = a4;
  dword_8DB818 = a2;
  dword_8DB81C = a3;
  return &dword_8DB814;
}
