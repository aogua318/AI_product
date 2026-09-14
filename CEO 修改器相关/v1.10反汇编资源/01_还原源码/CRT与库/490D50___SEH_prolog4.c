// 函数 0x490d50  __SEH_prolog4  size=0x45  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__usercall _SEH_prolog4@<eax>(int a1@<ebp>, int a2, int a3)
{
  int v3; // eax
  void *v4; // esp
  _DWORD v6[2]; // [esp-8h] [ebp-8h] BYREF
  unsigned int retaddr; // [esp+0h] [ebp+0h]
  int v8; // [esp+4h] [ebp+4h]

  v6[1] = SEH_491430;
  v6[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v3 = a3;
  a3 = a1;
  v4 = alloca(v3);
  v8 = -2;
  retaddr = (unsigned int)&a3 ^ dword_4B8254;
  return v6;
}
