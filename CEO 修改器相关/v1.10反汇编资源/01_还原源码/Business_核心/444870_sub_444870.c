// 函数 0x444870  sub_444870  size=0x170  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_444870(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // edi
  int result; // eax
  char Buffer[256]; // [esp+8h] [ebp-104h] BYREF

  v1 = *(_DWORD *)(388 * *(__int16 *)(a1 * dword_4D0C70 + dword_4D0C84) + *(_DWORD *)dword_4D0C8C + 220);
  dword_8A8980 = (int)sub_4446C0;
  dword_8A898C = (int)sub_45E2A0;
  sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
  sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
  v2 = sub_47C740("face\\face_fix_machine.fce");
  sub_481C90(&unk_8A89B0, v2, 1);
  sub_47D1A0(&unk_8A89B0, sub_444690, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  _itoa(v1, Buffer, 10);
  sub_47FF50(Buffer);
  dword_8A897C = (int)sub_4446F0;
  dword_8A77F0 = 1;
  v3 = sub_47DD20(&unk_8A7828, 0);
  dword_8A77F0 = 0;
  sub_47CCD0(&unk_8A89B0);
  sub_47E260(&unk_8A89B0);
  result = sub_4688B0(&dword_8A77F4);
  if ( v3 )
    return sub_444710(a1);
  return result;
}
