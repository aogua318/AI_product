// 函数 0x4490c0  sub_4490C0  size=0xE1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4490C0()
{
  int v0; // esi
  char v2; // [esp+4h] [ebp-324h] BYREF

  dword_8B42E8 = (int)&v2;
  dword_8B4290 = dword_8703A0;
  dword_8B432C = (int)sub_448F20;
  dword_8B4330 = (int)sub_448C90;
  dword_8B5480 = (int)sub_448CD0;
  dword_8B547C = (int)sub_448D00;
  dword_8B548C = (int)sub_448D20;
  sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
  sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
  dword_8B42F0 = 1;
  v0 = sub_47DD20(&unk_8B4328, 0);
  dword_8B42F0 = 0;
  sub_4688B0(&dword_8B42F4);
  return v0;
}
