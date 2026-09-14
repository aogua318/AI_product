// 函数 0x46ddb0  sub_46DDB0  size=0x99  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46DDB0(int ArgList)
{
  if ( *(_DWORD *)dword_8DBE08 )
  {
    if ( sub_4658C0(*(int *)dword_8DBE08) < ArgList )
    {
      *(_DWORD *)dword_8DBE08 = sub_466120(*(int *)dword_8DBE08, ArgList, "a_lib\\a_pic16_uncompress.cpp", 27);
      if ( sub_4658C0(*(int *)dword_8DBE08) < ArgList )
        MessageBoxA(0, "realloc fail", "error", 0);
    }
  }
  else
  {
    *(_DWORD *)dword_8DBE08 = sub_465E40(ArgList, "a_lib\\a_pic16_uncompress.cpp", 24);
  }
  if ( !dword_8DBE04 )
  {
    atexit(sub_46DD70);
    dword_8DBE04 = 1;
  }
  return *(_DWORD *)dword_8DBE08;
}
