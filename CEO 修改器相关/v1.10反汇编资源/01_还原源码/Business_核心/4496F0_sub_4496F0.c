// 函数 0x4496f0  sub_4496F0  size=0x16F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4496F0()
{
  int v0; // eax
  double v1; // st7
  double v3; // [esp+0h] [ebp-10Ch]
  char Buffer[256]; // [esp+8h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\Bank.fce");
  sub_481C90(&unk_8B68F0, v0, 1);
  sub_47D1A0(&unk_8B68F0, sub_449390, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  sub_42E710();
  v3 = sub_42EB70((double *)&unk_4D10B8 + 23735 * dword_8703A0);
  sub_438190((unsigned __int64)v3, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_4CCBA8, Buffer, 10);
  sub_47FF50(Buffer);
  v1 = (double)dword_4CCBA8 * v3 / 100.0;
  if ( v1 <= 0.0 )
    v1 = 0.0;
  dbl_8B5720 = v1;
  sub_438190((unsigned __int64)v1, Buffer, 10);
  sub_47FF50(Buffer);
  sub_47FF50(Buffer);
  dbl_8B5718 = 0.0;
  dbl_8B5728 = 0.0;
  sub_4491B0();
  return 1;
}
