// 函数 0x42a210  sub_42A210  size=0x1A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42A210(int *a1)
{
  int result; // eax

  result = SteamInternal_FindOrCreateUserInterface(0);
  *a1 = result;
  return result;
}
