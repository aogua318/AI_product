// 函数 0x495e2a  __free_osfhnd  size=0x86  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_8F61C0[a1 >> 5], v2 = (a1 & 0x1F) << 6, (*(_BYTE *)(*v1 + v2 + 4) & 1) == 0)
    || *(_DWORD *)(*v1 + ((a1 & 0x1F) << 6)) == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_4B82F8 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, 0);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, 0);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, 0);
      }
    }
    *(_DWORD *)(v2 + *v1) = -1;
    return 0;
  }
}
