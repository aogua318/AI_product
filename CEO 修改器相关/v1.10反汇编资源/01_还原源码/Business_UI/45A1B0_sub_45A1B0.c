// 函数 0x45a1b0  sub_45A1B0  size=0xE5  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_45A1B0()
{
  int v0; // eax
  BOOL v1; // [esp-4h] [ebp-4h]

  dword_8C89CC = (int)sub_45A050;
  dword_8C89D0 = (int)sub_45A160;
  dword_8C9B20 = (int)sub_45A180;
  dword_8C9B2C = (int)sub_45E2A0;
  sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
  sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
  v1 = sub_47DD20(&unk_8C89C8, 0) == 1;
  sub_47C920(v1);
  sub_4688B0(&dword_8C8998);
  sub_423630(0);
  sub_4357C0(-1, 0);
  v0 = sub_47C740("Video\\lose.wmv");
  sub_46BF10((int)hInstance, hWnd, 0, 0, 800, 600, v0);
  sub_435860(1);
}
