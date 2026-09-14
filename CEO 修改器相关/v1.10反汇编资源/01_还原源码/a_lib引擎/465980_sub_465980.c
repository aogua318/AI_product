// 函数 0x465980  sub_465980  size=0x2B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl sub_465980(char *a1, void *Src, size_t Size, int a4)
{
  int v4; // ebx
  void *result; // eax

  v4 = a4;
  if ( a4 > 0 )
  {
    do
    {
      result = memcpy(a1, Src, Size);
      a1 += Size;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
