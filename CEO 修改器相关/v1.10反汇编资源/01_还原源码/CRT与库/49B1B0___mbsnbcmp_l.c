// 函数 0x49b1b0  __mbsnbcmp_l  size=0x14C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _mbsnbcmp_l(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  const unsigned __int8 *v5; // ebx
  const unsigned __int8 *v6; // esi
  unsigned __int16 v7; // cx
  int v8; // eax
  _BYTE v9[4]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-8h]
  char v12; // [esp+Ch] [ebp-4h]

  if ( !MaxCount )
    return 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, (struct localeinfo_struct *)Locale);
  if ( !*(_DWORD *)(v10 + 8) )
  {
    result = strncmp((const char *)Str1, (const char *)Str2, MaxCount);
    if ( v12 )
      *(_DWORD *)(v11 + 112) &= ~2u;
    return result;
  }
  v5 = Str1;
  if ( !Str1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v12 )
      *(_DWORD *)(v11 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  v6 = Str2;
  if ( !Str2 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v12 )
      *(_DWORD *)(v11 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  while ( 1 )
  {
    v7 = *v5;
    --MaxCount;
    ++v5;
    if ( (*(_BYTE *)((unsigned __int8)v7 + v10 + 29) & 4) == 0 )
      goto LABEL_24;
    if ( MaxCount )
    {
      if ( *v5 )
        v7 = *v5++ | (unsigned __int16)(v7 << 8);
      else
        v7 = 0;
LABEL_24:
      LOWORD(v8) = *v6++;
      if ( (*(_BYTE *)((unsigned __int8)v8 + v10 + 29) & 4) != 0 )
      {
        if ( MaxCount && (--MaxCount, *v6) )
          LOWORD(v8) = *v6++ | (unsigned __int16)((_WORD)v8 << 8);
        else
          LOWORD(v8) = 0;
      }
      goto $test$27468;
    }
    v8 = *v6;
    v7 = 0;
    if ( (*(_BYTE *)(v8 + v10 + 29) & 4) != 0 )
      goto LABEL_17;
$test$27468:
    if ( (_WORD)v8 != v7 )
      break;
    if ( !v7 || !MaxCount )
    {
LABEL_17:
      if ( v12 )
        *(_DWORD *)(v11 + 112) &= ~2u;
      return 0;
    }
  }
  result = (unsigned __int16)v8 < v7 ? 1 : -1;
  if ( v12 )
    *(_DWORD *)(v11 + 112) &= ~2u;
  return result;
}
