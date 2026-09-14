// 函数 0x43e590  sub_43E590  size=0xB7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43E590(int a1)
{
  int v1; // esi

  Value = a1;
  dword_8A200C = (int)sub_43E480;
  dword_8A2010 = (int)sub_43E520;
  dword_8A3160 = (int)sub_43E540;
  dword_8A315C = (int)sub_43E570;
  dword_8A316C = (int)sub_45E2A0;
  sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
  sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
  dword_8A1FD4 = 1;
  v1 = sub_47DD20(&unk_8A2008, 0);
  dword_8A1FD4 = 0;
  sub_4688B0(&dword_8A1FD8);
  return v1;
}
