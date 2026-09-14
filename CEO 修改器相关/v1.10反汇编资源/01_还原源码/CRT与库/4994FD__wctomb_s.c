// 函数 0x4994fd  _wctomb_s  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, 0);
}
