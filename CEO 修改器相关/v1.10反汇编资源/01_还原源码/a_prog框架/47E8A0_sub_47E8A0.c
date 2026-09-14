// 函数 0x47e8a0  sub_47E8A0  size=0x68  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E8A0(void *this, int a2, int a3)
{
  int v3; // eax
  __int16 *v4; // ecx
  int v5; // edx
  __int16 *i; // esi

  v3 = sub_47E540((int)this);
  if ( v3 == -1 )
  {
    v5 = 0;
    for ( i = v4 + 7; ; ++i )
    {
      v3 = *i;
      if ( v3 != -1 )
        break;
      if ( ++v5 >= 5 )
        return 0;
    }
  }
  return sub_467130(
           (__int16 *)(**(_DWORD **)(*(_DWORD *)v4 + 16) + 24 * v3),
           v4[5] + *(__int16 *)(*(_DWORD *)v4 + 276),
           v4[6] + *(__int16 *)(*(_DWORD *)v4 + 278),
           a2,
           a3);
}
