// 函数 0x4443f0  sub_4443F0  size=0x6E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4443F0(int a1, int a2)
{
  int savedregs; // [esp+0h] [ebp+0h]

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( dword_4C2D34 == 20 )
      {
        dword_4C2D34 = 21;
        dword_8A7584 = 0;
      }
      sub_435570(1, 0);
      sub_43E1D0((*(unsigned __int8 *)(dword_8A77E8 + 297) >> 1) & 1);
    }
  }
  else
  {
    sub_4810E0(0);
    sub_43E1D0(0);
    savedregs = 1;
    dword_4B1198 = -1;
    dword_4B101C = -1;
    dword_4B1100 = -1;
    dword_4B32BC = -1;
    dword_4B32B4 = -1;
    dword_4B32A0 = -1;
    dword_4B1170 = -1;
    dword_4B32B0 = -1;
    sub_447F30(0);
    sub_43AEE0(0);
    sub_43B130(0);
    sub_43C9C0(0);
    sub_43D660(0);
    sub_43C340(0);
    sub_43C4D0(0);
  }
}
