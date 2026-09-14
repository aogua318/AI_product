// 函数 0x46f810  sub_46F810  size=0x113  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

MMRESULT __cdecl sub_46F810(LPSTR pszFileName, int *a2, int *a3, int *a4)
{
  MMRESULT v4; // esi
  _DWORD *v5; // eax
  int v7; // [esp+Ch] [ebp-38h] BYREF
  int *v8; // [esp+10h] [ebp-34h]
  HMMIO hmmio; // [esp+14h] [ebp-30h] BYREF
  struct _MMCKINFO pmmcki; // [esp+18h] [ebp-2Ch] BYREF
  MMCKINFO pmmckiParent; // [esp+2Ch] [ebp-18h] BYREF

  *a4 = 0;
  *a3 = 0;
  v8 = a2;
  *a2 = 0;
  v4 = sub_46F520(pszFileName, &hmmio, a3, &pmmckiParent);
  if ( !v4 )
  {
    v4 = sub_46F700(&hmmio, &pmmcki, &pmmckiParent);
    if ( !v4 )
    {
      v5 = sub_465E40(pmmcki.cksize, "a_lib\\wave.cpp", 813);
      *a4 = (int)v5;
      if ( v5 )
      {
        v4 = sub_46F740(hmmio, pmmcki.cksize, (int)v5, (int)&pmmcki, (unsigned int *)&v7);
        if ( !v4 )
        {
          *v8 = v7;
          goto LABEL_11;
        }
      }
      else
      {
        v4 = 57344;
      }
    }
  }
  if ( *a4 )
  {
    sub_465FE0(*a4, "a_lib\\wave.cpp", 830);
    *a4 = 0;
  }
  if ( *a3 )
  {
    sub_465FE0(*a3, "a_lib\\wave.cpp", 835);
    *a3 = 0;
  }
LABEL_11:
  if ( hmmio )
    mmioClose(hmmio, 0);
  return v4;
}
