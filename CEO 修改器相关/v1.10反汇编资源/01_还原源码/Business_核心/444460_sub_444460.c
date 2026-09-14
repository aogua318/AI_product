// 函数 0x444460  sub_444460  size=0xCA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_444460(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A76B8 )
    {
      v1 = sub_47C740("face\\face_btn2.fce");
      sub_481C90(&unk_8A76C0, v1, 1);
      sub_47D1A0(&unk_8A76C0, sub_4443F0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
      dword_8A76B8 = 1;
    }
    if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
      sub_4820C0(dword_8A77E8 + 288);
  }
  else if ( dword_8A76B8 )
  {
    sub_47CCD0(&unk_8A76C0);
    dword_8A76B8 = 0;
    sub_47E260(&unk_8A76C0);
  }
}
