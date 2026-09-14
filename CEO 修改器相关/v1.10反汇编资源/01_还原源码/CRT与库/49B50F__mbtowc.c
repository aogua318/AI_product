// 函数 0x49b50f  _mbtowc  size=0x1A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, 0);
}
