// 函数 0x46f520  sub_46F520  size=0x1D9  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

MMRESULT __cdecl sub_46F520(LPSTR pszFileName, HMMIO *a2, int *a3, LPMMCKINFO pmmcki)
{
  HMMIO v4; // eax
  HMMIO v5; // edi
  MMRESULT v6; // esi
  _DWORD *v7; // eax
  LONG v8; // eax
  MMRESULT result; // eax
  char v10[4]; // [esp+14h] [ebp-2Ch] BYREF
  struct _MMCKINFO v11; // [esp+18h] [ebp-28h] BYREF
  char pch[4]; // [esp+2Ch] [ebp-14h] BYREF
  int v13; // [esp+30h] [ebp-10h]
  int v14; // [esp+34h] [ebp-Ch]
  int v15; // [esp+38h] [ebp-8h]

  *a3 = 0;
  v4 = mmioOpenA(pszFileName, 0, 0x10000u);
  v5 = v4;
  if ( v4 )
  {
    v6 = mmioDescend(v4, pmmcki, 0, 0);
    if ( !v6 )
    {
      if ( pmmcki->ckid != 1179011410 || pmmcki->fccType != 1163280727 )
        goto LABEL_20;
      v11.ckid = 544501094;
      v6 = mmioDescend(v5, &v11, pmmcki, 0x10u);
      if ( v6 )
        goto LABEL_21;
      if ( v11.cksize < 0x10 )
        goto LABEL_20;
      if ( mmioRead(v5, pch, 16) != 16 )
      {
        v6 = 57602;
        goto LABEL_21;
      }
      if ( *(_WORD *)pch == 1 )
      {
        *(_DWORD *)v10 = 0;
      }
      else if ( mmioRead(v5, v10, 2) != 2 )
      {
        v6 = 57602;
        goto LABEL_21;
      }
      v7 = sub_465E40(*(unsigned __int16 *)v10 + 18, "a_lib\\wave.cpp", 120);
      *a3 = (int)v7;
      if ( !v7 )
      {
        v6 = 57344;
        goto LABEL_21;
      }
      *v7 = *(_DWORD *)pch;
      v7[1] = v13;
      v7[2] = v14;
      v7[3] = v15;
      *(_WORD *)(*a3 + 16) = *(_WORD *)v10;
      if ( *(_WORD *)v10 )
      {
        v8 = mmioRead(v5, (HPSTR)(*a3 + 18), *(unsigned __int16 *)v10);
        if ( v8 != *(unsigned __int16 *)v10 )
        {
LABEL_20:
          v6 = 57601;
          goto LABEL_21;
        }
      }
      result = mmioAscend(v5, &v11, 0);
      v6 = result;
      if ( !result )
      {
        *a2 = v5;
        return result;
      }
    }
  }
  else
  {
    v6 = 57600;
  }
LABEL_21:
  if ( *a3 )
  {
    sub_465FE0(*a3, "a_lib\\wave.cpp", 154);
    *a3 = 0;
  }
  if ( v5 )
    mmioClose(v5, 0);
  *a2 = 0;
  return v6;
}
