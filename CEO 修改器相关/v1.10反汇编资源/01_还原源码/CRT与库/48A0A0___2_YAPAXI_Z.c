// 函数 0x48a0a0  ??2@YAPAXI@Z  size=0x80  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl operator new(size_t Size)
{
  void *result; // eax
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-10h] BYREF
  char *v3; // [esp+Ch] [ebp-4h] BYREF

  while ( 1 )
  {
    result = malloc(Size);
    if ( result )
      break;
    if ( !_callnewh(Size) )
    {
      if ( (dword_8F2B80 & 1) == 0 )
      {
        dword_8F2B80 |= 1u;
        v3 = "bad allocation";
        std::exception::exception((std::exception *)&dword_8F2B74, (const char *const *)&v3, 1);
        dword_8F2B74 = &std::bad_alloc::`vftable';
        atexit(sub_4A113A);
      }
      std::exception::exception((std::exception *)pExceptionObject, (const struct exception *)&dword_8F2B74);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}
