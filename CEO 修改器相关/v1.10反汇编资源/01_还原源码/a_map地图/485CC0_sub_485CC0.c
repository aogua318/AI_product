// 函数 0x485cc0  sub_485CC0  size=0x19B  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_485CC0(int *this, _DWORD *a2)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  bool v6; // zf
  int v8; // [esp+8h] [ebp-4h]
  _DWORD *v9; // [esp+14h] [ebp+8h]

  if ( a2[3] != 2 )
    return 0;
  sub_4834C0(this);
  sub_466380(a2, (int)this);
  sub_466380(a2, (int)(this + 1));
  sub_466380(a2, (int)(this + 2));
  sub_466380(a2, (int)(this + 3));
  sub_466380(a2, (int)(this + 4));
  sub_466380(a2, (int)(this + 5));
  sub_466380(a2, (int)(this + 6));
  sub_466380(a2, (int)(this + 7));
  sub_466380(a2, (int)(this + 8));
  sub_466380(a2, (int)(this + 15));
  sub_466380(a2, (int)(this + 16));
  sub_466380(a2, (int)(this + 18));
  sub_466380(a2, (int)(this + 19));
  sub_466380(a2, (int)(this + 20));
  sub_466380(a2, (int)(this + 21));
  sub_466380(a2, (int)(this + 22));
  sub_466380(a2, (int)(this + 23));
  sub_466380(a2, (int)(this + 24));
  sub_466380(a2, (int)(this + 25));
  sub_4842C0((int)this, *(this + 6), *(this + 7), *(this + 8), 1, 0, 74);
  sub_466380(a2, (int)(this + 30));
  v4 = this + 30;
  v9 = this + 30;
  v8 = 4;
  do
  {
    if ( *v4 )
    {
      v5 = sub_465E40(2 * *(this + 6) * *(this + 7), "a_map\\a_map.cpp", 155);
      *v9 = v5;
      sub_466380(a2, (int)v5);
    }
    v4 = v9 + 1;
    v6 = v8-- == 1;
    ++v9;
  }
  while ( !v6 );
  sub_466380(a2, *(this + 34));
  sub_466380(a2, *(this + 35));
  sub_465320((int)(this + 39), (int)a2);
  return 1;
}
