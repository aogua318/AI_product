// 函数 0x4461e0  sub_4461E0  size=0x365  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4461E0()
{
  int result; // eax
  int v1; // esi
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  result = dword_4B1024;
  if ( dword_4B1024 != -1 )
  {
    v1 = dword_4C43DC + dword_4B1024 * dword_4C43C8;
    *(_WORD *)(dword_8AA518 + 302) = word_4B37F8[2 * (*(_DWORD *)(v1 + 16) >> 30)];
    *(_WORD *)(dword_8AA518 + 304) = word_4B37F8[2 * (*(_DWORD *)(v1 + 16) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 310) = word_4B37F8[2 * (*(_DWORD *)(v1 + 16) >> 30)];
    v2 = dword_8AA518 + 288;
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      sub_482390(v2);
    else
      sub_47E970(v2);
    *(_WORD *)(dword_8AA518 + 590) = word_4B37F8[2 * (*(_DWORD *)(v1 + 24) >> 30)];
    *(_WORD *)(dword_8AA518 + 592) = word_4B37F8[2 * (*(_DWORD *)(v1 + 24) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 598) = word_4B37F8[2 * (*(_DWORD *)(v1 + 24) >> 30)];
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      sub_482390(dword_8AA518 + 576);
    else
      sub_47E970(dword_8AA518 + 576);
    *(_WORD *)(dword_8AA518 + 878) = word_4B37F8[2 * (*(_DWORD *)(v1 + 32) >> 30)];
    *(_WORD *)(dword_8AA518 + 880) = word_4B37F8[2 * (*(_DWORD *)(v1 + 32) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 886) = word_4B37F8[2 * (*(_DWORD *)(v1 + 32) >> 30)];
    v3 = dword_8AA518 + 864;
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      sub_482390(v3);
    else
      sub_47E970(v3);
    *(_WORD *)(dword_8AA518 + 1166) = word_4B37F8[2 * (*(_DWORD *)(v1 + 40) >> 30)];
    *(_WORD *)(dword_8AA518 + 1168) = word_4B37F8[2 * (*(_DWORD *)(v1 + 40) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 1174) = word_4B37F8[2 * (*(_DWORD *)(v1 + 40) >> 30)];
    v4 = dword_8AA518 + 1152;
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      sub_482390(v4);
    else
      sub_47E970(v4);
    *(_WORD *)(dword_8AA518 + 1454) = word_4B37F8[2 * (*(_DWORD *)(v1 + 48) >> 30)];
    *(_WORD *)(dword_8AA518 + 1456) = word_4B37F8[2 * (*(_DWORD *)(v1 + 48) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 1462) = word_4B37F8[2 * (*(_DWORD *)(v1 + 48) >> 30)];
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      sub_482390(dword_8AA518 + 1440);
    else
      sub_47E970(dword_8AA518 + 1440);
    *(_WORD *)(dword_8AA518 + 1742) = word_4B37F8[2 * (*(_DWORD *)(v1 + 56) >> 30)];
    *(_WORD *)(dword_8AA518 + 1744) = word_4B37F8[2 * (*(_DWORD *)(v1 + 56) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 1750) = word_4B37F8[2 * (*(_DWORD *)(v1 + 56) >> 30)];
    v5 = dword_8AA518 + 1728;
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      sub_482390(v5);
    else
      sub_47E970(v5);
    *(_WORD *)(dword_8AA518 + 2030) = word_4B37F8[2 * (*(_DWORD *)(v1 + 64) >> 30)];
    *(_WORD *)(dword_8AA518 + 2032) = word_4B37F8[2 * (*(_DWORD *)(v1 + 64) >> 30)] + 1;
    *(_WORD *)(dword_8AA518 + 2038) = word_4B37F8[2 * (*(_DWORD *)(v1 + 64) >> 30)];
    v6 = dword_8AA518 + 2016;
    if ( *(char *)(v1 + 2) == dword_8703A0 )
      return sub_482390(v6);
    else
      return sub_47E970(v6);
  }
  return result;
}
