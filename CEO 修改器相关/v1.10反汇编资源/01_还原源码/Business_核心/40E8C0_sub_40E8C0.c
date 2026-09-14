// 函数 0x40e8c0  sub_40E8C0  size=0x98  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40E8C0(int a1)
{
  __int16 *v1; // esi
  int v2; // edi
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // [esp+8h] [ebp-4h] BYREF

  v1 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  v2 = *(_DWORD *)dword_4C4434 + 72 * *v1;
  sub_40D7C0(v1, (int)&a1, (int)&v6);
  a1 >>= 5;
  v6 >>= 5;
  v3 = *((_DWORD *)v1 + 4);
  result = *(_DWORD *)(v2 + 4) - (v3 & 0x3FFFFFF);
  if ( result > 0 && v1[2] == 8 )
  {
    if ( result > 3 * *(_DWORD *)(*(_DWORD *)dword_870814 + 600) )
      result = 3 * *(_DWORD *)(*(_DWORD *)dword_870814 + 600);
    *((_DWORD *)v1 + 2) -= result;
    v5 = *((_DWORD *)v1 + 2);
    result = v3 ^ (v3 ^ (v3 + result)) & 0x3FFFFFF;
    *((_DWORD *)v1 + 4) = result;
    if ( v5 < 0 )
    {
      *((_DWORD *)v1 + 2) = 0;
      v1[2] = -1;
    }
  }
  return result;
}
