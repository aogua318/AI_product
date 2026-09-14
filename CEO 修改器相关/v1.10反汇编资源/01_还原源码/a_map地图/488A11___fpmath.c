// 函数 0x488a11  __fpmath  size=0x19  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int (__cdecl *__cdecl _fpmath(int a1))(int, char *Str, int, int, size_t Size, int)
{
  int (__cdecl *result)(int, char *, int, int, size_t, int); // eax

  result = _cfltcvt_init();
  if ( a1 )
    result = (int (__cdecl *)(int, char *, int, int, size_t, int))_setdefaultprecision();
  __asm { fnclex }
  return result;
}
