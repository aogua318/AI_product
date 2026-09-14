// 函数 0x485ae0  sub_485AE0  size=0xA2  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_485AE0(int this, int a2)
{
  __int16 *v3; // esi
  unsigned __int16 *v4; // ebx
  int v5; // ecx
  int i; // eax
  __int16 *v7; // eax
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = (__int16 *)(*(_DWORD *)(this + 180) + a2 * *(_DWORD *)(this + 160));
  sub_4840A0((_DWORD *)this, v3[1], v3[2], &v9, &a2);
  v4 = (unsigned __int16 *)(*(_DWORD *)(this + 148) + 10 * *v3);
  v5 = *((unsigned __int8 *)v4 + 6);
  for ( i = *((unsigned __int8 *)v3 + 8) + v5 * *(_DWORD *)(this + 20) / 4; i >= v5; i -= v5 )
    ;
  v7 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *v4 + v3[3] + i * *((unsigned __int8 *)v4 + 7));
  return sub_467100(v7, v9, a2 - *((unsigned __int8 *)v3 + 9));
}
