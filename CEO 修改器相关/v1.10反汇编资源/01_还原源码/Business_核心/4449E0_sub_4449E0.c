// 函数 0x4449e0  sub_4449E0  size=0xB4  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4449E0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A8AE0 )
    {
      v1 = sub_47C740("face\\infact_name.fce");
      sub_481C90(&unk_8A8AE8, v1, 1);
      sub_47FF50(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 204);
      sub_47D1A0(&unk_8A8AE8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8A8AE0 = 1;
    }
  }
  else if ( dword_8A8AE0 )
  {
    sub_47CCD0(&unk_8A8AE8);
    sub_47E260(&unk_8A8AE8);
    dword_8A8AE0 = 0;
  }
}
