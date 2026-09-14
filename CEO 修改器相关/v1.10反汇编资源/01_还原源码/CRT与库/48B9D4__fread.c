// 函数 0x48b9d4  _fread  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return fread_s(Buffer, 0xFFFFFFFF, ElementSize, ElementCount, Stream);
}
