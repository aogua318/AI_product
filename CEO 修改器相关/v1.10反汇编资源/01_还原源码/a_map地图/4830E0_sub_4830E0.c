// 函数 0x4830e0  sub_4830E0  size=0x8D  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_4830E0@<eax>(int a1@<edi>)
{
  int v2; // esi
  int i; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // [esp+0h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 288) )
    return -1;
  v2 = 0;
  v6 = -1;
  if ( *(__int16 *)(a1 + 292) > 0 )
  {
    for ( i = 0; ; i += 288 )
    {
      v4 = i + *(_DWORD *)(a1 + 296);
      if ( !*(_BYTE *)(v4 + 6) )
      {
        sub_482F80(v4);
        if ( !dword_8EED70 )
          break;
      }
      if ( ++v2 >= *(__int16 *)(a1 + 292) )
        return -1;
    }
    v5 = *(_DWORD *)(a1 + 296);
    if ( *(_BYTE *)(288 * v2 + v5 + 7) )
    {
      *(_BYTE *)(288 * v2 + v5 + 7) = 0;
      return v2;
    }
  }
  return v6;
}
