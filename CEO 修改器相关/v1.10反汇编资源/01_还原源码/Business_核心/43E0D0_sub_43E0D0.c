// 函数 0x43e0d0  sub_43E0D0  size=0xD1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43E0D0()
{
  int v0; // edx
  int v1; // ecx
  int v2; // eax
  char v3; // cl
  int v4; // eax

  v0 = dword_8A1D58;
  if ( ((__int16)dword_8A1D5C < 15 || (__int16)dword_8A1D5C > 19) && (unsigned __int16)(dword_8A1D5C - 20) > 4u )
    goto LABEL_17;
  v1 = *(_DWORD *)(dword_8A1D58 + 2032);
  v2 = (__int16)dword_8A1D5C >= 20 ? v1 + (__int16)dword_8A1D5C - 20 : v1 + (__int16)dword_8A1D5C - 15;
  if ( v2 >= dword_8A1B1C )
    goto LABEL_17;
  v3 = byte_8A1B24[8 * v2];
  if ( !v3 )
  {
    v4 = word_8A1B26[4 * v2];
    if ( dword_4B35D0 != v4 )
    {
      dword_4B35D0 = v4;
      sub_43DF30();
    }
    return sub_43EE40(dword_4B35D0);
  }
  if ( v3 < 4 || v3 > 9 )
  {
LABEL_17:
    dword_4B35D0 = -1;
    dword_4B35D4 = -1;
    sub_482060(dword_8A1D58 + 7200);
    return sub_43EE40(dword_4B35D0);
  }
  if ( dword_4B35D4 != v3 )
  {
    dword_4B35D4 = v3 - 4;
    sub_43E000();
    v0 = dword_8A1D58;
  }
  return sub_482FE0(v0 + 7200);
}
