// 函数 0x437000  sub_437000  size=0xFB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_437000()
{
  int v0; // eax
  int v1; // eax

  v0 = sub_47C740("face\\face_talk.fce");
  sub_481C90(&unk_89E418, v0, 1);
  v1 = 189880 * dword_89D220;
  *(_WORD *)(dword_89E540 + 286) = dword_89D22C[word_4D10BA[94940 * dword_89D220]];
  sub_47FF50(&byte_4D10C8[v1]);
  if ( dword_89D220 )
    sub_47E650(dword_89D220 + 6);
  else
    sub_482060(dword_89E540 + 1440);
  sub_47FF50(dword_89D21C);
  if ( dword_89D224 == -1 && dword_89D218 == -1 )
    sub_4820C0(dword_89E540 + 1152);
  sub_47D1A0(&unk_89E418, sub_436FB0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  dword_89D228 = GetTickCount();
  sub_47C920(0);
  return 1;
}
