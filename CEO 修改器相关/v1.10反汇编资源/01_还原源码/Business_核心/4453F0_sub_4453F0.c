// 函数 0x4453f0  sub_4453F0  size=0xA3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4453F0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A8C18 )
    {
      v1 = sub_47C740("face\\face_salary_0.fce");
      sub_481C90(&unk_8A8C28, v1, 1);
      sub_47D1A0(&unk_8A8C28, sub_4450F0, 0, 0, 0, 0, 0, 0, 1, 0, sub_445230, 100);
      dword_8A8C18 = 1;
    }
    sub_444AB0();
  }
  else if ( dword_8A8C18 )
  {
    sub_47CCD0(&unk_8A8C28);
    dword_8A8C18 = 0;
    sub_47E260(&unk_8A8C28);
  }
}
