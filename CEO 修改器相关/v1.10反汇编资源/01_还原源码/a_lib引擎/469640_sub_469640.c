// 函数 0x469640  sub_469640  size=0x9C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469640(int *this, int a2, int a3, int *a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  int v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // edx

  result = (int)a4;
  if ( a4[4] == -1 )
  {
    v9 = a4[3];
    v10 = *(this + 3);
    if ( v9 == v10 )
    {
      return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468270);
    }
    else if ( v9 == 24 && v10 == 16 )
    {
      return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468300);
    }
    else if ( v9 == 32 && v10 == 16 )
    {
      return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_4683C0);
    }
  }
  else
  {
    dword_8DBD0C = a4[4];
    v11 = a4[3];
    v12 = *(this + 3);
    if ( v11 == v12 )
    {
      return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468290);
    }
    else if ( v11 == 24 && v12 == 16 )
    {
      return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468350);
    }
    else if ( v11 == 32 && v12 == 16 )
    {
      return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468410);
    }
  }
  return result;
}
