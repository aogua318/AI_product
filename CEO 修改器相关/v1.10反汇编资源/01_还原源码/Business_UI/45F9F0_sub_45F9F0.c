// 函数 0x45f9f0  sub_45F9F0  size=0xE8  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45F9F0(int a1)
{
  int v1; // edi
  int v2; // ebx
  int i; // esi
  int v4; // eax
  int v5; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0; i < 1152; i += 288 )
  {
    v4 = *(_DWORD *)(a1 + 296);
    if ( (*(_BYTE *)(i + v4 + 5769) & 4) != 0 && *(_BYTE *)(i + v4 + 5778) )
    {
      sub_47F250(0x7FFF);
      sub_45F820(v2, 0);
      v1 = 1;
    }
    else
    {
      sub_47F250(8288);
    }
    v5 = *(_DWORD *)(a1 + 296);
    if ( (*(_BYTE *)(i + v5 + 1737) & 4) != 0 && *(_BYTE *)(i + v5 + 1746) && *(_WORD *)(i + v5 + 2898) != 31 )
    {
      sub_47F250(0x7FFF);
      sub_45F820(v2 + 4, 0);
      v1 = 1;
    }
    else
    {
      sub_47F250(8288);
    }
    ++v2;
  }
  if ( !v1 )
    sub_45F820(-1, 0);
}
