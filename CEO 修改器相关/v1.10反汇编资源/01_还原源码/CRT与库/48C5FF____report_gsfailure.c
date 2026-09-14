// 函数 0x48c5ff  ___report_gsfailure  size=0x106  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn __report_gsfailure()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  unsigned int v6; // kr00_4
  HANDLE CurrentProcess; // eax
  int vars0; // [esp+328h] [ebp+0h]
  int retaddr; // [esp+32Ch] [ebp+4h]
  char v10; // [esp+330h] [ebp+8h] BYREF

  dword_8F2CA0 = v0;
  dword_8F2C9C = v2;
  dword_8F2C98 = v1;
  dword_8F2C94 = v3;
  dword_8F2C90 = v5;
  dword_8F2C8C = v4;
  word_8F2CB8 = __SS__;
  word_8F2CAC = __CS__;
  word_8F2C88 = __DS__;
  word_8F2C84 = __ES__;
  word_8F2C80 = __FS__;
  word_8F2C7C = __GS__;
  v6 = __readeflags();
  dword_8F2CB0 = v6;
  dword_8F2CA4 = vars0;
  dword_8F2CA8 = retaddr;
  dword_8F2CB4 = (int)&v10;
  dword_8F2BF0 = 65537;
  dword_8F2BA4 = retaddr;
  dword_8F2B98 = -1073740791;
  dword_8F2B9C = 1;
  dword_8F2BE8 = IsDebuggerPresent();
  sub_49835C(1);
  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( !dword_8F2BE8 )
    sub_49835C(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}
