// 函数 0x497eec  __sopen_helper  size=0xC4  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _sopen_helper(LPCSTR lpFileName, int a2, int a3, int a4, int *a5, int a6)
{
  int result; // eax
  _BYTE *v7; // eax
  int v8; // [esp+14h] [ebp-20h]
  int v9; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0;
  if ( !a5 || (*a5 = -1, !lpFileName) || a6 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v8 = _tsopen_nolock(a5, &v9, lpFileName, a2, a3, a4);
    ms_exc.registration.TryLevel = -2;
    if ( v9 )
    {
      if ( v8 )
      {
        v7 = (_BYTE *)(dword_8F61C0[*a5 >> 5] + ((*a5 & 0x1F) << 6) + 4);
        *v7 &= ~1u;
      }
      _unlock_fhandle(*a5);
    }
    result = v8;
    if ( v8 )
      *a5 = -1;
  }
  return result;
}
