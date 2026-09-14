// 函数 0x4650d0  sub_4650D0  size=0x143  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4650D0(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int i; // ebx
  int v7; // eax
  int v8; // eax

  v3 = *(this + 2);
  if ( a2 <= v3 )
    return 0;
  if ( v3 >= 0x8000 || a2 < 0x8000 )
  {
    *(this + 5) = sub_466120(*(this + 5), a2 * *this, (int)"a_lib\\a_block.cpp", 310);
  }
  else
  {
    v4 = sub_465E40(4 * a2, (int)"a_lib\\a_block.cpp", 301);
    v5 = 0;
    for ( i = v4; v5 < *(this + 2); ++v5 )
      *(_DWORD *)(v4 + 4 * v5) = (*(_WORD *)(*(this + 5) + 2 * v5) & 0x7FFF)
                               + ((*(__int16 *)(*(this + 5) + 2 * v5) & 0xFFFF8000) << 16);
    sub_465FE0(*(this + 5), (int)"a_lib\\a_block.cpp", 306);
    *(this + 5) = i;
    *this = 4;
  }
  if ( sub_4658C0(*(this + 5)) < a2 * *this )
    return 0;
  v7 = sub_466120(*(this + 6), a2 * *(this + 1), (int)"a_lib\\a_block.cpp", 315);
  *(this + 6) = v7;
  if ( sub_4658C0(v7) < a2 * *(this + 1) )
    return 0;
  v8 = *(this + 2);
  if ( *this != 2 )
  {
    for ( ; v8 < a2; ++v8 )
      *(_DWORD *)(*(this + 5) + 4 * v8) = v8;
    goto LABEL_16;
  }
  if ( v8 >= a2 )
  {
LABEL_16:
    *(this + 2) = a2;
    return 1;
  }
  do
  {
    *(_WORD *)(*(this + 5) + 2 * v8) = v8;
    ++v8;
  }
  while ( v8 < a2 );
  *(this + 2) = a2;
  return 1;
}
