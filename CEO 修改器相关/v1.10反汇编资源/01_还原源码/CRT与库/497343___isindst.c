// 函数 0x497343  __isindst  size=0x41  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _isindst(_DWORD *a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  _lock(6);
  v2 = _isindst_nolock(a1);
  _unlock(6);
  return v2;
}
