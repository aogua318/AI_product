// 函数 0x447ea0  sub_447EA0  size=0x83  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_447EA0(int a1, int a2)
{
  int result; // eax

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_435570(4, 0);
      if ( dword_4B1028 != -1 )
        sub_419F20(dword_4CCAAC + dword_4B1028 * dword_4CCA98);
      return sub_4820C0(dword_8AF6C8 + 288);
    }
    else
    {
      result = a2 - 2;
      if ( a2 == 2 )
      {
        sub_435570(62, 0);
        result = sub_448120();
        if ( result )
          return sub_417F10(dword_4B1028);
      }
    }
  }
  else
  {
    sub_435570(1, 0);
    dword_8B09FC = (int)sub_4483B0;
    dword_8B0A00 = (int)sub_448430;
    dword_8B1B50 = (int)sub_448450;
    dword_8B1B5C = (int)sub_4482B0;
    dword_8B1B4C = (int)sub_448480;
    dword_8B1B7C = (int)sub_448350;
    sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
    sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
    dword_8B09C0 = 1;
    sub_47DD20(&unk_8B09F8, 0);
    dword_8B09C0 = 0;
    return sub_4688B0(&dword_8B09C4);
  }
  return result;
}
