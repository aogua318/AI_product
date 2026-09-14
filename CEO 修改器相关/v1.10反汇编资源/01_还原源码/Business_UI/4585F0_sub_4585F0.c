// 函数 0x4585f0  sub_4585F0  size=0x64  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4585F0()
{
  int i; // esi
  int result; // eax
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF

  sprintf(Buffer, "%d", dword_4B383C);
  for ( i = 40896; i < 42624; i += 288 )
    result = sub_47FF50(Buffer);
  return result;
}
