// 函数 0x4656d0  sub_4656D0  size=0xCD  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4656D0(int *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  __int16 *v6; // eax
  __int16 v7; // di
  int v8; // edi
  int v9; // edx
  int v10; // edi
  void (__cdecl *v11)(int); // eax

  v2 = *(this + 4);
  v3 = *(this + 2);
  if ( v2 > v3 )
  {
    MessageBoxA(0, "mem_use > block_sum", "error", 0);
    exit(1);
  }
  if ( *(this + 3) && v2 == v3 )
  {
    if ( dword_8DB828 )
      v4 = v3 + 1;
    else
      v4 = (int)(3 * v3 + 1) / 2;
    sub_4650D0(this, v4);
  }
  v5 = *(this + 4);
  if ( v5 >= *(this + 2) )
    return -1;
  if ( *this == 2 )
  {
    v6 = (__int16 *)(*(this + 5) + 2 * v5);
    v7 = *v6;
    *v6 &= 0x8000u;
    v8 = v7 & 0x7FFF;
    *(_WORD *)(*(this + 5) + 2 * v8) |= 0x8000u;
  }
  else
  {
    v9 = *(this + 5);
    v10 = *(_DWORD *)(v9 + 4 * v5);
    *(_DWORD *)(v9 + 4 * v5) = v10 & 0x80000000;
    v8 = v10 & 0x7FFFFFFF;
    *(_DWORD *)(*(this + 5) + 4 * v8) |= 0x80000000;
  }
  v11 = (void (__cdecl *)(int))*(this + 7);
  ++*(this + 4);
  if ( v11 )
    v11(*(this + 6) + v8 * *(this + 1));
  return v8;
}
