// 函数 0x42b240  sub_42B240  size=0x145  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42B240(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int i; // ebx
  int j; // esi

  sub_4842C0(a1, a2, 16, 1, 0, 74);
  sub_484240(280, -200);
  sub_4841A0(9, 41);
  sub_4841F0(606, 519);
  sub_483B80(&unk_4D0F38);
  sub_483A60(0, &unk_4D0E58, 1);
  sub_483A60(1, &unk_4D0F24, 1);
  sub_465930(dword_4D0EE0, 0, a2 * a1);
  sub_465930(dword_4D0EE4, 0, a2 * a1);
  sub_4836F0(4);
  sub_483BB0(128);
  v2 = sub_47C740("data\\gnd32x16");
  sub_488370(v2, dword_4D0E68, 0, 0);
  v3 = sub_47C740("data\\road32x16");
  sub_488370(v3, dword_4D0E68, 1, 0);
  for ( i = 0; i < a2; ++i )
  {
    for ( j = 0; j < a1; ++j )
      sub_488230(j, i, 0, 1);
  }
  return 1;
}
