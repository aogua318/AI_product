// 函数 0x4569f0  sub_4569F0  size=0xAB  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4569F0(int a1)
{
  int result; // eax
  int v2; // eax
  _BYTE *v3; // edx
  char v4; // cl
  int v5; // eax
  _BYTE v6[256]; // [esp+0h] [ebp-104h] BYREF

  result = a1;
  if ( dword_4B3834 != a1 )
  {
    dword_4B3834 = a1;
    v2 = 288 * a1 + dword_8C5968 + 41500;
    v3 = &v6[-v2];
    do
    {
      v4 = *(_BYTE *)v2;
      v3[v2] = *(_BYTE *)v2;
      ++v2;
    }
    while ( v4 );
    sub_47FF50(v6);
    qsort(dword_8C4628, dword_8C462C, 0x38u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4568D0);
    sub_4565A0();
    v5 = sub_464D00(228, 450, 669, 552);
    return sub_47C950(v5);
  }
  return result;
}
