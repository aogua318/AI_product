// 函数 0x443920  sub_443920  size=0xB9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_443920(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  result = a2;
  dword_4B37EC = a2;
  if ( a1 )
  {
    if ( !dword_8A7438 )
    {
      v3 = sub_47C740("face\\factinf_sale.fce");
      sub_481E60(v3, &unk_8A5E28);
      sub_47D1A0(&unk_8A7448, sub_4432B0, sub_4434A0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      result = sub_443330();
      dword_8A7438 = 1;
    }
  }
  else if ( dword_8A7438 )
  {
    sub_47CCD0(&unk_8A7448);
    dword_8A7438 = 0;
    return sub_47E260(&unk_8A7448);
  }
  return result;
}
