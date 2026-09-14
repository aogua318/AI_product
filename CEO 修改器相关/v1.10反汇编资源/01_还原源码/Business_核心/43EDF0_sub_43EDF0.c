// 函数 0x43edf0  sub_43EDF0  size=0x46  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43EDF0()
{
  int result; // eax

  result = dword_4B35E0;
  if ( dword_4B35E0 != -1 )
  {
    sub_467760(*(__int16 *)(*(_DWORD *)dword_4D0C8C + 388 * (dword_4B35E0 < 0 ? 0 : dword_4B35E0) + 4));
    return sub_466CA0(&dword_8EEDEC, 440, 182);
  }
  return result;
}
