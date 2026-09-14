// 函数 0x489dd8  __atof_l  size=0xAB  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl _atof_l(const char *String, _locale_t Locale)
{
  const char *v2; // esi
  double result; // st7
  __crt_locale_pointers v5; // [esp+4h] [ebp-2Ch] BYREF
  int v6; // [esp+Ch] [ebp-24h]
  char v7; // [esp+10h] [ebp-20h]
  _BYTE v8[24]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = String;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, (struct localeinfo_struct *)Locale);
  if ( String )
  {
    while ( *((int *)v5.locinfo + 43) <= 1
          ? *(_WORD *)(*((_DWORD *)v5.locinfo + 50) + 2 * *(unsigned __int8 *)v2) & 8
          : _isctype_l(*(unsigned __int8 *)v2, 8, &v5) )
      ++v2;
    result = *(double *)(_fltin2(v8, v2, &v5) + 16);
    if ( v7 )
      *(_DWORD *)(v6 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v7 )
      *(_DWORD *)(v6 + 112) &= ~2u;
    return 0.0;
  }
  return result;
}
