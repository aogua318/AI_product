// 函数 0x42a230  sub_42A230  size=0x1F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42A230(int *a1)
{
  int HSteamUser; // eax
  int result; // eax

  HSteamUser = SteamAPI_GetHSteamUser("STEAMAPPS_INTERFACE_VERSION008");
  result = SteamInternal_FindOrCreateUserInterface(HSteamUser);
  *a1 = result;
  return result;
}
