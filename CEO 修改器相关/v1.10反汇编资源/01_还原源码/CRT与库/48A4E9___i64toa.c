// 函数 0x48a4e9  __i64toa  size=0x33  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl _i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0;
  if ( Radix == 10 && SHIDWORD(Value) <= 0 )
    v3 = Value < 0;
  x64toa(Buffer, Value, Radix, v3);
  return Buffer;
}
