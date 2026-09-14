// 函数 0x48c00b  __callthreadstart  size=0x41  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __noreturn _callthreadstart()
{
  int v0; // eax

  v0 = _getptd();
  (*(void (__cdecl **)(_DWORD))(v0 + 84))(*(_DWORD *)(v0 + 88));
  _endthread();
}
