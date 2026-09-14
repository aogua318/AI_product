// 函数 0x483d50  sub_483D50  size=0x8A  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483D50(_DWORD *this, int a2, int a3, int a4, _DWORD *a5, int *a6)
{
  __int16 *v6; // eax
  char v7; // dl
  int v8; // esi
  int v9; // edi
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // edi

  v6 = (__int16 *)(*(this + 45) + a2 * *(this + 40));
  v7 = *(_BYTE *)(*(this + 37) + 10 * *v6 + 6);
  v8 = -a3;
  v9 = *((unsigned __int8 *)v6 + 8);
  if ( v7 == 16 )
    v9 = (v9 + 1) >> 1;
  if ( v7 == 8 )
    v9 >>= 1;
  if ( v9 <= 0 )
  {
    v11 = a4;
  }
  else
  {
    v10 = v9;
    v11 = a4;
    do
    {
      v12 = v11 ^ v8;
      v13 = v12 ^ v11;
      v8 = v13 ^ v12;
      v11 = -v13;
      --v10;
    }
    while ( v10 );
  }
  sub_483850(this, v6[1], v6[2], a5, a6);
  *a5 += v8;
  *a6 += v11;
  return 1;
}
