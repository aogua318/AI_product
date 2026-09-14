// 函数 0x46d750  sub_46D750  size=0x26  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

uintptr_t __cdecl sub_46D750(_beginthread_proc_type StartAddress, void *ArgList)
{
  uintptr_t result; // eax

  result = _beginthread(StartAddress, 0, ArgList);
  if ( result == -1 )
    return 0;
  ++dword_8DBCF0;
  return result;
}
