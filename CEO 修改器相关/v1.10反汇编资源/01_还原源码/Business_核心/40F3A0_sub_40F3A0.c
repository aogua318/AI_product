// 函数 0x40f3a0  sub_40F3A0  size=0x104  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40F3A0(int a1, int a2)
{
  int *v2; // eax

  v2 = (int *)(*(_DWORD *)dword_4C4434 + 72 * a2);
  if ( *(_WORD *)(a1 * dword_4C43C8 + dword_4C43DC + 4) == 8 || v2[1] <= 0 || *((int *)dword_870824 + 228) > 0 )
  {
    if ( v2[2] <= 0 || *((int *)dword_870824 + 256) > 0 )
    {
      if ( v2[3] <= 0 || *((int *)dword_870824 + 60) > 0 )
      {
        if ( v2[5] <= 0 || *((int *)dword_870824 + 396) > 0 )
        {
          if ( v2[4] <= 0 || *((int *)dword_870824 + 424) > 0 )
          {
            if ( v2[6] <= 0 || *((int *)dword_870824 + 816) > 0 )
            {
              if ( v2[7] <= 0 || *((int *)dword_870824 + 340) > 0 )
              {
                return 1;
              }
              else
              {
                dword_4B102C = 12;
                return 0;
              }
            }
            else
            {
              dword_4B102C = 29;
              return 0;
            }
          }
          else
          {
            dword_4B102C = 15;
            return 0;
          }
        }
        else
        {
          dword_4B102C = 14;
          return 0;
        }
      }
      else
      {
        dword_4B102C = 2;
        return 0;
      }
    }
    else
    {
      dword_4B102C = 9;
      return 0;
    }
  }
  else
  {
    dword_4B102C = 8;
    return 0;
  }
}
