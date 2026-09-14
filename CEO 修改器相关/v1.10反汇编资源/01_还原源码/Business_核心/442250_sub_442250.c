// 函数 0x442250  sub_442250  size=0x11D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_442250(int a1, int a2)
{
  int v2; // eax
  int v3; // eax

  if ( a1 )
  {
    dword_4B37E0 = a2;
    if ( !dword_8A6700 )
    {
      v2 = sub_47C740("face\\factinf_pro.fce");
      sub_481C90(&unk_8A6838, v2, 1);
      v3 = sub_47C740("face\\factinf_clrsel.fce");
      sub_481C90(&unk_8A6708, v3, 1);
      sub_47D1A0(&unk_8A6838, sub_4420B0, 0, 0, 0, 0, 0, 0, 0, 0, sub_441DC0, 100);
      sub_47D1A0(&unk_8A6708, sub_441740, 0, 0, 0, 0, 0, 0, 1, 0, 0, 100);
      sub_4830A0(&unk_8A6708);
      dword_8A6700 = 1;
    }
    sub_4418B0();
  }
  else if ( dword_8A6700 )
  {
    sub_47CCD0(&unk_8A6708);
    sub_47CCD0(&unk_8A6838);
    dword_8A6700 = 0;
    sub_47E260(&unk_8A6708);
    sub_47E260(&unk_8A6838);
  }
}
