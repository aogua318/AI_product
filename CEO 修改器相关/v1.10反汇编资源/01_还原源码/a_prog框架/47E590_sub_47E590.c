// 函数 0x47e590  sub_47E590  size=0x8D  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47E590(void *this)
{
  int v1; // eax
  __int16 *v2; // ecx
  int v3; // edx
  __int16 *i; // esi
  __int16 *v6; // esi
  int v7; // eax
  int v8; // edx

  v1 = sub_47E540((int)this);
  if ( v1 == -1 )
  {
    v3 = 0;
    for ( i = v2 + 7; ; ++i )
    {
      v1 = *i;
      if ( v1 != -1 )
        break;
      if ( ++v3 >= 5 )
        return sub_464D00(100000, 100000, -100000, -100000);
    }
  }
  v6 = (__int16 *)(**(_DWORD **)(*(_DWORD *)v2 + 16) + 24 * v1);
  v7 = *v6 + v2[5] + *(__int16 *)(*(_DWORD *)v2 + 276);
  v8 = v2[6] + v6[1] + *(__int16 *)(*(_DWORD *)v2 + 278);
  return sub_464D00(v7, v8, v7 + v6[2], v8 + v6[3]);
}
