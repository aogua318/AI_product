// 函数 0x48e524  __freefls@4  size=0x12F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __stdcall _freefls(void *Block)
{
  void *v1; // edi
  volatile LONG *v2; // edi
  int savedregs; // [esp+28h] [ebp+0h]

  if ( Block )
  {
    if ( *((_DWORD *)Block + 9) )
      free(*((void **)Block + 9));
    if ( *((_DWORD *)Block + 11) )
      free(*((void **)Block + 11));
    if ( *((_DWORD *)Block + 13) )
      free(*((void **)Block + 13));
    if ( *((_DWORD *)Block + 15) )
      free(*((void **)Block + 15));
    if ( *((_DWORD *)Block + 16) )
      free(*((void **)Block + 16));
    if ( *((_DWORD *)Block + 17) )
      free(*((void **)Block + 17));
    if ( *((_DWORD *)Block + 18) )
      free(*((void **)Block + 18));
    if ( *((_UNKNOWN **)Block + 23) != &unk_4ABD40 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = (void *)*((_DWORD *)Block + 26);
    if ( v1 && !InterlockedDecrement(*((volatile LONG **)Block + 26)) && v1 != &unk_4B8890 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = (volatile LONG *)*((_DWORD *)Block + 27);
    if ( v2 )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != off_4B8FF8 && v2 != (volatile LONG *)&unk_4B8F20 && !*v2 )
        __freetlocinfo((void *)v2);
    }
    savedregs = 4777516;
    _unlock(12);
    free(Block);
  }
}
