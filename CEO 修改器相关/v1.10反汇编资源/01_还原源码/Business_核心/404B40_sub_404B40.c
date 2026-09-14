// 函数 0x404b40  sub_404B40  size=0xBF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_404B40(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  __int16 *v5; // ebx
  __int64 v6; // rax
  __int16 *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-18h]
  _DWORD v12[4]; // [esp+10h] [ebp-14h]

  v3 = 0;
  v4 = 0;
  v11 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * a1 + 16) + 20;
  v5 = (__int16 *)v11;
  do
  {
    if ( *v5 != -1 )
    {
      v12[v4] = sub_404A60(*v5, a2, a3);
      ++v3;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 4 );
  v6 = 0;
  if ( v3 > 0 )
  {
    v7 = (__int16 *)v11;
    do
    {
      v8 = 100 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * *v7 + 68);
      if ( v8 < 100 )
        v8 = 100;
      v9 = v8 - v12[HIDWORD(v6)++];
      LODWORD(v6) = v9 + v6;
      ++v7;
    }
    while ( SHIDWORD(v6) < v3 );
  }
  return v6;
}
