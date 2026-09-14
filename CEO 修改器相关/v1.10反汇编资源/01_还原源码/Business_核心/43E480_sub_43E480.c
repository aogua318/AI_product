// 函数 0x43e480  sub_43E480  size=0x98  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43E480()
{
  int v0; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\buystuff_confirm.fce");
  sub_481C90(&unk_8A3190, v0, 1);
  _itoa(Value, Buffer, 10);
  sub_47FF50(Buffer);
  sub_47D1A0(&unk_8A3190, sub_447C10, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
