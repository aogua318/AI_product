// 函数 0x4712f0  sub_4712F0  size=0x73  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_4712F0(int a1, int a2)
{
  _WORD *v2; // eax
  int v3; // ecx
  _WORD *v4; // eax
  int v5; // ecx
  _WORD *v6; // eax
  int v7; // ecx

  v2 = (_WORD *)(a2 + 140);
  v3 = 286;
  do
  {
    *v2 = 0;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = (_WORD *)(a2 + 2432);
  v5 = 30;
  do
  {
    *v4 = 0;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = (_WORD *)(a2 + 2676);
  v7 = 19;
  do
  {
    *v6 = 0;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  *(_WORD *)(a2 + 1164) = 1;
  *(_DWORD *)(a2 + 5796) = 0;
  *(_DWORD *)(a2 + 5792) = 0;
  *(_DWORD *)(a2 + 5800) = 0;
  *(_DWORD *)(a2 + 5784) = 0;
  return 0;
}
