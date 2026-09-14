// 函数 0x477f50  sub_477F50  size=0x23C  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_477F50@<eax>(int result@<eax>, int a2)
{
  int v2; // ecx
  double v3; // st6
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st6
  double v17; // st7
  float v18; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(result + 16) == 2 )
  {
    if ( !*(_DWORD *)(result + 20) )
      return result;
    v2 = 1;
  }
  else
  {
    v2 = *(_DWORD *)(result + 64) - 1;
  }
  for ( result = a2 + 72; v2; *(float *)(result - 44) = v17 * flt_8EA364 + v16 * flt_8E90B8 )
  {
    v3 = *(float *)(result - 4);
    v4 = *(float *)result;
    *(float *)(result - 4) = flt_8EA348 * v3 - flt_8E909C * v4;
    *(float *)result = v4 * flt_8EA348 + v3 * flt_8E909C;
    v5 = *(float *)(result - 8);
    v6 = *(float *)(result + 4);
    *(float *)(result - 8) = flt_8EA34C * v5 - flt_8E90A0 * v6;
    *(float *)(result + 4) = v6 * flt_8EA34C + v5 * flt_8E90A0;
    v7 = *(float *)(result - 12);
    v8 = *(float *)(result + 8);
    *(float *)(result - 12) = flt_8EA350 * v7 - flt_8E90A4 * v8;
    *(float *)(result + 8) = v8 * flt_8EA350 + v7 * flt_8E90A4;
    v9 = *(float *)(result - 16);
    v10 = *(float *)(result + 12);
    *(float *)(result - 16) = flt_8EA354 * v9 - flt_8E90A8 * v10;
    *(float *)(result + 12) = v10 * flt_8EA354 + v9 * flt_8E90A8;
    v18 = *(float *)(result - 20);
    result += 72;
    --v2;
    v11 = *(float *)(result - 56);
    *(float *)(result - 92) = flt_8EA358 * v18 - flt_8E90AC * v11;
    *(float *)(result - 56) = v11 * flt_8EA358 + v18 * flt_8E90AC;
    v12 = *(float *)(result - 96);
    v13 = *(float *)(result - 52);
    *(float *)(result - 96) = flt_8EA35C * v12 - flt_8E90B0 * v13;
    *(float *)(result - 52) = v13 * flt_8EA35C + v12 * flt_8E90B0;
    v14 = *(float *)(result - 100);
    v15 = *(float *)(result - 48);
    *(float *)(result - 100) = flt_8EA360 * v14 - flt_8E90B4 * v15;
    *(float *)(result - 48) = v15 * flt_8EA360 + v14 * flt_8E90B4;
    v16 = *(float *)(result - 104);
    v17 = *(float *)(result - 44);
    *(float *)(result - 104) = flt_8EA364 * v16 - flt_8E90B8 * v17;
  }
  return result;
}
