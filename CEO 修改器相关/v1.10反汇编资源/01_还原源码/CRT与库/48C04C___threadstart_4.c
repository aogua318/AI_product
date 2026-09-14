// 函数 0x48c04c  __threadstart@4  size=0x58  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __stdcall __noreturn _threadstart(_DWORD *lpThreadParameter)
{
  int v1; // eax
  _DWORD *v2; // eax
  int v3; // eax
  DWORD LastError; // eax

  __set_flsgetvalue();
  v1 = sub_48E349();
  v2 = (_DWORD *)__fls_getvalue(v1);
  if ( v2 )
  {
    v2[21] = lpThreadParameter[21];
    v2[22] = lpThreadParameter[22];
    v2[1] = lpThreadParameter[1];
    _freefls(lpThreadParameter);
  }
  else
  {
    v3 = sub_48E349();
    if ( !__fls_setvalue(v3, lpThreadParameter) )
    {
      LastError = GetLastError();
      ExitThread(LastError);
    }
  }
  _callthreadstart();
}
