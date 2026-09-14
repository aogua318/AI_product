// 函数 0x483ce0  sub_483CE0  size=0x70  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483CE0(_DWORD *this, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  __int16 *v6; // eax
  char v7; // dl
  int v8; // ecx
  int v9; // esi
  int v11; // ecx
  int v12; // edx

  v6 = (__int16 *)(*(this + 45) + a2 * *(this + 40));
  v7 = *(_BYTE *)(*(this + 37) + 10 * *v6 + 6);
  v8 = -a3;
  v9 = *((unsigned __int8 *)v6 + 8);
  if ( v7 == 16 )
    v9 = (v9 + 1) >> 1;
  if ( v7 == 8 )
    v9 >>= 1;
  if ( v9 > 0 )
  {
    do
    {
      v11 = a4 ^ v8;
      v12 = v11 ^ a4;
      v8 = v12 ^ v11;
      a4 = -v12;
      --v9;
    }
    while ( v9 );
  }
  *a5 = v8 + v6[1];
  *a6 = a4 + v6[2];
  return 1;
}
