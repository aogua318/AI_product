// 函数 0x48c986  __shift  size=0x1F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const char *__usercall _shift@<eax>(const char *result@<eax>, int a2@<edi>)
{
  const char *v2; // esi
  size_t v3; // eax

  v2 = result;
  if ( a2 )
  {
    v3 = strlen(result);
    return (const char *)memcpy_0((void *)&v2[a2], v2, v3 + 1);
  }
  return result;
}
