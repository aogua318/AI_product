// 函数 0x40cdd0  sub_40CDD0  size=0xDC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40CDD0(int this)
{
  int v3; // edi
  __int16 *v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  sub_464B60(v8);
  if ( *(_BYTE *)(this + 3) != 3 )
    return 0;
  v3 = dword_4CCA98 * *(__int16 *)(this + 16);
  v4 = (__int16 *)(dword_4D0F1C + dword_4D0F08 * *(_DWORD *)(this + 80));
  v5 = dword_4CCAAC + v3;
  v6 = dword_4D0EFC + 10 * *v4;
  sub_483850(v4[1], v4[2], &v9, &v10);
  v7 = sub_483C60(v9, v10, *(unsigned __int8 *)(v6 + 4), *(unsigned __int8 *)(v6 + 5), *((unsigned __int8 *)v4 + 8));
  sub_464CE0(v7);
  return sub_464D00(
           v8[0] * dword_4B1108 - *(_DWORD *)(v5 + 188),
           v8[1] * dword_4B1108 - *(_DWORD *)(v5 + 192),
           dword_4B1108 * (v8[2] + 1) - *(_DWORD *)(v5 + 188) - 1,
           dword_4B1108 * (v8[3] + 1) - *(_DWORD *)(v5 + 192) - 1);
}
