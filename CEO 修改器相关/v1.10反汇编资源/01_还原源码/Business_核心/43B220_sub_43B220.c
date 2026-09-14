// 函数 0x43b220  sub_43B220  size=0x98  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43B220()
{
  int v0; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\FirmMachineSell.fce");
  sub_481C90(&unk_89F9D0, v0, 1);
  sub_438320(dword_89E810, Buffer, 10);
  sub_47FF50(Buffer);
  sub_47D1A0(&unk_89F9D0, sub_44AFE0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
