// 函数 0x469370  sub_469370  size=0x2C9  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469370(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void (__cdecl *a11)(int, int, int))
{
  int v12; // edx
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // edi
  int i; // eax
  int v18; // ebx
  int j; // eax
  int v20; // edx
  int result; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // edx
  int v26; // [esp+Ch] [ebp-6048h]
  int v27; // [esp+10h] [ebp-6044h]
  int v28; // [esp+14h] [ebp-6040h]
  int v29; // [esp+18h] [ebp-603Ch]
  int v30; // [esp+20h] [ebp-6034h]
  int v31; // [esp+28h] [ebp-602Ch]
  int *v32; // [esp+2Ch] [ebp-6028h]
  int v33; // [esp+30h] [ebp-6024h]
  char *v34; // [esp+34h] [ebp-6020h]
  int v35; // [esp+38h] [ebp-601Ch]
  int v36; // [esp+3Ch] [ebp-6018h]
  int k; // [esp+44h] [ebp-6010h]
  int v38; // [esp+48h] [ebp-600Ch]
  int v39; // [esp+4Ch] [ebp-6008h]
  _BYTE v40[8192]; // [esp+50h] [ebp-6004h] BYREF
  char v41; // [esp+2050h] [ebp-4004h] BYREF
  _DWORD v42[2048]; // [esp+4050h] [ebp-2004h]

  v12 = a4;
  v13 = 0;
  v14 = 0;
  v38 = a3;
  for ( v42[0] = 0; v14 < a4; v42[v14] = v15 )
  {
    v15 = v13 / a4;
    v12 = a4;
    v13 += a9;
    ++v14;
  }
  v16 = 0;
  for ( i = 0; i < v12; *(_DWORD *)&v40[4 * i - 4] = v18 )
  {
    v18 = v42[i + 1] - v42[i];
    ++i;
  }
  v42[0] = 0;
  if ( a5 > 0 )
  {
    v39 = 0;
    do
    {
      v42[++v16] = v39 / a5;
      v39 += a10;
    }
    while ( v16 < a5 );
  }
  for ( j = 0; j < a5; *(_DWORD *)&v40[4 * j + 8188] = v20 )
  {
    v20 = v42[j + 1] - v42[j];
    ++j;
  }
  result = (int)a6[3] >> 3;
  v36 = a6[9] + a8 * a6[2] + result * a7;
  v22 = *(this + 9) + ((int)*(this + 3) >> 3) * a2 + a3 * *(this + 2);
  v26 = *(this + 5);
  v28 = *(this + 6);
  v27 = *(this + 7);
  v30 = (int)*(this + 3) >> 3;
  v31 = *(this + 8);
  v23 = a3;
  dword_8DBCFC = (int)*(this + 3) >> 3;
  v29 = result;
  Size = result;
  v34 = &v41;
  for ( k = 0; k < a5; ++k )
  {
    v24 = a2;
    v35 = v36;
    v39 = v22;
    v32 = (int *)v40;
    if ( v23 >= v28 && v23 < v31 )
    {
      v33 = 0;
      if ( a4 > 0 )
      {
        do
        {
          if ( v24 >= v26 && v24 < v27 )
          {
            a11(v39, v35, 1);
            result = v29;
          }
          v39 += v30;
          v25 = *v32++;
          v35 += result * v25;
          if ( ++v24 >= *this )
            break;
          ++v33;
        }
        while ( v33 < a4 );
        v23 = v38;
      }
    }
    v36 += a6[2] * *(_DWORD *)v34;
    v22 += *(this + 2);
    v34 += 4;
    v38 = ++v23;
    if ( v23 >= v31 )
      break;
  }
  return result;
}
