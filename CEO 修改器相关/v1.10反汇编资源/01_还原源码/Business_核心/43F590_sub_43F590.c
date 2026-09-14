// 函数 0x43f590  sub_43F590  size=0xAD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F590(int a1, _DWORD *a2)
{
  dword_8A48C0 = a1;
  dword_8A48C8 = 0;
  dword_8A4A34 = (int)sub_43F3F0;
  dword_8A4A38 = (int)sub_43F520;
  dword_8A5B88 = (int)sub_43F560;
  sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
  sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
  dword_8A48CC = 0;
  sub_47DD20(&unk_8A4A30, 0);
  sub_4688B0(&dword_8A48D0);
  *a2 = dword_8A48CC;
  return dword_8A48C8;
}
