// 函数 0x458660  sub_458660  size=0xC8  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_458660()
{
  int v0; // esi
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF

  v0 = atoi((const char *)(dword_8C76B0 + 30268));
  sprintf(Buffer, "%d", v0);
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d", dword_4B383C);
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d", v0 + dword_4B383C);
  return sub_47FF50(Buffer);
}
