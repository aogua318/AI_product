// 函数 0x493c41  __freebuf  size=0x31  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _freebuf(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 12);
  if ( (result & 0x83) != 0 && (result & 8) != 0 )
  {
    free(*(void **)(a1 + 8));
    *(_DWORD *)(a1 + 12) &= 0xFFFFFBF7;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  return result;
}
