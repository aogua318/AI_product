// 函数 0x488eff  ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z  size=0x60  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  _DWORD v6[6]; // [esp+0h] [ebp-18h] BYREF

  v6[2] = (unsigned int)v6 ^ dword_4B8254;
  v6[3] = a2;
  v6[1] = CatchGuardHandler;
  v6[4] = a1;
  v6[5] = a4 + 1;
  v6[0] = NtCurrentTeb()->NtTib.ExceptionList;
  return (void *)_CallSettingFrame(a3, a1, a5);
}
