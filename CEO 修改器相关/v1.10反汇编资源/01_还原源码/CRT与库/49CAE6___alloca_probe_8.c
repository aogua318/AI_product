// 函数 0x49cae6  __alloca_probe_8  size=0x16  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__usercall _alloca_probe_8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 7;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}
