// 函数 0x4921be  __isctype_l  size=0xB8  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _isctype_l(int C, int Type, _locale_t Locale)
{
  __int16 v3; // bx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  __crt_locale_pointers v7; // [esp+4h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-10h]
  char v9; // [esp+10h] [ebp-Ch]
  CHAR MultiByteStr; // [esp+14h] [ebp-8h] BYREF
  char v11; // [esp+15h] [ebp-7h]
  char v12; // [esp+16h] [ebp-6h]
  WORD CharType; // [esp+18h] [ebp-4h] BYREF
  int Ca; // [esp+24h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, (struct localeinfo_struct *)Locale);
  v3 = C;
  if ( (unsigned int)(C + 1) <= 0x100 )
  {
    v4 = *(unsigned __int16 *)(*((_DWORD *)v7.locinfo + 50) + 2 * C);
    goto LABEL_11;
  }
  Ca = C >> 8;
  if ( _isleadbyte_l(HIBYTE(v3), &v7) )
  {
    MultiByteStr = Ca;
    v11 = v3;
    v12 = 0;
    v5 = 2;
  }
  else
  {
    MultiByteStr = v3;
    v11 = 0;
    v5 = 1;
  }
  if ( __crtGetStringTypeA(
         (struct localeinfo_struct *)&v7,
         1u,
         &MultiByteStr,
         v5,
         &CharType,
         *((_DWORD *)v7.locinfo + 1),
         *((_DWORD *)v7.locinfo + 5),
         1) )
  {
    v4 = CharType;
LABEL_11:
    result = Type & v4;
    if ( v9 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return result;
  }
  if ( v9 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return 0;
}
