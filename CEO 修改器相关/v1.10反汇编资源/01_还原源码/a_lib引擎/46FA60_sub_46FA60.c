// 函数 0x46fa60  sub_46FA60  size=0x27  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46FA60@<eax>(int result@<eax>, __int16 a2@<cx>)
{
  int v2; // edi

  *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 20)) = HIBYTE(a2);
  v2 = *(_DWORD *)(result + 8);
  *(_BYTE *)(++*(_DWORD *)(result + 20) + v2) = a2;
  ++*(_DWORD *)(result + 20);
  return result;
}
