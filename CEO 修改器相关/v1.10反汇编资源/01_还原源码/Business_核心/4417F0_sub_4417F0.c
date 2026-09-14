// 函数 0x4417f0  sub_4417F0  size=0xB3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_4417F0(int a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // [esp+0h] [ebp-4h]

  if ( dword_4B37E0 == -1 )
    return 0;
  if ( dword_8A5E24 )
  {
    if ( dword_8A5E24 == 1 )
    {
      v2 = 3;
    }
    else if ( dword_8A5E24 == 2 )
    {
      v2 = 1;
    }
    else
    {
      v2 = a1;
    }
  }
  else
  {
    v2 = 12;
  }
  v3 = 0;
  if ( v2 > 0 )
  {
    v4 = byte_4CE046 - v2;
    v6 = v2;
    do
    {
      v5 = v4;
      if ( v4 > 24 )
        v5 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v5 < 0 )
        v5 += 24 * ((-1 - v5) / 0x18u) + 24;
      v3 += *(_DWORD *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC + 4 * v5 + 412);
      --v4;
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
