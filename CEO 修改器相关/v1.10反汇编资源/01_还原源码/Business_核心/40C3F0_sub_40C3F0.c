// 函数 0x40c3f0  sub_40C3F0  size=0xDB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40C3F0(__int16 *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // eax
  int v10; // edx
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v3 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *this);
  v4 = *(this + 4) * v3[40];
  sub_483850(*(__int16 *)(v4 + v3[45] + 2), *(__int16 *)(v4 + v3[45] + 4), &v12, &v11);
  v5 = sub_4640D0() % 4;
  *a2 = v12 + dword_4B32D0[2 * v5];
  v6 = v11 + dword_4B32D4[2 * v5];
  *a3 = v6;
  v7 = *a2 + v6 * v3[6];
  result = v3[30];
  if ( *(_WORD *)(result + 2 * v7) == 0xFFFF )
  {
    do
    {
      v9 = sub_4640D0() % 4;
      *a2 = v12 + dword_4B32D0[2 * v9];
      v10 = v11 + dword_4B32D4[2 * v9];
      *a3 = v10;
      result = *a2 + v10 * v3[6];
    }
    while ( *(_WORD *)(v3[30] + 2 * result) == 0xFFFF );
  }
  return result;
}
