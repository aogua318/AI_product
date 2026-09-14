// 函数 0x42a270  sub_42A270  size=0x1F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42A270(int *a1)
{
  int HSteamUser; // eax
  int result; // eax

  HSteamUser = SteamAPI_GetHSteamUser("SteamInput006");
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser);
  *a1 = result;
  return result;
}
