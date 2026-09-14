// 函数 0x46f740  sub_46F740  size=0xCB  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46F740(HMMIO hmmio, unsigned int a2, int a3, int a4, unsigned int *a5)
{
  int result; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // esi
  char *pchNext; // eax
  struct _MMIOINFO pmmioinfo; // [esp+14h] [ebp-4Ch] BYREF

  result = mmioGetInfo(hmmio, &pmmioinfo, 0) != 0;
  if ( result )
    goto LABEL_11;
  v6 = a2;
  v7 = *(_DWORD *)(a4 + 4);
  if ( a2 > v7 )
    v6 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = v7 - v6;
  v8 = 0;
  if ( v6 )
  {
    pchNext = pmmioinfo.pchNext;
    while ( 1 )
    {
      if ( pchNext == pmmioinfo.pchEndRead )
      {
        result = mmioAdvance(hmmio, &pmmioinfo, 0);
        if ( result )
          goto LABEL_11;
        pchNext = pmmioinfo.pchNext;
        if ( pmmioinfo.pchNext == pmmioinfo.pchEndRead )
          break;
      }
      *(_BYTE *)(a3 + v8++) = *pchNext++;
      pmmioinfo.pchNext = pchNext;
      if ( v8 >= v6 )
        goto LABEL_10;
    }
    result = 57603;
    goto LABEL_11;
  }
LABEL_10:
  result = mmioSetInfo(hmmio, &pmmioinfo, 0);
  if ( result )
  {
LABEL_11:
    *a5 = 0;
    return result;
  }
  *a5 = v6;
  return result;
}
