// 函数 0x44ab10  sub_44AB10  size=0x117  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_44AB10(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx

  if ( a2 == 2 )
  {
    sub_435570(1, 0);
    sub_47C920(-1);
    return sub_47C930(v8, v7);
  }
  if ( a2 != 3 )
  {
    if ( a2 != 14 )
    {
      result = a2 - 4;
      if ( (unsigned int)(a2 - 4) <= 9 )
      {
        sub_435570(1, 0);
        sub_4810E0(1);
        return sub_4801E0(a2 - 4);
      }
      return result;
    }
    v3 = *(_DWORD *)(dword_8B9FF0 + 4084);
    if ( v3 >= 0 )
    {
      sub_4810E0(1);
      if ( dword_4B3824 != v3 )
      {
        dword_4B3824 = v3;
        result = GetTickCount();
        dword_8B8CDC = result;
        return result;
      }
      if ( (int)(GetTickCount() - dword_8B8CDC) > 500 )
      {
        result = GetTickCount();
        dword_8B8CDC = result;
        return result;
      }
      dword_8B8CDC = GetTickCount();
    }
  }
  result = sub_435570(1, 0);
  v4 = *(_DWORD *)(dword_8B9FF0 + 4084);
  if ( v4 >= 0 && dword_8B8CE0[v4] != -1 )
  {
    result = sub_44AF30();
    if ( result )
    {
      sub_47C920(v4);
      return sub_47C930(v6, v5);
    }
  }
  return result;
}
