// 函数 0x434280  sub_434280  size=0x17A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_434280(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax

  v4 = a2;
  if ( a2 < 0 )
    v4 = 0;
  v5 = *(_DWORD *)(dword_4C2D38 + 24);
  if ( v4 >= v5 )
    v4 = v5 - 1;
  v6 = a3;
  if ( a3 < 0 )
    v6 = 0;
  v7 = *(_DWORD *)(dword_4C2D38 + 28);
  if ( v6 >= v7 )
    v6 = v7 - 1;
  if ( dword_4B32C0 == -1 )
  {
    v8 = a4;
    if ( a4 == -1 )
      v8 = 0;
    dword_4B32C0 = sub_486480(dword_4B1158[a1], v4, v6, v8, 0, 0, 0, 0, 0);
    sub_4868E0(dword_4B32C0, 1);
  }
  else
  {
    if ( a4 == -1 )
      a4 = *(unsigned __int8 *)(dword_4B32C0 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8);
    sub_483890(v4, v6, &a2, &a3);
    a2 += *(int *)(dword_4C2D38 + 32) >> 1;
    a3 += *(int *)(dword_4C2D38 + 32) >> 1;
    sub_4866A0(dword_4B32C0, a2, a3, 0);
    sub_4867D0(dword_4B32C0, a4);
  }
  dword_4B1010 = dword_4B32C0;
  if ( sub_485560(
         dword_4B1158[a1],
         v4,
         v6,
         *(unsigned __int8 *)(dword_4B32C0 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8),
         1) )
  {
    sub_486260(dword_4B32C0, 0, 0);
    dword_87084C = 1;
  }
  else
  {
    sub_486260(dword_4B32C0, 3, 32140);
    dword_87084C = 0;
  }
  return dword_4B32C0;
}
