// 函数 0x48d6d1  ___FrameUnwindFilter  size=0x4F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl __FrameUnwindFilter(int **a1)
{
  int v1; // eax
  int v2; // eax

  v1 = **a1;
  if ( v1 == -532462766 || v1 == -532459699 )
  {
    if ( *(int *)(_getptd() + 144) > 0 )
    {
      v2 = _getptd();
      --*(_DWORD *)(v2 + 144);
    }
  }
  else if ( v1 == -529697949 )
  {
    *(_DWORD *)(_getptd() + 144) = 0;
    terminate();
  }
  return 0;
}
