// 函数 0x4165a0  sub_4165A0  size=0xE9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4165A0(int a1)
{
  __int16 *v1; // eax
  int result; // eax
  int v3; // edx
  int v4; // ecx

  v1 = (__int16 *)(*(_DWORD *)(dword_4CC8D8 + 180) + a1 * *(_DWORD *)(dword_4CC8D8 + 160));
  result = sub_486310(
             *v1,
             v1[1]
           + *(_DWORD *)(dword_4CC8E0 + 32) * (*(_DWORD *)(dword_4CC8D8 + 188) - *(_DWORD *)(dword_4CC8E0 + 188)),
             v1[2]
           + *(_DWORD *)(dword_4CC8E0 + 32) * (*(_DWORD *)(dword_4CC8D8 + 192) - *(_DWORD *)(dword_4CC8E0 + 192)),
             *((unsigned __int8 *)v1 + 8),
             *((_BYTE *)v1 + 9),
             (*((unsigned __int8 *)v1 + 10) >> 2) & 1,
             (*((unsigned __int8 *)v1 + 10) >> 3) & 1,
             (v1[5] & 2) != 0,
             v1[5] & 1);
  v3 = *(_DWORD *)(dword_4CC8D8 + 180) + a1 * *(_DWORD *)(dword_4CC8D8 + 160);
  v4 = *(_DWORD *)(dword_4CC8E0 + 180) + result * *(_DWORD *)(dword_4CC8E0 + 160);
  *(_WORD *)(v4 + 6) = *(_WORD *)(v3 + 6);
  *(_BYTE *)(v4 + 10) ^= (*(_BYTE *)(v4 + 10) ^ *(_BYTE *)(v3 + 10)) & 0x70;
  *(_BYTE *)(v4 + 11) = *(_BYTE *)(v3 + 11);
  *(_WORD *)(v4 + 12) = *(_WORD *)(v3 + 12);
  *(_WORD *)(v4 + 14) = *(_WORD *)(v3 + 14);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(v3 + 16);
  return result;
}
