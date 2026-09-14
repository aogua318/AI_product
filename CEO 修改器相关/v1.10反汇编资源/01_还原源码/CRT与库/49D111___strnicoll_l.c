// 函数 0x49d111  __strnicoll_l  size=0xEA  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _strnicoll_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  LCID v5; // ecx
  int v6; // eax
  __crt_locale_pointers Localea; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( !MaxCount )
  {
    if ( v9 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0;
  }
  if ( String1 && String2 )
  {
    if ( MaxCount > 0x7FFFFFFF )
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
LABEL_16:
      if ( v9 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
    v5 = *((_DWORD *)Localea.locinfo + 4);
    if ( v5 )
    {
      v6 = __crtCompareStringA(
             (struct localeinfo_struct *)&Localea,
             v5,
             0x1001u,
             String1,
             (char *)MaxCount,
             String2,
             MaxCount,
             *((_DWORD *)Localea.locinfo + 2));
      if ( !v6 )
      {
        *_errno() = 22;
        goto LABEL_16;
      }
      result = v6 - 2;
    }
    else
    {
      result = _strnicmp_l(String1, String2, MaxCount, &Localea);
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
