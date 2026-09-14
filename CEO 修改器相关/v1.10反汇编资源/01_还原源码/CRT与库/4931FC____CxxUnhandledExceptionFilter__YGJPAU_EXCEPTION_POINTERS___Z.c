// 函数 0x4931fc  ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z  size=0x42  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax
  ULONG_PTR v2; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord;
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->NumberParameters == 3 )
  {
    v2 = ExceptionRecord->ExceptionInformation[0];
    if ( v2 == 429065504 || v2 == 429065505 || v2 == 429065506 || v2 == 26820608 )
      terminate();
  }
  return 0;
}
