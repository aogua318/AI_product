// 函数 0x4520a0  sub_4520A0  size=0x89  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4520A0(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  _BYTE v5[16]; // [esp+0h] [ebp-10h] BYREF

  result = sub_464B60(v5);
  if ( !a2 )
  {
    sub_435570(1, 0);
    dword_8BE030 = *(_DWORD *)(dword_8BF458 + 52);
    dword_8BE034 = 0;
    v3 = sub_452000();
    sub_482FE0(dword_8BF328);
    v4 = 18 * dword_8BE030 + 136;
    if ( v4 + 16 * v3 > 560 )
      v4 = 16 * (35 - v3);
    return sub_482120(223, v4);
  }
  return result;
}
