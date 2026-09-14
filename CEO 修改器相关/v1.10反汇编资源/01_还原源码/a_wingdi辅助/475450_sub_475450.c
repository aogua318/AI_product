// 函数 0x475450  sub_475450  size=0x112  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *sub_475450()
{
  int *v0; // ecx
  int v1; // edx
  int v2; // esi
  int *result; // eax
  int *v4; // edi
  int *v5; // edx
  bool v6; // zf
  double *v7; // ebx
  float *v8; // esi
  int v9; // edi
  long double v10; // st7
  double v11; // [esp+Ch] [ebp-18h]
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Ch] [ebp-8h]
  float *v16; // [esp+1Ch] [ebp-8h]
  int *v17; // [esp+20h] [ebp-4h]
  int v18; // [esp+20h] [ebp-4h]

  v0 = (int *)dbl_4B5E10;
  v1 = 0;
  v17 = (int *)dbl_4B5E10;
  v12 = 0;
  do
  {
    v2 = *(int *)((char *)&dword_4B5E7C + v1);
    result = *(int **)((char *)&off_4B5E88 + v1);
    dword_8DC0A8 = (int)result;
    v15 = v2;
    if ( v2 > 0 )
    {
      v4 = v0;
      v13 = v2;
      v5 = v0;
      for ( i = v2; ; i = v15 )
      {
        while ( 1 )
        {
          do
          {
            *result = *v0;
            result[1] = *v5;
            result[2] = *v4;
            result += 3;
            ++v0;
            --v2;
          }
          while ( v2 );
          ++v5;
          if ( !--i )
            break;
          v0 = v17;
          v2 = v15;
        }
        ++v4;
        v6 = v13-- == 1;
        v0 = v17;
        if ( v6 )
          break;
        v2 = v15;
        v5 = v17;
      }
      v1 = v12;
      dword_8DC0A8 = (int)result;
    }
    v0 += 9;
    v1 += 4;
    v12 = v1;
    v17 = v0;
  }
  while ( (int)v0 < (int)&dword_4B5E7C );
  v16 = &flt_8F46A0;
  v7 = (double *)&unk_4B5D38;
  do
  {
    v8 = v16;
    v11 = *v7;
    v18 = 3;
    v9 = 63;
    do
    {
      v10 = pow(2.0, (double)v18-- / 3.0) * v11;
      ++v8;
      --v9;
      *(v8 - 1) = v10;
    }
    while ( v9 );
    v16 += 64;
    ++v7;
    *v8 = 0.0;
  }
  while ( (int)v7 < (int)dbl_4B5E10 );
  return result;
}
