// 函数 0x41a840  sub_41A840  size=0x1A3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_41A840(__int16 *this)
{
  double result; // st7
  int v2; // esi
  int v4; // ecx
  int v5; // ebx
  int *v6; // eax
  int *v7; // edx
  __int16 *v8; // edi
  unsigned int v9; // esi
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int *v14; // eax
  int *v15; // edx
  __int16 *v16; // edi
  int v17; // esi
  __int16 *v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+14h] [ebp-4h]

  result = 0.0;
  v2 = dword_870818;
  v4 = dword_4CC8D0;
  v5 = 0;
  v18 = this;
  if ( dword_870818 >= 4 )
  {
    v6 = (int *)((char *)dword_870824 + 224);
    v7 = (int *)(*(_DWORD *)dword_870814 + 96);
    v8 = this + 121;
    v9 = ((unsigned int)(dword_870818 - 4) >> 2) + 1;
    v20 = 4 * v9;
    do
    {
      v10 = *(v8 - 1);
      if ( v10 != -1 )
      {
        v4 = dword_4CC8D0;
        result = result
               + (double)*(__int16 *)(v10 * dword_4CC8BC + dword_4CC8D0 + 28)
               * (double)*(v7 - 18)
               * ((double)*(v6 - 56)
                * 0.00390625);
      }
      v11 = *v8;
      if ( v11 != -1 )
      {
        v4 = dword_4CC8D0;
        result = result
               + (double)*(__int16 *)(v11 * dword_4CC8BC + dword_4CC8D0 + 28)
               * (double)*v7
               * ((double)*(v6 - 28)
                * 0.00390625);
      }
      v12 = v8[1];
      if ( v12 != -1 )
      {
        v4 = dword_4CC8D0;
        result = result
               + (double)*(__int16 *)(v12 * dword_4CC8BC + dword_4CC8D0 + 28)
               * (double)v7[18]
               * ((double)*v6
                * 0.00390625);
      }
      v13 = v8[2];
      if ( v13 != -1 )
      {
        v4 = dword_4CC8D0;
        result = result
               + (double)*(__int16 *)(v13 * dword_4CC8BC + dword_4CC8D0 + 28)
               * (double)v7[36]
               * ((double)v6[28]
                * 0.00390625);
      }
      v5 = v20;
      v8 += 4;
      v6 += 112;
      v7 += 72;
      --v9;
    }
    while ( v9 );
    v2 = dword_870818;
  }
  if ( v5 < v2 )
  {
    v14 = (int *)((char *)dword_870824 + 112 * v5);
    v15 = (int *)(*(_DWORD *)dword_870814 + 72 * v5 + 24);
    v16 = &v18[v5 + 120];
    v17 = v2 - v5;
    do
    {
      v19 = *v16;
      if ( v19 != -1 )
        result = result
               + (double)*(__int16 *)(v19 * dword_4CC8BC + v4 + 28) * (double)*v15 * ((double)*v14 * 0.00390625);
      ++v16;
      v15 += 18;
      v14 += 28;
      --v17;
    }
    while ( v17 );
  }
  return result;
}
