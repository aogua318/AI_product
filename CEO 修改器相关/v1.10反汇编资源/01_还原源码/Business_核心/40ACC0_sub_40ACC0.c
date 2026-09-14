// 函数 0x40acc0  sub_40ACC0  size=0xE7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD sub_40ACC0()
{
  DWORD result; // eax
  int v1; // eax
  int v2; // eax

  if ( dword_4C4458 < 0 || dword_4C445C < 0 )
  {
    result = sub_47CCD0(&unk_4C2FD8);
    dword_4C4348 = 0;
  }
  else
  {
    word_4C30EC = dword_4C4458;
    word_4C30EE = dword_4C445C;
    if ( !dword_4C4348 )
    {
      sub_47D1A0(&unk_4C2FD8, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
      dword_4C4348 = 1;
    }
    result = GetTickCount();
    if ( (int)(result - dword_4C4344) > 300 )
    {
      dword_4C4344 = result;
      if ( ++dword_4C4340 >= 8 )
        dword_4C4340 = 0;
      v1 = sub_47E590(dword_4C3100);
      sub_47C950(v1);
      *(_WORD *)(dword_4C3100 + 14) = dword_4C4340;
      v2 = sub_47E590(dword_4C3100);
      return sub_47C950(v2);
    }
  }
  return result;
}
