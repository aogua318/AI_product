// 函数 0x412490  sub_412490  size=0xE7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_412490(int *this, int a2)
{
  int v2; // edx
  int *v3; // esi
  double v4; // st7
  double v5; // st5
  double v6; // st5
  int v7; // esi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v12; // [esp+10h] [ebp+8h]

  v2 = *(_DWORD *)dword_870814 + 72 * a2;
  v3 = (int *)((char *)dword_870824 + 112 * a2);
  v12 = *(this + a2 + 1384);
  v4 = ((double)*(int *)(v2 + 32) * (double)*(this + 1)
      + (double)*(int *)(v2 + 28) * (double)*this
      + (double)*(int *)(v2 + 36) * (double)*(this + 2)
      + (double)*(int *)(v2 + 40) * (double)*(this + 3))
     * (double)dword_4D0B30
     / 100.0
     * (double)(dword_4D04A0 + 1)
     * 0.25;
  if ( v12 )
    v5 = (double)v12;
  else
    v5 = (double)v3[18];
  v6 = v5 * 0.00390625 / (0.00390625 * (double)*v3);
  if ( v6 < 1.0 )
    v4 = v4 * v6;
  if ( dword_4CDFFC )
  {
    v7 = 0;
    v8 = *(__int16 *)(v2 + 68) - *(this + 1552) - 1;
    if ( v8 >= 8 )
    {
      v9 = ((unsigned int)(*(__int16 *)(v2 + 68) - *(this + 1552) - 9) >> 3) + 1;
      v7 = 8 * v9;
      do
      {
        --v9;
        v4 = v4 * 0.25 * 0.25 * 0.25 * 0.25 * 0.25 * 0.25 * 0.25 * 0.25;
      }
      while ( v9 );
    }
    if ( v7 < v8 )
    {
      v10 = v8 - v7;
      do
      {
        --v10;
        v4 = v4 * 0.25;
      }
      while ( v10 );
    }
  }
  return (int)v4;
}
