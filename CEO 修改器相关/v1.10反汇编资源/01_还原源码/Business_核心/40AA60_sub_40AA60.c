// 函数 0x40aa60  sub_40AA60  size=0x103  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40AA60(int a1)
{
  int v1; // ebx
  int i; // edi
  int result; // eax
  _DWORD v4[6]; // [esp+Ch] [ebp-1Ch]

  ++dword_4C2D44;
  v1 = 0;
  v4[0] = 37;
  v4[1] = 27;
  v4[2] = 28;
  v4[3] = 29;
  v4[4] = 30;
  v4[5] = 31;
  for ( i = 0; i < 6; ++i )
  {
    result = *(_DWORD *)(a1 + 296) + 288 * v4[i];
    if ( (*(_BYTE *)(result + 9) & 4) != 0 )
    {
      v1 = 1;
      result = sub_45F540(
                 1,
                 *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
                 *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
                 result + 28);
    }
  }
  if ( (dword_4C2D34 & 0xF) == 1 && !v1 && (dword_4C2D44 & 4) != 0 )
    return sub_45F540(
             1,
             -(*(__int16 *)(*(_DWORD *)(a1 + 296) + 10666) + *(__int16 *)(a1 + 276)),
             -(*(__int16 *)(*(_DWORD *)(a1 + 296) + 10668) + *(__int16 *)(a1 + 278)),
             *(_DWORD *)(a1 + 296) + 10684);
  return result;
}
