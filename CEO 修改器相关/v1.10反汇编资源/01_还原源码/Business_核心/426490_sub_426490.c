// 函数 0x426490  sub_426490  size=0x7F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_426490(_DWORD *this)
{
  double v1; // st7
  double v2; // st6
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  double v7; // rt0
  double v8; // st6
  double v9; // st7
  double v10; // st6

  v1 = (double)(int)*(this + 3);
  v2 = 0.8 * v1;
  v3 = (dword_4CD11C - *(this + 2)) / 4608;
  v4 = 0;
  if ( v3 >= 8 )
  {
    v5 = ((unsigned int)(v3 - 8) >> 3) + 1;
    v4 = 8 * v5;
    do
    {
      --v5;
      v2 = v2 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996;
    }
    while ( v5 );
  }
  if ( v4 < v3 )
  {
    v6 = v3 - v4;
    do
    {
      --v6;
      v2 = v2 * 0.996;
    }
    while ( v6 );
  }
  v7 = v2;
  v8 = v1;
  v9 = v7;
  v10 = v8 * 0.2;
  if ( v10 <= v7 )
    return (int)v9;
  else
    return (int)v10;
}
