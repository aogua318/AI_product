// 函数 0x48dd30  ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z  size=0x6E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __usercall CatchIt(
        int *a1@<ebx>,
        int *a2@<edi>,
        struct EHRegistrationNode *a3@<esi>,
        EXCEPTION_RECORD *ExceptionRecord,
        struct _CONTEXT *a5,
        struct _CONTEXT *a6,
        struct _s_FuncInfo *a7,
        const struct _s_FuncInfo *a8,
        struct _s_HandlerType *a9,
        struct _s_CatchableType *TargetFrame)
{
  void (__stdcall *v10)(void *, struct EHRegistrationNode *); // eax

  if ( a8 )
    __BuildCatchObject((int)ExceptionRecord, (int *)a3, a1, (int)a8);
  if ( TargetFrame )
    _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)a1, TargetFrame, ExceptionRecord);
  else
    _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)a1, a3, ExceptionRecord);
  __FrameUnwindToState((int)a3, (int)a6, (int)a7, *a2);
  a3->state = a2[1] + 1;
  v10 = (void (__stdcall *)(void *, struct EHRegistrationNode *))CallCatchBlock(
                                                                   (struct EHExceptionRecord *)ExceptionRecord,
                                                                   a3,
                                                                   a5,
                                                                   a7,
                                                                   a9,
                                                                   0x100u);
  if ( v10 )
    _JumpToContinuation(v10, a3);
}
