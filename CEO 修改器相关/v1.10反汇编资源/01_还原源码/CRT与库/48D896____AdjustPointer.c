// 函数 0x48d896  ___AdjustPointer  size=0x29  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}
