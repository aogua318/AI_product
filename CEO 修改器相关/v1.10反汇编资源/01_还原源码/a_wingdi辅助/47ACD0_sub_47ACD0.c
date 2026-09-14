// 函数 0x47acd0  sub_47ACD0  size=0x73  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47ACD0(int a1, int a2, _DWORD *a3)
{
  _WORD *v3; // edi
  int result; // eax
  _WORD *v5; // esi
  int v6; // ecx
  int v7; // [esp+Ch] [ebp-88h] BYREF
  _BYTE v8[128]; // [esp+10h] [ebp-84h] BYREF

  v3 = v8;
  v7 = 0;
  result = sub_47A8E0(a1, 0, (int)v8, &v7);
  v5 = (_WORD *)(*a3 + a2);
  v6 = 32;
  do
  {
    *v5++ = *v3;
    v3 += 2;
    --v6;
  }
  while ( v6 );
  *a3 += 64;
  return result;
}
