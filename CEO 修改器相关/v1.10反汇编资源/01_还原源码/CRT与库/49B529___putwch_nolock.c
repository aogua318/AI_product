// 函数 0x49b529  __putwch_nolock  size=0x42  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  DWORD v1; // ecx
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfCharsWritten = v1;
  if ( hObject == (HANDLE)-2 )
    __initconout(NumberOfCharsWritten);
  if ( hObject == (HANDLE)-1 || !WriteConsoleW(hObject, &Character, 1u, &NumberOfCharsWritten, 0) )
    return -1;
  else
    return Character;
}
