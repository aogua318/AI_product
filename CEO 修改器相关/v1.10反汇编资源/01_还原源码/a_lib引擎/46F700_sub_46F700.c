// 函数 0x46f700  sub_46F700  size=0x37  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

MMRESULT __cdecl sub_46F700(HMMIO *a1, LPMMCKINFO pmmcki, MMCKINFO *pmmckiParent)
{
  mmioSeek(*a1, pmmckiParent->dwDataOffset + 4, 0);
  pmmcki->ckid = 1635017060;
  return mmioDescend(*a1, pmmcki, pmmckiParent, 0x10u);
}
