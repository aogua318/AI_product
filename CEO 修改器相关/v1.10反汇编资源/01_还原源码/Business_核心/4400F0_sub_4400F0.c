// 函数 0x4400f0  sub_4400F0  size=0x8E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4400F0(void *a1)
{
  int v1; // eax

  if ( a1 == &unk_8A6230 )
  {
    sub_414D20(dword_4B1028, word_8A6050[*(_DWORD *)(dword_8A6358 + 52)]);
    sub_43FE60();
    v1 = sub_464D00(628, 250, 786, 550);
    sub_47C950(v1);
    sub_4830A0(&unk_8A6360);
    sub_4830A0(&unk_8A6230);
    dword_4D0AB0 &= ~1u;
  }
  else
  {
    sub_43FC60(0);
  }
  dword_8EED90 = 0;
  return sub_435570(1, 0);
}
