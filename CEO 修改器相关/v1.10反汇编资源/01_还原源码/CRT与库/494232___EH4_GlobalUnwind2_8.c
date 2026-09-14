// 函数 0x494232  @_EH4_GlobalUnwind2@8  size=0x19  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __fastcall _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &ReturnPoint, ExceptionRecord, 0);
}
