// 函数 0x49cc67  __mbsnbicoll_l  size=0xDE  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _mbsnbicoll_l(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  int v5; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-10h] BYREF
  UINT *v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, (struct localeinfo_struct *)Locale);
  if ( !MaxCount )
  {
    if ( v9 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0;
  }
  if ( Str1 && Str2 )
  {
    if ( MaxCount > 0x7FFFFFFF )
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
LABEL_15:
      if ( v9 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
    if ( v7[2] )
    {
      v5 = __crtCompareStringA(
             (struct localeinfo_struct *)v6,
             v7[3],
             0x1001u,
             (unsigned int)Str1,
             (char *)MaxCount,
             (int)Str2,
             MaxCount,
             v7[1]);
      if ( !v5 )
        goto LABEL_15;
      result = v5 - 2;
    }
    else
    {
      result = _strnicoll_l((const char *)Str1, (const char *)Str2, MaxCount, Locale);
    }
    if ( v9 )
      *(_DWORD *)(v8 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v9 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}
