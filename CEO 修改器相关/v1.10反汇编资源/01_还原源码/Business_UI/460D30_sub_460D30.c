// 函数 0x460d30  sub_460D30  size=0x8D  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_460D30(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8D62E0 )
    {
      v1 = sub_47C740("face\\MapRotate.fce");
      sub_481C90(&unk_8D62E8, v1, 1);
      sub_47D1A0(&unk_8D62E8, sub_460CB0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8D62E0 = 1;
    }
  }
  else if ( dword_8D62E0 )
  {
    sub_47CCD0(&unk_8D62E8);
    dword_8D62E0 = 0;
    sub_47E260(&unk_8D62E8);
  }
}
