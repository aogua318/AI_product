// 函数 0x440650  sub_440650  size=0x213  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_440650(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  result = a2;
  dword_4B37D0 = a2;
  if ( a1 )
  {
    if ( !dword_8A6220 )
    {
      v3 = sub_47C740("face\\factinf_buy.fce");
      sub_481E60(v3, &unk_8A5E28);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
        sub_482060(dword_8A65B8 + 1152);
      v4 = sub_47C740("face\\face_list.fce");
      sub_481C90(&unk_8A6360, v4, 1);
      sub_481AC0(*(_DWORD *)dword_4D0C94, 68, dword_4D0C98, 0);
      sub_481A70(dword_4D0C98);
      sub_4808E0(676, 230);
      v5 = sub_47C740("face\\face_list.fce");
      sub_481E60(v5, &unk_8A6360);
      sub_4808E0(585, 170);
      sub_47D1A0(&unk_8A6490, sub_440030, sub_440180, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      sub_47D1A0(&unk_8A6360, sub_4400F0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      sub_4830A0(&unk_8A6360);
      sub_47D1A0(&unk_8A6230, sub_4400F0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      sub_4830A0(&unk_8A6230);
      result = sub_43FE60();
      dword_8A6220 = 1;
    }
  }
  else if ( dword_8A6220 )
  {
    if ( (dword_4D0AB0 & 1) != 0 )
      dword_4D0AB0 &= ~1u;
    sub_47CCD0(&unk_8A6230);
    sub_47CCD0(&unk_8A6360);
    sub_47CCD0(&unk_8A6490);
    dword_8A6220 = 0;
    sub_47E260(&unk_8A6230);
    sub_47E260(&unk_8A6360);
    return sub_47E260(&unk_8A6490);
  }
  return result;
}
