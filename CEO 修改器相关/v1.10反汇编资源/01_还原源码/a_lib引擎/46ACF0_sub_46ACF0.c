// 函数 0x46acf0  sub_46ACF0  size=0x106  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46ACF0(__int16 *this, _DWORD *a2, int a3, int a4)
{
  __int16 v4; // ax
  __int16 v5; // dx
  int v6; // eax
  __int16 v8; // ax

  v4 = *(this + 6);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v8 = *(this + 4);
      if ( v8 == 24 && a2[3] == 16 )
        return sub_46AB50(this, a2, a3, a4, (void (__cdecl *)(int, __int16 *, int))sub_468480);
      if ( v8 == 32 )
      {
        if ( a2[3] == 16 )
          return sub_46AB50(this, a2, a3, a4, (void (__cdecl *)(int, __int16 *, int))sub_468560);
        if ( a2[3] == 32 )
          return sub_46AB50(this, a2, a3, a4, (void (__cdecl *)(int, __int16 *, int))sub_468660);
      }
    }
  }
  else
  {
    v5 = *(this + 4);
    v6 = a2[3];
    if ( v6 == v5 )
      return sub_46AB50(this, a2, a3, a4, (void (__cdecl *)(int, __int16 *, int))sub_468270);
    if ( v5 == 24 && v6 == 16 )
      return sub_46AB50(this, a2, a3, a4, (void (__cdecl *)(int, __int16 *, int))sub_468300);
    if ( v5 == 32 && v6 == 16 )
      return sub_46AB50(this, a2, a3, a4, (void (__cdecl *)(int, __int16 *, int))sub_4683C0);
  }
  return 0;
}
