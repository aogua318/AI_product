// 函数 0x488c71  ?_CallSETranslator@@YAHPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAX2PBU_s_FuncInfo@@H1@Z  size=0xD7  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _CallSETranslator(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        void *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        int a6,
        struct EHRegistrationNode *a7)
{
  int v8; // [esp+0h] [ebp-3Ch] BYREF
  int v9; // [esp+4h] [ebp-38h]
  _DWORD v10[2]; // [esp+8h] [ebp-34h] BYREF
  void (__cdecl *v11)(unsigned int, _DWORD *); // [esp+10h] [ebp-2Ch]
  _DWORD v12[9]; // [esp+14h] [ebp-28h] BYREF
  int v13; // [esp+38h] [ebp-4h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  if ( a1 == (struct EHExceptionRecord *)291 )
  {
    a2->pNext = (EHRegistrationNode *)&_ExceptionContinuation_27230;
    return 1;
  }
  else
  {
    v12[1] = TranslatorGuardHandler;
    v12[2] = (unsigned int)v12 ^ dword_4B8254;
    v12[3] = a5;
    v12[4] = a2;
    v12[5] = a6;
    v12[6] = a7;
    v13 = 0;
    v12[7] = &v8;
    v12[8] = &savedregs;
    v12[0] = NtCurrentTeb()->NtTib.ExceptionList;
    v9 = 1;
    v10[0] = a1;
    v10[1] = a3;
    v11 = *(void (__cdecl **)(unsigned int, _DWORD *))(_getptd() + 128);
    v11(a1->ExceptionCode, v10);
    v9 = 0;
    if ( v13 )
      *(_DWORD *)v12[0] = NtCurrentTeb()->NtTib.ExceptionList->Next;
    return v9;
  }
}
