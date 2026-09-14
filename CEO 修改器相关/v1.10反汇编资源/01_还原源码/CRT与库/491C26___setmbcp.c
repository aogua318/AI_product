// 函数 0x491c26  __setmbcp  size=0x16A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _setmbcp(int CodePage)
{
  DWORD *v1; // edi
  DWORD v2; // ebx
  LPCRITICAL_SECTION *v3; // eax
  LPCRITICAL_SECTION *v4; // ebx
  int v5; // eax
  int i; // eax
  int j; // eax
  int k; // eax
  int v10; // [esp+14h] [ebp-20h]
  UINT CodePagea; // [esp+3Ch] [ebp+8h]

  v10 = -1;
  v1 = _getptd();
  __updatetmbcinfo();
  v2 = v1[26];
  CodePagea = getSystemCP(CodePage);
  if ( CodePagea == *(_DWORD *)(v2 + 4) )
    return 0;
  v3 = (LPCRITICAL_SECTION *)_malloc_crt(0x220u);
  v4 = v3;
  if ( v3 )
  {
    qmemcpy(v3, (const void *)v1[26], 0x220u);
    *v3 = 0;
    v5 = _setmbcp_nolock(CodePagea, (int)v3);
    v10 = v5;
    if ( v5 )
    {
      if ( v5 == -1 )
      {
        if ( v4 != dword_4B8890 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( !InterlockedDecrement((volatile LONG *)v1[26]) && (LPCRITICAL_SECTION *)v1[26] != dword_4B8890 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement((volatile LONG *)v4);
      if ( (v1[28] & 2) == 0 && (dword_4B8DB0 & 1) == 0 )
      {
        _lock(13);
        dword_8F3680 = (int)v4[1];
        dword_8F3684 = (int)v4[2];
        dword_8F3688 = (int)v4[3];
        for ( i = 0; i < 5; ++i )
          word_8F3674[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_4B8AB0[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_4B8BB8[k] = *((_BYTE *)v4 + k + 285);
        if ( !InterlockedDecrement(lpAddend) && lpAddend != (volatile LONG *)dword_4B8890 )
          free((void *)lpAddend);
        lpAddend = (volatile LONG *)v4;
        InterlockedIncrement((volatile LONG *)v4);
        _unlock(13);
      }
    }
  }
  return v10;
}
