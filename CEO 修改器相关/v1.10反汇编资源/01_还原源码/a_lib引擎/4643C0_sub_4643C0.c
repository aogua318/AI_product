// 函数 0x4643c0  sub_4643C0  size=0x41  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *sub_4643C0(char *Format, ...)
{
  FILE *result; // eax
  FILE *v2; // esi
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, Format);
  result = fopen("log.txt", "a");
  v2 = result;
  if ( result )
  {
    vfprintf(result, Format, va);
    fprintf(v2, "\n");
    return (FILE *)fclose(v2);
  }
  return result;
}
