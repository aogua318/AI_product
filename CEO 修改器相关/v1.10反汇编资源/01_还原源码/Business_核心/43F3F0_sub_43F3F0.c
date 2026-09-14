// 函数 0x43f3f0  sub_43F3F0  size=0x12E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43F3F0()
{
  int v0; // eax
  int v1; // eax
  int v2; // esi
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\face_put_machine.fce");
  sub_481C90(&unk_8A5BB8, v0, 1);
  sub_47D1A0(&unk_8A5BB8, sub_43F2D0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  v1 = sub_47C740("face\\factinf_clrsel.fce");
  sub_481C90(&unk_8A4900, v1, 1);
  sub_47D1A0(&unk_8A4900, sub_43F3A0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  sub_4830A0(&unk_8A4900);
  v2 = *(_DWORD *)dword_4D0C8C + 388 * dword_8A48C0;
  _itoa(*(char *)(v2 + 15), Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(*(char *)(v2 + 14), Buffer, 10);
  sub_47FF50(Buffer);
  sub_43EEF0();
  sub_43F010();
  return 1;
}
