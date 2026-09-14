// 函数 0x44a000  sub_44A000  size=0x69  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_44A000()
{
  int result; // eax
  __int16 v1; // ax
  int v2; // eax

  result = GetTickCount();
  if ( result - dword_8B8CD0 > 200 )
  {
    dword_8B8CD0 = result;
    v1 = *(_WORD *)(dword_8B8CC8 + 3470) + 1;
    if ( *(_WORD *)(dword_8B8CC8 + 3470) == 29 )
      v1 = 26;
    *(_WORD *)(dword_8B8CC8 + 3470) = v1;
    v2 = sub_47E590(dword_8B8CC8 + 3456);
    sub_47C950(v2);
    sub_40AE10((int)&unk_8B78E8);
    return sub_40ACC0();
  }
  return result;
}
