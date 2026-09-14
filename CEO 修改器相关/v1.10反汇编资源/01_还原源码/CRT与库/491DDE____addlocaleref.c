// 函数 0x491dde  ___addlocaleref  size=0x8F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __cdecl __addlocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v2; // ebx
  int lpAddenda; // [esp+14h] [ebp+8h]

  InterlockedIncrement(lpAddend);
  if ( *((_DWORD *)lpAddend + 44) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 44));
  if ( *((_DWORD *)lpAddend + 46) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 46));
  if ( *((_DWORD *)lpAddend + 45) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 45));
  if ( *((_DWORD *)lpAddend + 48) )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 48));
  v2 = (volatile LONG **)(lpAddend + 20);
  lpAddenda = 6;
  do
  {
    if ( *(v2 - 2) != (volatile LONG *)&unk_4B8DB4 && *v2 )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) && v2[1] )
      InterlockedIncrement(v2[1]);
    v2 += 4;
    --lpAddenda;
  }
  while ( lpAddenda );
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}
