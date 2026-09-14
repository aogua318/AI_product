// 函数 0x40cd60  sub_40CD60  size=0x6A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40CD60(_DWORD *this)
{
  __int16 *v1; // esi
  int v2; // edi
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v1 = (__int16 *)(dword_4D0F1C + dword_4D0F08 * *(this + 20));
  v2 = dword_4D0EFC + 10 * *v1;
  sub_483850(v1[1], v1[2], &v4, &v5);
  return sub_483C60(v4, v5, *(unsigned __int8 *)(v2 + 4), *(unsigned __int8 *)(v2 + 5), *((unsigned __int8 *)v1 + 8));
}
