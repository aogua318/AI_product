// 函数 0x475b30  sub_475B30  size=0x48  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__usercall sub_475B30@<eax>(_DWORD *result@<eax>)
{
  int v1; // edx
  int v2; // ecx

  if ( result[7] )
  {
    v1 = unk_4B6088;
    *result = off_4B5EF4;
  }
  else
  {
    v2 = dword_4B5F78[16 * (2 * result[13] - result[4]) + result[12]];
    v1 = dword_4B6078[v2];
    *result = *(&off_4B5EE4 + v2);
  }
  result[3] = v1;
  return result;
}
