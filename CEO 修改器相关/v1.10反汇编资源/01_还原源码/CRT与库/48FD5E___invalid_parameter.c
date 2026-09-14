// 函数 0x48fd5e  __invalid_parameter  size=0x2C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _invalid_parameter(
        wchar_t *Expression,
        wchar_t *FunctionName,
        wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))DecodePointer(dword_8F2ED0);
  if ( !v5 )
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  return v5();
}
