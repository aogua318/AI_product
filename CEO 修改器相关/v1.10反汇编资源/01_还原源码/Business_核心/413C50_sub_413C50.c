// 函数 0x413c50  sub_413C50  size=0x15A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_413C50(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v3 = a1;
  if ( a1 < 0 )
    v3 = 0;
  v4 = *(_DWORD *)(dword_4C2D38 + 24);
  if ( v3 >= v4 )
    v3 = v4 - 1;
  v5 = a2;
  if ( a2 < 0 )
    v5 = 0;
  v6 = *(_DWORD *)(dword_4C2D38 + 28);
  if ( v5 >= v6 )
    v5 = v6 - 1;
  if ( dword_4B1104 == -1 )
  {
    v7 = a3;
    if ( a3 == -1 )
      v7 = 0;
    v8 = sub_486480(20, v3, v5, v7, 0, 0, 0, 0, 0);
    dword_4B1104 = v8;
  }
  else
  {
    if ( a3 == -1 )
      a3 = *(unsigned __int8 *)(dword_4B1104 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8);
    sub_483890(v3, v5, &a1, &a2);
    a1 += *(int *)(dword_4C2D38 + 32) >> 1;
    a2 += *(int *)(dword_4C2D38 + 32) >> 1;
    sub_4866A0(dword_4B1104, a1, a2, 0);
    sub_4867D0(dword_4B1104, a3);
    v8 = dword_4B1104;
  }
  dword_4B1010 = v8;
  if ( sub_485560(
         20,
         v3,
         v5,
         *(unsigned __int8 *)(v8 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8),
         1) )
  {
    sub_486260(dword_4B1104, 0, 0);
    dword_4CC894 = 1;
  }
  else
  {
    sub_486260(dword_4B1104, 3, 32140);
    dword_4CC894 = 0;
  }
  return dword_4B1104;
}
