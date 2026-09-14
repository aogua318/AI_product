// 函数 0x46cea0  sub_46CEA0  size=0x71  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46CEA0(char *ArgList, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  if ( !*(_DWORD *)ArgList || *((_DWORD *)ArgList + 4) )
    return 0;
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(ArgList + 182210) + 72))(*(_DWORD *)(ArgList + 182210));
  *((_DWORD *)ArgList + 5) = a3;
  v4 = 0x10000 / *((_DWORD *)ArgList + 1);
  *((_DWORD *)ArgList + 3) = a2;
  *((_DWORD *)ArgList + 4) = 1;
  *((_DWORD *)ArgList + 7) = a2 - v4;
  v5 = sub_46D750((_beginthread_proc_type)StartAddress, ArgList);
  *(_DWORD *)(ArgList + 182214) = v5;
  if ( v5 == -1 )
  {
    sub_46CDB0(ArgList);
    return 0;
  }
  return 1;
}
