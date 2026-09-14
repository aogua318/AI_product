// 函数 0x47c580  sub_47C580  size=0x56  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47C580(_DWORD *a1)
{
  int v1; // ecx
  int *v2; // eax

  if ( dword_4B81E8 != -1 )
  {
    v1 = dword_8EED88 + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8);
    v2 = sub_464D00(
           v1,
           dword_8EED8C + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 2),
           v1 + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 4),
           dword_8EED8C
         + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 2)
         + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 6));
    sub_464CE0(a1, v2);
  }
  return 0;
}
