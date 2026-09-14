// 函数 0x49d541  __mbschr_l  size=0xB0  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int8 *__cdecl _mbschr_l(const unsigned __int8 *Str, unsigned int C, _locale_t Locale)
{
  unsigned __int8 *result; // eax
  unsigned __int16 v4; // cx
  _BYTE v5[4]; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]
  char v8; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, (struct localeinfo_struct *)Locale);
  result = (unsigned __int8 *)Str;
  if ( Str )
  {
    if ( *(_DWORD *)(v6 + 8) )
    {
      while ( 1 )
      {
        v4 = *result;
        if ( !*result )
          break;
        if ( (*(_BYTE *)((unsigned __int8)v4 + v6 + 29) & 4) != 0 )
        {
          if ( !*++result )
            goto LABEL_17;
          if ( C == (*result | (v4 << 8)) )
          {
            --result;
            goto LABEL_15;
          }
        }
        else if ( C == *result )
        {
          break;
        }
        ++result;
      }
      if ( C == *result )
        goto LABEL_15;
LABEL_17:
      if ( v8 )
        *(_DWORD *)(v7 + 112) &= ~2u;
      return 0;
    }
    else
    {
      result = (unsigned __int8 *)strchr((const char *)Str, C);
LABEL_15:
      if ( v8 )
        *(_DWORD *)(v7 + 112) &= ~2u;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v8 )
      *(_DWORD *)(v7 + 112) &= ~2u;
    return 0;
  }
  return result;
}
