// 函数 0x427430  sub_427430  size=0x162  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_427430(double *this, int a2)
{
  int v3; // eax
  int *v4; // ecx
  int v5; // edx
  int v6; // edi
  __int16 *i; // eax
  int v9; // ebx
  int v10; // eax
  double v11; // [esp+Ch] [ebp-20h]
  double v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+24h] [ebp-8h]
  int v16; // [esp+28h] [ebp-4h]

  v3 = *(char *)(388 * *(__int16 *)this + *(_DWORD *)dword_4D0C8C + 78);
  v4 = (int *)(dword_4D0BAC + a2 * dword_4D0B98);
  v5 = *(unsigned __int8 *)v4;
  v6 = 0;
  for ( i = (__int16 *)(*(_DWORD *)dword_87081C
                      + 116 * *(__int16 *)(*(_DWORD *)dword_4D0C94 + 2 * (*((char *)this + 128) + 34 * v3) + 24)
                      + 20); v5 != *i; ++i )
  {
    if ( ++v6 >= 4 )
      return 0;
  }
  v11 = *(this + v6 + 19);
  v12 = (double)v4[4] * 0.00390625;
  v9 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)this + 1);
  v13 = *((_DWORD *)this + v6 + 33);
  v16 = 100 * v4[5];
  v14 = *((char *)this + v6 + 184);
  v15 = *((char *)v4 + 2);
  v10 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v9 + 2 * v5 + 240);
  if ( *((char *)v4 + 1) >= 0 )
  {
    v10 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v9 + 2 * v5 + 240);
    *(_DWORD *)(v10 + 808) += (v4[6] + 128) / 256;
  }
  sub_415260((char *)v10, v4[5], -(v4[4] >> 8), 1, 1, *(char *)(v9 + 224));
  *((_DWORD *)this + v6 + 33) += v16;
  *(this + v6 + 19) = v12 + v11;
  *((_BYTE *)this + v6 + 184) = (v13 * v14 + v16 * v15) / (v13 + v16);
  return 1;
}
