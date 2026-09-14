// 函数 0x46c740  sub_46C740  size=0x50  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46C740@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // ecx

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_WORD *)(result + 16) = 0;
  *(_WORD *)result = 1;
  *(_WORD *)(result + 2) = *(_WORD *)(a2 + 36);
  v2 = dword_4B4DD0[*(_DWORD *)(a2 + 72)];
  *(_DWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 8) = 2 * v2 * *(_DWORD *)(a2 + 36);
  *(_WORD *)(result + 12) = 2 * *(_WORD *)(a2 + 36);
  *(_WORD *)(result + 14) = 16;
  return result;
}
