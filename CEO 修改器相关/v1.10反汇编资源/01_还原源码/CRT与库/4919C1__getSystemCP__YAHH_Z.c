// 函数 0x4919c1  ?getSystemCP@@YAHH@Z  size=0x7C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, 0);
  dword_8F3670 = 0;
  switch ( a1 )
  {
    case -2:
      dword_8F3670 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_8F3670 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_8F3670 = 1;
LABEL_3:
      if ( v4 )
        *(_DWORD *)(v3 + 112) &= ~2u;
      return result;
  }
  if ( v4 )
    *(_DWORD *)(v3 + 112) &= ~2u;
  return a1;
}
