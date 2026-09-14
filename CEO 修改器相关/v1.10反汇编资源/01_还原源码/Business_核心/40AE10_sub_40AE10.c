// 函数 0x40ae10  sub_40AE10  size=0xA7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __cdecl sub_40AE10(int a1)
{
  DWORD result; // eax

  result = GetTickCount();
  if ( (int)(result - dword_4C434C) > 400 )
  {
    dword_4C434C = result;
    result = sub_437FC0(&dword_4C4450);
  }
  if ( dword_4C5DD4 )
  {
    dword_4C5DD4 = 0;
    if ( byte_4C45A8 )
    {
      sub_47FF50(&byte_4C45A8);
      dword_4C2D20 = a1;
      sub_482F10(dword_4C4450, dword_4C4454);
      sub_47D1A0(&unk_4C2EA8, sub_40ADE0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0);
    }
    return sub_40ADB0();
  }
  return result;
}
