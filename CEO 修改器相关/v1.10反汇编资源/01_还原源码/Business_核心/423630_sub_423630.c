// 函数 0x423630  sub_423630  size=0x112  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_423630(int a1)
{
  int v1; // edi
  double *v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  double v6; // st7
  int v7; // ecx
  int v8; // edx
  double v10[131]; // [esp+8h] [ebp-41Ch] BYREF

  v1 = 0;
  v2 = (double *)((char *)&unk_4D10B8 + 189880 * dword_8703A0);
  if ( dword_4CDEBC )
    return 1;
  memset(v10, 0, sizeof(v10));
  sub_423440(v10, dword_4CDEC0);
  v3 = dword_4D04A4;
  ++*((_DWORD *)&v10[50] + dword_4D04A4 + 1);
  if ( a1 )
  {
    ++*((_DWORD *)&v10[30] + v3 + 1);
    v4 = sub_459B70(dword_8703A0);
    v5 = (_DWORD *)&v10[10] + dword_4D04A4 + 1;
    if ( v4 > *v5 )
    {
      *v5 = v4;
      v6 = sub_42EB70(v2);
      v7 = dword_4D04A4;
      v8 = (unsigned __int64)(715827883LL * dword_4CD11C) >> 32;
      v10[dword_4D04A4 + 91] = v6 - v2[12];
      *((_DWORD *)&v10[70] + v7 + 1) = (v8 >> 8) + ((unsigned int)v8 >> 31);
      v1 = 1;
    }
  }
  sub_423550(v10, dword_4CDEC0);
  return v1;
}
