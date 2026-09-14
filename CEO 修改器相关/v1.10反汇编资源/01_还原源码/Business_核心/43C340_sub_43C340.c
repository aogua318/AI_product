// 函数 0x43c340  sub_43C340  size=0x189  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43C340(int a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1 )
  {
    if ( !dword_8A0E44 )
    {
      v1 = sub_47C740("face\\face_machine.fce");
      sub_481C90(&unk_8A0F78, v1, 1);
      v2 = sub_47C740("face\\factinf_clrsel.fce");
      sub_481C90(&unk_8A0E48, v2, 1);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
      {
        sub_4820C0(dword_8A10A0 + 6624);
        sub_4820C0(dword_8A10A0 + 8352);
        sub_4820C0(dword_8A10A0 + 16416);
        sub_4820C0(dword_8A10A0 + 16128);
        sub_4820C0(dword_8A10A0 + 15840);
      }
      sub_43B560();
      sub_47D1A0(&unk_8A0F78, sub_43BF90, 0, 0, 0, 0, 0, 0, 0, 0, sub_43C230, 100);
      sub_47D1A0(&unk_8A0E48, sub_43C2A0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      sub_4830A0(&unk_8A0E48);
      dword_8A0E44 = 1;
    }
  }
  else if ( dword_8A0E44 )
  {
    sub_47CCD0(&unk_8A0E48);
    sub_47CCD0(&unk_8A0F78);
    dword_8A0E44 = 0;
    sub_47E260(&unk_8A0E48);
    sub_47E260(&unk_8A0F78);
  }
}
