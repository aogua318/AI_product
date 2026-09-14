// 函数 0x4984a2  __isspace_l  size=0x51  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _isspace_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 8;
  else
    result = _isctype_l(C, 8, &Localea);
  if ( v5 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}
