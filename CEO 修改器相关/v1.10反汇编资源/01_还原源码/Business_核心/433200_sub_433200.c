// 函数 0x433200  sub_433200  size=0xA0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433200(int a1)
{
  int v1; // esi
  int result; // eax
  int v3; // ecx
  __int16 v4; // cx

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  result = sub_4656D0(&unk_870828);
  if ( result == -1 )
    return -1;
  v3 = dword_870840 + result * dword_87082C;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_WORD *)(v3 + 4) = a1;
  *(_WORD *)(v3 + 6) = result;
  *(_DWORD *)(v3 + 24) = -1;
  *(_WORD *)(v3 + 10) = *(_WORD *)(v1 + 480);
  *(_WORD *)(v3 + 8) = -1;
  *(_WORD *)(v1 + 480) = result;
  v4 = *(_WORD *)(v3 + 10);
  if ( v4 != -1 )
    *(_WORD *)(dword_87082C * v4 + dword_870840 + 8) = result;
  ++*(_WORD *)(v1 + 482);
  return result;
}
