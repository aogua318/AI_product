// 函数 0x4897a5  __cinit  size=0x97  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _cinit(int a1)
{
  int result; // eax
  void (**v2)(void); // edi

  if ( _fpmath && _IsNonwritableInCurrentImage(&off_4A6314) )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&First, (_PIFV *)&Last);
  if ( !result )
  {
    atexit(sub_49136C);
    v2 = (void (**)(void))&unk_4A22AC;
    if ( &unk_4A22AC < (_UNKNOWN *)&dword_4A26D4 )
    {
      do
      {
        if ( *v2 )
          (*v2)();
        ++v2;
      }
      while ( v2 < &dword_4A26D4 );
    }
    if ( dword_8F72FC )
    {
      if ( _IsNonwritableInCurrentImage(&dword_8F72FC) )
        dword_8F72FC(0, 2, 0);
    }
    return 0;
  }
  return result;
}
