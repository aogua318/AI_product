// 函数 0x445630  sub_445630  size=0xAB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_445630(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A8D58 && dword_4B1024 != -1 )
    {
      if ( dword_4B37F0 )
      {
        v1 = sub_47C740("face\\ToBuildFirm-1.fce");
        sub_481C90(&unk_8A8D60, v1, 1);
        atexit(sub_445620);
      }
      sub_47D1A0(&unk_8A8D60, sub_4454A0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8A8D58 = 1;
    }
  }
  else if ( dword_8A8D58 )
  {
    sub_47CCD0(&unk_8A8D60);
    dword_8A8D58 = 0;
  }
}
