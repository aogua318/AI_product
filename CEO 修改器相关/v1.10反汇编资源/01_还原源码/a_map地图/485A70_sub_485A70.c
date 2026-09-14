// 函数 0x485a70  sub_485A70  size=0x66  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_485A70(_DWORD *this, int a2)
{
  __int16 *v3; // esi
  int v4; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v3 = (__int16 *)(*(this + 45) + a2 * *(this + 40));
  sub_483850(this, v3[1], v3[2], &v6, &a2);
  v4 = *(this + 37) + 10 * *v3;
  return sub_483C60(v6, a2, *(unsigned __int8 *)(v4 + 4), *(unsigned __int8 *)(v4 + 5), *((unsigned __int8 *)v3 + 8));
}
