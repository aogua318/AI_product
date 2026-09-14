// 函数 0x417b60  sub_417B60  size=0xCA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __thiscall sub_417B60(char *this, int a2, __int16 a3, int a4)
{
  int v4; // esi
  __int16 *v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int *v10; // edi

  v4 = 0;
  v5 = (__int16 *)(this + 488);
  v6 = 32;
  do
  {
    if ( *v5 == a2 || *v5 == -1 )
    {
      if ( a4 - *((_DWORD *)v5 - 1) > 0 )
      {
        *((_DWORD *)v5 - 1) = a4;
        *v5 = a2;
        v5[1] = a3;
      }
      v4 = 1;
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
  {
    v7 = -1;
    v8 = 2;
    v9 = dword_4CD11C + 1000;
    v10 = (int *)(this + 492);
    do
    {
      if ( *(v10 - 2) < v9 )
      {
        v9 = *(v10 - 2);
        v7 = v8 - 2;
      }
      if ( *v10 < v9 )
      {
        v9 = *v10;
        v7 = v8 - 1;
      }
      if ( v10[2] < v9 )
      {
        v9 = v10[2];
        v7 = v8;
      }
      if ( v10[4] < v9 )
      {
        v9 = v10[4];
        v7 = v8 + 1;
      }
      v8 += 4;
      v10 += 8;
    }
    while ( v8 - 2 < 32 );
    *((_WORD *)this + 4 * v7 + 244) = a2;
    *((_DWORD *)this + 2 * v7 + 121) = a4;
    *((_WORD *)this + 4 * v7 + 245) = a3;
    LOWORD(v5) = a3;
  }
  return (__int16)v5;
}
