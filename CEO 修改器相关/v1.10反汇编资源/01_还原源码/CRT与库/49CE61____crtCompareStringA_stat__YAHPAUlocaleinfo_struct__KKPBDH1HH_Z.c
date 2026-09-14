// 函数 0x49ce61  ?__crtCompareStringA_stat@@YAHPAUlocaleinfo_struct@@KKPBDH1HH@Z  size=0x26E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall __crtCompareStringA_stat(
        int a1,
        const CHAR *a2,
        LCID Locale,
        DWORD dwCmpFlags,
        const CHAR *a5,
        int cbMultiByte,
        int a7,
        UINT CodePage)
{
  const CHAR *v8; // eax
  int v9; // edi
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  const CHAR *v14; // eax
  BYTE *LeadByte; // eax
  unsigned __int8 v17; // dl
  BYTE *i; // eax
  unsigned __int8 v19; // dl
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // eax
  void *v23; // esp
  WCHAR *v24; // eax
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // eax
  void *v28; // esp
  WCHAR *v29; // eax
  WCHAR *v30; // edi
  _DWORD v32[3]; // [esp+0h] [ebp-38h] BYREF
  int cchCount1; // [esp+Ch] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-28h]
  LPCCH lpMultiByteStr; // [esp+14h] [ebp-24h]
  LPCCH v36; // [esp+18h] [ebp-20h]
  LPWSTR lpWideCharStr; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF

  v8 = a5;
  v9 = cbMultiByte;
  lpMultiByteStr = a5;
  v36 = a2;
  if ( cbMultiByte <= 0 )
  {
    if ( cbMultiByte < -1 )
      return 0;
  }
  else
  {
    v11 = cbMultiByte;
    while ( 1 )
    {
      --v11;
      if ( !*v8 )
        break;
      ++v8;
      if ( !v11 )
      {
        v11 = -1;
        break;
      }
    }
    v9 = -1 - v11 + cbMultiByte;
    cbMultiByte = v9;
  }
  v12 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return 0;
  }
  else
  {
    v13 = a7;
    v14 = a2;
    while ( 1 )
    {
      --v13;
      if ( !*v14 )
        break;
      ++v14;
      if ( !v13 )
      {
        v13 = -1;
        break;
      }
    }
    v12 = -1 - v13 + a7;
    a7 = v12;
  }
  v34 = 0;
  if ( !CodePage )
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4);
  if ( v9 && v12 )
    goto LABEL_44;
  if ( v9 == v12 )
    return 2;
  if ( v12 > 1 )
    return 1;
  if ( v9 > 1 )
    return 3;
  if ( !GetCPInfo(CodePage, &CPInfo) )
    return 0;
  if ( v9 > 0 )
  {
    if ( CPInfo.MaxCharSize >= 2 )
    {
      LeadByte = CPInfo.LeadByte;
      if ( CPInfo.LeadByte[0] )
      {
        while ( 1 )
        {
          v17 = LeadByte[1];
          if ( !v17 )
            break;
          if ( (unsigned int)*lpMultiByteStr >= *LeadByte && (unsigned int)*lpMultiByteStr <= v17 )
            return 2;
          LeadByte += 2;
          if ( !*LeadByte )
            return 3;
        }
      }
    }
    return 3;
  }
  if ( v12 > 0 )
  {
    if ( CPInfo.MaxCharSize >= 2 )
    {
      for ( i = CPInfo.LeadByte; *i; i += 2 )
      {
        v19 = i[1];
        if ( !v19 )
          break;
        if ( (unsigned int)*v36 >= *i && (unsigned int)*v36 <= v19 )
          return 2;
      }
    }
    return 1;
  }
LABEL_44:
  v20 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, v9, 0, 0);
  v21 = v20;
  cchCount1 = v20;
  if ( !v20 )
    return 0;
  if ( v20 > 0 && 0xFFFFFFE0 / v20 >= 2 )
  {
    v22 = 2 * v20 + 8;
    if ( v22 > 0x400 )
    {
      v24 = (WCHAR *)malloc(2 * v21 + 8);
      if ( v24 )
      {
        *(_DWORD *)v24 = 56797;
        goto LABEL_52;
      }
    }
    else
    {
      v23 = alloca(v22);
      v24 = (WCHAR *)v32;
      if ( v32 )
      {
        v32[0] = 52428;
LABEL_52:
        v24 += 4;
      }
    }
    lpWideCharStr = v24;
    goto LABEL_55;
  }
  lpWideCharStr = 0;
LABEL_55:
  if ( !lpWideCharStr )
    return 0;
  if ( MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpWideCharStr, v21) )
  {
    v25 = MultiByteToWideChar(CodePage, 9u, v36, a7, 0, 0);
    v26 = v25;
    if ( v25 )
    {
      if ( v25 <= 0 || 0xFFFFFFE0 / v25 < 2 )
      {
        v30 = 0;
LABEL_68:
        if ( v30 )
        {
          if ( MultiByteToWideChar(CodePage, 1u, v36, a7, v30, v26) )
            v34 = CompareStringW(Locale, dwCmpFlags, lpWideCharStr, cchCount1, v30, v26);
          _freea(v30);
        }
        goto $error_cleanup$27745;
      }
      v27 = 2 * v25 + 8;
      if ( v27 > 0x400 )
      {
        v29 = (WCHAR *)malloc(2 * v26 + 8);
        if ( v29 )
        {
          *(_DWORD *)v29 = 56797;
          goto LABEL_65;
        }
      }
      else
      {
        v28 = alloca(v27);
        v29 = (WCHAR *)v32;
        if ( v32 )
        {
          v32[0] = 52428;
LABEL_65:
          v29 += 4;
        }
      }
      v30 = v29;
      goto LABEL_68;
    }
  }
$error_cleanup$27745:
  _freea(lpWideCharStr);
  return v34;
}
