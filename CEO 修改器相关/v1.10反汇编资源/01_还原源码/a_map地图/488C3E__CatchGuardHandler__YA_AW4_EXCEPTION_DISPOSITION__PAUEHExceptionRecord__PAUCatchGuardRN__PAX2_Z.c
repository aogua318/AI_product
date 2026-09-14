// 函数 0x488c3e  ?CatchGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUCatchGuardRN@@PAX2@Z  size=0x33  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl CatchGuardHandler(struct EHExceptionRecord *a1, struct EHRegistrationNode *a2, struct _CONTEXT *a3)
{
  sub_488637((void *)((unsigned int)a2 ^ a2->state));
  return __InternalCxxFrameHandler(
           a1,
           (struct EHRegistrationNode *)a2[1].frameHandler,
           a3,
           0,
           (struct _s_FuncInfo *)a2[1].pNext,
           a2[1].state,
           a2,
           0);
}
