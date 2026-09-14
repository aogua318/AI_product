// 函数 0x46f3a0  sub_46F3A0  size=0x28  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46F3A0(int this)
{
  int v3; // eax

  if ( *(_DWORD *)(this + 16) >= *(_DWORD *)(this + 8) + *(_DWORD *)(this + 12) )
    return -1;
  v3 = fgetc(*(FILE **)this);
  ++*(_DWORD *)(this + 16);
  return v3 ^ 0xFF;
}
