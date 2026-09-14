// 函数 0x497fb0  __sopen_s  size=0x20  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t __cdecl _sopen_s(int *FileHandle, const char *FileName, int OpenFlag, int ShareFlag, int PermissionMode)
{
  return _sopen_helper(FileName, OpenFlag, ShareFlag, PermissionMode, FileHandle, 1);
}
