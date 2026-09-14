// 函数 0x4189a0  sub_4189A0  size=0x10A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4189A0()
{
  int result; // eax

  result = dword_4D10A8 + dword_4B32B0 * dword_4D1094;
  if ( 16 * *(_BYTE *)(result + 11) != 32 && *(_BYTE *)(result + 12) != 3 && *(_BYTE *)(result + 13) != 3 )
  {
    dword_4B1110 = (char)(16 * *(_BYTE *)(result + 11)) >> 4;
    if ( *(_WORD *)(result + 26) == 0xFFFF )
    {
      if ( *(_WORD *)(result + 28) == 0xFFFF )
      {
        if ( *(_WORD *)(result + 30) == 0xFFFF )
          return result;
        dword_4B1114 = 7;
        dword_4B1118 = *(__int16 *)(result + 30);
      }
      else
      {
        dword_4B1114 = 6;
        dword_4B1118 = *(__int16 *)(result + 28);
      }
    }
    else
    {
      dword_4B1114 = 0;
      dword_4B1118 = *(__int16 *)(result + 26);
    }
    sub_42BF60(dword_4B32B0);
    dword_4B32B0 = -1;
    if ( dword_4B1110 == 1 )
    {
      sub_445020(1);
      sub_47CFC0(dword_4D0DE4, dword_4D0DE4);
      dword_8A8C24 = 1;
      return sub_444AB0();
    }
    else
    {
      if ( !dword_4B1110 )
      {
        sub_445020(0);
        sub_47CFC0(dword_4D0DE4, dword_4D0DE4);
        dword_8A8C24 = 2;
      }
      return sub_444AB0();
    }
  }
  return result;
}
