// 函数 0x426510  sub_426510  size=0xA1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_426510(_DWORD *this)
{
  double v1; // st7
  double v2; // st6
  int v3; // eax
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  double v8; // st5

  v1 = (double)(int)*(this + 3);
  v2 = 0.8 * v1;
  v3 = (dword_4CD11C - *(this + 2)) / 4608 - 1;
  if ( v3 < 0 )
    return (int)(v1 - v2);
  v5 = 0;
  if ( v3 >= 8 )
  {
    v6 = ((unsigned int)((dword_4CD11C - *(this + 2)) / 4608 - 9) >> 3) + 1;
    v5 = 8 * v6;
    do
    {
      --v6;
      v2 = v2 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996 * 0.996;
    }
    while ( v6 );
  }
  if ( v5 < v3 )
  {
    v7 = v3 - v5;
    do
    {
      --v7;
      v2 = v2 * 0.996;
    }
    while ( v7 );
  }
  v8 = v1 * 0.2;
  if ( v1 * 0.2 > v2 )
    v2 = v8;
  if ( v8 >= 0.996 * v2 )
    return (int)(v2 - v8);
  else
    return (int)(v2 - 0.996 * v2);
}
