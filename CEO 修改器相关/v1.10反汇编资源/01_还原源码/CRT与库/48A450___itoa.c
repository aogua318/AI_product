// 函数 0x48a450  __itoa  size=0x2A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl _itoa(int Value, char *Buffer, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    xtoa(Value, Buffer, 0xAu, 1);
  else
    xtoa(Value, Buffer, Radix, 0);
  return Buffer;
}
