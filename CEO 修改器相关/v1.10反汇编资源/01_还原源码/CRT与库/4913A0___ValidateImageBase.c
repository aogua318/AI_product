// 函数 0x4913a0  __ValidateImageBase  size=0x35  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  if ( *(_WORD *)a1 == 23117 && (v2 = a1 + *(_DWORD *)(a1 + 60), *(_DWORD *)v2 == 17744) )
    return *(_WORD *)(v2 + 24) == 267;
  else
    return 0;
}
