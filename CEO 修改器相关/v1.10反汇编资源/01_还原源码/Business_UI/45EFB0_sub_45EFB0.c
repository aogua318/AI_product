// 函数 0x45efb0  sub_45EFB0  size=0x7A  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45EFB0()
{
  int v0; // eax

  v0 = sub_47C740("face\\face_event.fce");
  sub_481C90(&unk_8D4900, v0, 1);
  sub_47E650(dword_8D3738 + 1);
  sub_47FF50(dword_8D373C);
  sub_47D1A0(&unk_8D4900, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  dword_8D3740 = GetTickCount();
  return 1;
}
