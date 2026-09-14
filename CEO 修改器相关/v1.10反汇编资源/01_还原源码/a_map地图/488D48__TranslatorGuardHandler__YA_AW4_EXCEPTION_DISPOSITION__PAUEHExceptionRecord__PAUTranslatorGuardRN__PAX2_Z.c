// 函数 0x488d48  ?TranslatorGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUTranslatorGuardRN@@PAX2@Z  size=0x9F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

enum _EXCEPTION_DISPOSITION __usercall TranslatorGuardHandler@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        struct EHExceptionRecord *ExceptionRecord,
        unsigned int TargetFrame,
        struct _CONTEXT *a4)
{
  enum _EXCEPTION_DISPOSITION (*v5)(void); // [esp+4h] [ebp-4h] BYREF

  sub_488637((void *)(TargetFrame ^ *(_DWORD *)(TargetFrame + 8)));
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    *(_DWORD *)(TargetFrame + 36) = 1;
    return ExceptionContinueSearch;
  }
  else
  {
    __InternalCxxFrameHandler(
      ExceptionRecord,
      *(struct EHRegistrationNode **)(TargetFrame + 16),
      a4,
      0,
      *(struct _s_FuncInfo **)(TargetFrame + 12),
      *(_DWORD *)(TargetFrame + 20),
      *(struct EHRegistrationNode **)(TargetFrame + 24),
      1u);
    if ( !*(_DWORD *)(TargetFrame + 36) )
      _UnwindNestedFrames(a1, (PVOID)TargetFrame, (PEXCEPTION_RECORD)ExceptionRecord);
    _CallSETranslator((struct EHExceptionRecord *)0x123, (struct EHRegistrationNode *)&v5, 0, 0, 0, 0, 0);
    return v5();
  }
}
