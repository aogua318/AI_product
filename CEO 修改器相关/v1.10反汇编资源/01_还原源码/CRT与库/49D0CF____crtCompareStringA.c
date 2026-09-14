// 函数 0x49d0cf  ___crtCompareStringA  size=0x42  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl __crtCompareStringA(
        struct localeinfo_struct *a1,
        LCID Locale,
        DWORD dwCmpFlags,
        const CHAR *a4,
        char *cbMultiByte,
        const CHAR *a6,
        int a7,
        UINT CodePage)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1);
  result = __crtCompareStringA_stat((int)v9, a6, Locale, dwCmpFlags, a4, (int)cbMultiByte, a7, CodePage);
  if ( v11 )
    *(_DWORD *)(v10 + 112) &= ~2u;
  return result;
}
