// 函数 0x4431f0  sub_4431F0  size=0xB9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4431F0(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  result = a2;
  dword_4B37E8 = a2;
  if ( a1 )
  {
    if ( !dword_8A7150 )
    {
      v3 = sub_47C740("face\\factinf_retail.fce");
      sub_481E60(v3, &unk_8A5E28);
      sub_47D1A0(&unk_8A7160, sub_442B90, sub_442D80, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      result = sub_442C10();
      dword_8A7150 = 1;
    }
  }
  else if ( dword_8A7150 )
  {
    sub_47CCD0(&unk_8A7160);
    dword_8A7150 = 0;
    return sub_47E260(&unk_8A7160);
  }
  return result;
}
