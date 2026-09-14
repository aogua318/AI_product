// 函数 0x498b77  __EH_prolog3_catch  size=0x36  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}
