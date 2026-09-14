// 函数 0x495da9  __set_osfhnd  size=0x81  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  int *v2; // edi
  int v3; // esi

  if ( a1 >= 0 && a1 < uNumber && (v2 = &dword_8F61C0[a1 >> 5], v3 = (a1 & 0x1F) << 6, *(_DWORD *)(v3 + *v2) == -1) )
  {
    if ( dword_4B82F8 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, hHandle);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    *(_DWORD *)(v3 + *v2) = hHandle;
    return 0;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}
