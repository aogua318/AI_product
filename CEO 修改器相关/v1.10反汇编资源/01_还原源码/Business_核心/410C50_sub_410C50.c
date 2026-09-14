// 函数 0x410c50  sub_410C50  size=0xAB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_410C50()
{
  int v0; // eax
  int result; // eax

  v0 = 0;
  dword_4CDB50 = 0;
  dword_4D0B38[0] = 0;
  dword_4D0B3C = 0;
  dword_4D0B40 = 0;
  dword_4D0B44 = 0;
  dword_4D0B48 = 0;
  dword_4D0B4C = 0;
  dword_4D0B50 = 0;
  dword_4D0B54 = 0;
  dword_4D0B58 = 0;
  dword_4D0B5C = 0;
  dword_4CD4AC = 0;
  dword_4D0B60 = 0;
  if ( !dword_8CAF68 )
  {
    if ( sub_4640D0() % 100 >= 5 )
      goto LABEL_5;
    v0 = dword_4D0470 / 50;
  }
  dword_4CDB54 = v0;
LABEL_5:
  sub_464F60(sub_410890);
  if ( dword_4D046C != dword_4CD4AC )
    dword_4D046C = dword_4CD4AC;
  result = dword_4D0B60;
  if ( dword_4D0470 != dword_4D0B60 )
    dword_4D0470 = dword_4D0B60;
  return result;
}
