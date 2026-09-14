// 函数 0x492cb9  __CxxThrowException@8  size=0x4C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, &unk_4AABD0, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}
