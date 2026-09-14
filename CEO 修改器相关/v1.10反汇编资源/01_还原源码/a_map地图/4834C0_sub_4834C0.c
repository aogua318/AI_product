// 函数 0x4834c0  sub_4834C0  size=0x8A  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__thiscall sub_4834C0(int *this)
{
  int v2; // eax
  int v3; // eax
  int *v4; // esi
  int v5; // ebx

  sub_46A670((int)(this + 9));
  v2 = *(this + 35);
  if ( v2 )
    sub_465FE0(v2, "a_map\\a_map.cpp", 68);
  v3 = *(this + 34);
  if ( v3 )
    sub_465FE0(v3, "a_map\\a_map.cpp", 70);
  v4 = this + 30;
  v5 = 4;
  do
  {
    if ( *v4 )
      sub_465FE0(*v4, "a_map\\a_map.cpp", 74);
    ++v4;
    --v5;
  }
  while ( v5 );
  sub_464DC0(this + 39);
  return memset(this, 0, 0xBCu);
}
