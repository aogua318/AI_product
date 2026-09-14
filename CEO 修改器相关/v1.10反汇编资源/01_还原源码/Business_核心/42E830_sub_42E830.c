// 函数 0x42e830  sub_42E830  size=0x67  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42E830(int a1)
{
  _BYTE *v1; // esi
  int v2; // eax
  bool v3; // cf
  int v4; // edi

  v1 = (_BYTE *)(dword_4C43DC + a1 * dword_4C43C8);
  if ( (char)v1[2] == dword_87032C )
  {
    v2 = sub_40F570((_DWORD *)(dword_4C43DC + a1 * dword_4C43C8), 1);
    v3 = v1[7] < 6u;
    dbl_870338 = (double)v2 + dbl_870338;
    if ( v3 )
    {
      v4 = (char)v1[7];
      dbl_870368[v4] = (double)sub_40CF30(v1) + dbl_870368[v4];
    }
  }
  return 0;
}
