// 函数 0x434650  sub_434650  size=0xDF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_434650(__int16 *this)
{
  int v2; // esi
  int v4; // [esp+4h] [ebp-78h] BYREF
  int v5; // [esp+8h] [ebp-74h] BYREF
  int v6; // [esp+Ch] [ebp-70h] BYREF
  int v7; // [esp+10h] [ebp-6Ch] BYREF
  CHAR Text[100]; // [esp+14h] [ebp-68h] BYREF

  sub_434580(this, (int)&v4, (int)&v5);
  sub_4198B0((_DWORD *)(dword_4CCAAC + dword_4CCA98 * *this), v4, v5, &v6, &v7);
  v2 = *(_DWORD *)(dword_4D0EF4 + 4 * (v6 + v7 * dword_4D0E80));
  if ( sub_483C00(v2) )
  {
    sprintf(Text, "%s\nline%d", "shop.cpp", 734);
    MessageBoxA(hWnd, Text, &byte_4A3564, 0);
    exit(1);
  }
  return *(__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *(__int16 *)(sub_483C30(v2) * dword_4C43C8 + dword_4C43DC) + 66);
}
