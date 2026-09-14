// 函数 0x442ad0  sub_442AD0  size=0xB9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_442AD0(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  result = a2;
  dword_4B37E4 = a2;
  if ( a1 )
  {
    if ( !dword_8A6E68 )
    {
      v3 = sub_47C740("face\\factinf_profit.fce");
      sub_481E60(v3, &unk_8A5E28);
      sub_47D1A0(&unk_8A6E78, sub_442370, sub_442450, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      result = sub_4426F0();
      dword_8A6E68 = 1;
    }
  }
  else if ( dword_8A6E68 )
  {
    sub_47CCD0(&unk_8A6E78);
    dword_8A6E68 = 0;
    return sub_47E260(&unk_8A6E78);
  }
  return result;
}
