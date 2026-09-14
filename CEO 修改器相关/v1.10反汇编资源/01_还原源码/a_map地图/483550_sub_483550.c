// 函数 0x483550  sub_483550  size=0x19F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483550(_DWORD *this, int *a2)
{
  _DWORD *v4; // ebx
  int *v5; // eax
  int v6; // eax
  bool v7; // zf
  int v9; // [esp+8h] [ebp-4h]
  _DWORD *v10; // [esp+14h] [ebp+8h]

  if ( a2[3] != 1 )
    return 0;
  sub_466260(a2, (int)this, 4);
  sub_466260(a2, (int)(this + 1), 4);
  sub_466260(a2, (int)(this + 2), 4);
  sub_466260(a2, (int)(this + 3), 4);
  sub_466260(a2, (int)(this + 4), 4);
  sub_466260(a2, (int)(this + 5), 4);
  v4 = this + 6;
  sub_466260(a2, (int)(this + 6), 4);
  sub_466260(a2, (int)(this + 7), 4);
  sub_466260(a2, (int)(this + 8), 4);
  sub_466260(a2, (int)(this + 15), 4);
  sub_466260(a2, (int)(this + 16), 4);
  sub_466260(a2, (int)(this + 18), 4);
  sub_466260(a2, (int)(this + 19), 4);
  sub_466260(a2, (int)(this + 20), 4);
  sub_466260(a2, (int)(this + 21), 4);
  sub_466260(a2, (int)(this + 22), 4);
  sub_466260(a2, (int)(this + 23), 4);
  sub_466260(a2, (int)(this + 24), 4);
  sub_466260(a2, (int)(this + 25), 4);
  sub_466260(a2, (int)(this + 30), 16);
  v5 = this + 30;
  v10 = this + 30;
  v9 = 4;
  do
  {
    v6 = *v5;
    if ( v6 )
      sub_466260(a2, v6, 2 * *v4 * *(this + 7));
    v5 = v10 + 1;
    v7 = v9-- == 1;
    ++v10;
  }
  while ( !v7 );
  sub_466260(a2, *(this + 34), 4 * *v4 * *(this + 7));
  sub_466260(a2, *(this + 35), 4 * *v4 * *(this + 7));
  sub_465220(this + 39, (int)a2);
  return 1;
}
