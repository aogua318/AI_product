// 函数 0x447510  sub_447510  size=0xE9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_447510(int a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    if ( !dword_8AA520 )
    {
      sub_460B00(1);
      v2 = sub_47C740("face\\MyFirmInfo.fce");
      sub_481C90(&unk_8AA528, v2, 1);
      sub_47D1A0(&unk_8AA528, sub_4473C0, 0, 0, 0, 0, 0, 0, 0, 0, sub_447480, 100);
      dword_8AA520 = 1;
      if ( !a2 )
        sub_4820C0(dword_8AA650 + 576);
      sub_447420();
    }
  }
  else if ( dword_8AA520 )
  {
    sub_47CCD0(&unk_8AA528);
    dword_8AA520 = 0;
    sub_47E260(&unk_8AA528);
    sub_447F30(0);
    sub_460B00(0);
  }
}
