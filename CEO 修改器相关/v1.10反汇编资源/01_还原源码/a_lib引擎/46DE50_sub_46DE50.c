// 函数 0x46de50  sub_46DE50  size=0x99  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46DE50(int ArgList)
{
  if ( *(_DWORD *)dword_8DBE0C )
  {
    if ( sub_4658C0(*(int *)dword_8DBE0C) < ArgList )
    {
      *(_DWORD *)dword_8DBE0C = sub_466120(*(int *)dword_8DBE0C, ArgList, "a_lib\\a_pic16_uncompress.cpp", 45);
      if ( sub_4658C0(*(int *)dword_8DBE0C) < ArgList )
        MessageBoxA(0, "realloc fail", "error", 0);
    }
  }
  else
  {
    *(_DWORD *)dword_8DBE0C = sub_465E40(ArgList, "a_lib\\a_pic16_uncompress.cpp", 42);
  }
  if ( !dword_8DBE04 )
  {
    atexit(sub_46DD70);
    dword_8DBE04 = 1;
  }
  return *(_DWORD *)dword_8DBE0C;
}
