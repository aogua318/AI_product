// 函数 0x441010  sub_441010  size=0x2C3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_441010()
{
  int v0; // ecx
  int v1; // ebx
  unsigned int v2; // edi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v21; // [esp+18h] [ebp-88h]
  int v22; // [esp+1Ch] [ebp-84h]
  int v23; // [esp+20h] [ebp-80h]
  int v24; // [esp+24h] [ebp-7Ch]
  int v25; // [esp+28h] [ebp-78h]
  unsigned int v26; // [esp+2Ch] [ebp-74h]
  int v27; // [esp+30h] [ebp-70h]
  int v28[13]; // [esp+34h] [ebp-6Ch] BYREF
  int v29[13]; // [esp+68h] [ebp-38h] BYREF

  v0 = byte_4CE046;
  v1 = dword_4CC8D0 + dword_4B37D8 * dword_4CC8BC;
  v2 = byte_4CE046 - 25;
  v25 = v1;
  v27 = 0;
  v26 = v2;
  v24 = 0;
  while ( 1 )
  {
    v3 = v0;
    if ( v0 > 24 )
      v3 = v0 - 8 * (3 * (v2 / 0x18) + 3);
    if ( v3 < 0 )
      v3 += 24 * ((-1 - v3) / 0x18u) + 24;
    v21 = *(_DWORD *)(v1 + 4 * v3 + 812);
    v4 = v0;
    if ( v0 > 24 )
      v4 = v0 - 8 * (3 * (v2 / 0x18) + 3);
    if ( v4 < 0 )
      v4 += 24 * ((-1 - v4) / 0x18u) + 24;
    v22 = *(_DWORD *)(v1 + 4 * v4 + 912);
    v5 = v0;
    if ( v0 > 24 )
      v5 = v0 - 8 * (3 * (v2 / 0x18) + 3);
    if ( v5 < 0 )
      v5 += 24 * ((-1 - v5) / 0x18u) + 24;
    v23 = *(_DWORD *)(v1 + 4 * v5 + 1012);
    v6 = v0;
    if ( v0 > 24 )
      v6 = v0 - 8 * (3 * (v2 / 0x18) + 3);
    if ( v6 < 0 )
      v6 += 24 * ((-1 - v6) / 0x18u) + 24;
    v7 = *(_DWORD *)(v1 + 4 * v6 + 512);
    v8 = v0;
    if ( v0 > 24 )
      v8 = v0 - 8 * (3 * (v2 / 0x18) + 3);
    if ( v8 < 0 )
      v8 += 24 * ((-1 - v8) / 0x18u) + 24;
    v9 = *(_DWORD *)(v25 + 4 * v8 + 612);
    v10 = v0;
    if ( v0 > 24 )
      v10 = v0 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v10 < 0 )
      v10 += 24 * ((-1 - v10) / 0x18u) + 24;
    v11 = *(_DWORD *)(v25 + 4 * v10 + 712);
    v12 = v22 + v23 + v21;
    v29[v24] = v12;
    v13 = v12 - v11 - v9;
    v14 = v24 * 4;
    v15 = v13 - v7;
    v28[v24] = v15;
    v16 = v12;
    if ( v12 < 0 )
      v16 = -v12;
    if ( v16 > v27 )
    {
      if ( v12 < 0 )
        v12 = -v12;
      v27 = v12;
    }
    v17 = v15;
    if ( v15 < 0 )
      v17 = -v15;
    if ( v17 > v27 )
    {
      if ( v15 < 0 )
        v15 = -v15;
      v27 = v15;
    }
    --v26;
    --v0;
    ++v24;
    if ( v14 + 4 >= 52 )
      break;
    v2 = v26;
    v1 = v25;
  }
  v18 = sub_464D00(637, 421, 779, 485);
  sub_45E140(v18, 13, (int)v29, 0, 31, (double)v27);
  v19 = sub_464D00(637, 421, 779, 485);
  return sub_45E140(v19, 13, (int)v28, 0, 31744, (double)v27);
}
