// 函数 0x4330d0  sub_4330D0  size=0x9D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4330D0(int this, int a2, double a3, int a4)
{
  int v4; // ebx
  double v6; // st7
  int result; // eax
  bool v8; // zf

  v4 = a2;
  if ( a2 < 0 )
    v4 = 0;
  ++*(_WORD *)(this + 4);
  ++*(_WORD *)(this + 8);
  if ( *(char *)(this + 10) < v4 )
    *(_BYTE *)(this + 10) = v4;
  v6 = ((double)*(int *)(this + 76) * 0.00390625 * 3.0 + a3 * 1.2) * 0.25;
  if ( v6 >= 4194304.0 )
    nullsub_2(this);
  else
    *(_DWORD *)(this + 76) = (int)(v6 * 256.0);
  *(_DWORD *)(this + 96) = dword_4CD11C;
  result = (*(_DWORD *)(this + 84) + v4 + 2 * *(_DWORD *)(this + 84)) / 4;
  v8 = *(_DWORD *)(this + 108) == -1;
  *(_DWORD *)(this + 84) = result;
  if ( v8 )
    *(_DWORD *)(this + 108) = a4;
  return result;
}
