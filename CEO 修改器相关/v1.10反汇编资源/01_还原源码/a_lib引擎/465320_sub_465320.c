// 函数 0x465320  sub_465320  size=0xBA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_465320(int this, int a2)
{
  int v3; // eax
  int v4; // eax

  if ( *(_DWORD *)(a2 + 12) != 2 )
    return 0;
  sub_464DC0((int *)this);
  sub_466380(this);
  sub_466380(this + 4);
  sub_466380(this + 8);
  sub_466380(this + 12);
  sub_466380(this + 16);
  v3 = sub_465E40(*(_BYTE *)this * *(_BYTE *)(this + 8), (int)"a_lib\\a_block.cpp", 378);
  *(_DWORD *)(this + 20) = v3;
  if ( !v3 )
    return 0;
  sub_466380(v3);
  v4 = sub_465E40(*(_BYTE *)(this + 4) * *(_BYTE *)(this + 8), (int)"a_lib\\a_block.cpp", 382);
  *(_DWORD *)(this + 24) = v4;
  if ( !v4 )
    return 0;
  sub_466380(v4);
  return 1;
}
