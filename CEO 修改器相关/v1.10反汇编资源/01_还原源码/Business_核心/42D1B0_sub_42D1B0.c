// 函数 0x42d1b0  sub_42D1B0  size=0x7E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42D1B0(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        __int16 a7,
        int a8,
        int a9,
        int a10)
{
  int result; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // edx

  result = sub_42BD50(a1, 2, a2, a3, a4, a5);
  v11 = result;
  if ( result != -1 )
  {
    v12 = dword_4D10A8 + result * dword_4D1094;
    *(_BYTE *)(v12 + 20) = a6;
    v13 = *(_DWORD *)(v12 + 20);
    *(_WORD *)(v12 + 24) = a7;
    *(_DWORD *)(v12 + 20) = (a8 << 8) | (unsigned __int8)v13;
    *(_WORD *)(v12 + 26) = -1;
    *(_DWORD *)(v12 + 28) = a9;
    *(_DWORD *)(v12 + 32) = a10;
    *(_DWORD *)(v12 + 36) = 0;
    sub_42C590(v12);
    return v11;
  }
  return result;
}
