// 函数 0x49af27  ?x_ismbbtype_l@@YAHPAUlocaleinfo_struct@@IHH@Z  size=0x53  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl x_ismbbtype_l(struct localeinfo_struct *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int result; // eax
  _DWORD v5[2]; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, a1);
  if ( (a4 & *(_BYTE *)(v5[1] + a2 + 29)) != 0
    || (!a3 ? (result = 0) : (result = (unsigned __int16)(a3 & *(_WORD *)(*(_DWORD *)(v5[0] + 200) + 2 * a2))), result) )
  {
    result = 1;
  }
  if ( v7 )
    *(_DWORD *)(v6 + 112) &= ~2u;
  return result;
}
