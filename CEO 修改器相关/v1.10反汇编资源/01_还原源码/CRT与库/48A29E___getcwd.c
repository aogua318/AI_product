// 函数 0x48a29e  __getcwd  size=0x49  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl _getcwd(char *DstBuf, int SizeInBytes)
{
  char *v3; // [esp+10h] [ebp-1Ch]

  _lock(7);
  v3 = _getdcwd_nolock(0, DstBuf, SizeInBytes);
  _unlock(7);
  return v3;
}
