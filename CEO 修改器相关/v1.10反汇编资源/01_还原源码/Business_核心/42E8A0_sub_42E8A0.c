// 函数 0x42e8a0  sub_42E8A0  size=0x1D8  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42E8A0(int a1)
{
  int v1; // esi
  int v2; // edx
  double v3; // st6
  int v4; // ebx
  int v5; // edi
  int *v6; // eax
  int *v7; // ecx
  __int16 *v8; // esi
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int *v14; // eax
  int *v15; // ecx
  __int16 *v16; // esi
  int v17; // edx
  int v19; // [esp+4h] [ebp-8h]
  int v20; // [esp+14h] [ebp+8h]
  int v21; // [esp+14h] [ebp+8h]

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v19 = v1;
  if ( *(char *)(v1 + 224) == dword_87032C )
  {
    v2 = dword_870818;
    v3 = dbl_870338;
    v4 = 0;
    v5 = dword_4CC8D0;
    if ( dword_870818 >= 4 )
    {
      v6 = (int *)((char *)dword_870824 + 224);
      v7 = (int *)(*(_DWORD *)dword_870814 + 96);
      v8 = (__int16 *)(v1 + 242);
      v9 = ((unsigned int)(dword_870818 - 4) >> 2) + 1;
      v20 = 4 * v9;
      do
      {
        v10 = *(v8 - 1);
        if ( v10 != -1 )
        {
          v5 = dword_4CC8D0;
          v3 = v3
             + (double)*(__int16 *)(v10 * dword_4CC8BC + dword_4CC8D0 + 28)
             * (double)*(v7 - 18)
             * ((double)*(v6 - 56)
              * 0.00390625);
        }
        v11 = *v8;
        if ( v11 != -1 )
        {
          v5 = dword_4CC8D0;
          v3 = v3
             + (double)*(__int16 *)(v11 * dword_4CC8BC + dword_4CC8D0 + 28)
             * (double)*v7
             * ((double)*(v6 - 28)
              * 0.00390625);
        }
        v12 = v8[1];
        if ( v12 != -1 )
        {
          v5 = dword_4CC8D0;
          v3 = v3
             + (double)*(__int16 *)(v12 * dword_4CC8BC + dword_4CC8D0 + 28)
             * (double)v7[18]
             * ((double)*v6
              * 0.00390625);
        }
        v13 = v8[2];
        if ( v13 != -1 )
        {
          v5 = dword_4CC8D0;
          v3 = v3
             + (double)*(__int16 *)(v13 * dword_4CC8BC + dword_4CC8D0 + 28)
             * (double)v7[36]
             * ((double)v6[28]
              * 0.00390625);
        }
        v4 = v20;
        v8 += 4;
        v6 += 112;
        v7 += 72;
        --v9;
      }
      while ( v9 );
      v2 = dword_870818;
      dbl_870338 = v3;
    }
    if ( v4 < v2 )
    {
      v14 = (int *)((char *)dword_870824 + 112 * v4);
      v15 = (int *)(*(_DWORD *)dword_870814 + 72 * v4 + 24);
      v16 = (__int16 *)(v19 + 2 * v4 + 240);
      v17 = v2 - v4;
      do
      {
        v21 = *v16;
        if ( v21 != -1 )
        {
          v3 = v3 + (double)*(__int16 *)(v21 * dword_4CC8BC + v5 + 28) * (double)*v15 * ((double)*v14 * 0.00390625);
          dbl_870338 = v3;
        }
        ++v16;
        v15 += 18;
        v14 += 28;
        --v17;
      }
      while ( v17 );
    }
  }
  return 0;
}
