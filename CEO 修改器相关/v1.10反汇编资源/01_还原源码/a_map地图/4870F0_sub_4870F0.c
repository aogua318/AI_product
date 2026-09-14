// 函数 0x4870f0  sub_4870F0  size=0x123  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4870F0(int a1)
{
  unsigned __int16 v1; // ax
  char v2; // bl
  __int16 *v3; // esi
  int v4; // edi
  int *v5; // eax
  int v7; // [esp+8h] [ebp-3Ch] BYREF
  int v8; // [esp+Ch] [ebp-38h] BYREF
  int v9; // [esp+10h] [ebp-34h] BYREF
  int v10; // [esp+14h] [ebp-30h]
  int v11; // [esp+18h] [ebp-2Ch]
  int v12; // [esp+1Ch] [ebp-28h]
  int v13; // [esp+20h] [ebp-24h] BYREF
  int v14; // [esp+24h] [ebp-20h] BYREF
  int v15; // [esp+28h] [ebp-1Ch] BYREF
  int v16; // [esp+2Ch] [ebp-18h] BYREF
  int v17; // [esp+30h] [ebp-14h] BYREF
  int v18; // [esp+34h] [ebp-10h] BYREF
  int v19; // [esp+38h] [ebp-Ch] BYREF
  int v20; // [esp+3Ch] [ebp-8h] BYREF

  sub_464B60(&v9);
  v1 = (*(int (__cdecl **)(int))(dword_8F2B04 + 156))(a1);
  v2 = v1;
  if ( v1 != 0xFFFF )
  {
    v3 = (__int16 *)(*(_DWORD *)(dword_8F2B00 + 180) + a1 * *(_DWORD *)(dword_8F2B00 + 160));
    v4 = *(_DWORD *)(dword_8F2B00 + 148) + 10 * *v3;
    sub_483850((_DWORD *)dword_8F2B00, v3[1], v3[2], &v8, &v7);
    v5 = sub_483C60(v8, v7, *(unsigned __int8 *)(v4 + 4), *(unsigned __int8 *)(v4 + 5), *((unsigned __int8 *)v3 + 8));
    sub_464CE0(&v9, v5);
    sub_487080(v10, v9, &v13, &v14);
    sub_487080(v12 + 1, v9, &v15, &v16);
    sub_487080(v12 + 1, v11 + 1, &v17, &v18);
    sub_487080(v10, v11 + 1, &v19, &v20);
    sub_468FD0((int *)(dword_8F2B04 + 52), &v13, 4, v2);
  }
  return 0;
}
