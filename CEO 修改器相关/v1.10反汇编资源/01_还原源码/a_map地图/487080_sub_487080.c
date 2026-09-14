// 函数 0x487080  sub_487080  size=0x65  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_487080@<eax>(int a1@<edx>, int a2, _DWORD *a3, int *a4)
{
  int v4; // ecx
  int v5; // esi
  int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  sub_484060((_DWORD *)dword_8F2B00, a2, a1, &v8, &v7);
  v4 = dword_8F2B04;
  v5 = dword_8F2B00;
  *a3 = *(_DWORD *)(dword_8F2B04 + 128)
      + *(_DWORD *)(dword_8F2B04 + 124) * (v8 - *(_DWORD *)(dword_8F2B00 + 88)) / *(_DWORD *)(dword_8F2B04 + 132);
  result = *(_DWORD *)(v4 + 128) * (v7 - *(_DWORD *)(v5 + 92)) / *(_DWORD *)(v4 + 136);
  *a4 = result;
  return result;
}
