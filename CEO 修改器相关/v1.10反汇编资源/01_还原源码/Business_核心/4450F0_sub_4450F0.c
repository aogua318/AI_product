// 函数 0x4450f0  sub_4450F0  size=0x13C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__cdecl sub_4450F0(int a1, int a2)
{
  __int16 *result; // eax

  result = (__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98);
  if ( a2 )
  {
    if ( a2 != 2 )
    {
      if ( dword_8A8C24 )
      {
        dword_8A8C24 = 0;
        return (__int16 *)sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
      }
      return result;
    }
    if ( !dword_4D0AB0
      && dword_4B119C == -1
      && dword_4B32B8 == -1
      && dword_4B1020 == -1
      && dword_4B1104 == -1
      && dword_4B32C0 == -1
      && result[233] - result[235] > 0 )
    {
      dword_8A8C24 = 2;
      sub_445020(0);
LABEL_21:
      result = (__int16 *)sub_47CFC0(dword_4D0DE4, dword_4D0DE4);
      dword_4B1118 = -1;
      dword_4B1114 = -1;
    }
  }
  else if ( !dword_4D0AB0
         && dword_4B119C == -1
         && dword_4B32B8 == -1
         && dword_4B1020 == -1
         && dword_4B1104 == -1
         && dword_4B32C0 == -1
         && result[232] - result[234] > 0 )
  {
    dword_8A8C24 = 1;
    sub_445020(1);
    goto LABEL_21;
  }
  return result;
}
