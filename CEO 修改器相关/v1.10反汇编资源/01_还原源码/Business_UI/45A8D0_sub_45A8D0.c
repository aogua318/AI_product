// 函数 0x45a8d0  sub_45A8D0  size=0xF8  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_45A8D0()
{
  char result; // al
  int v1; // esi
  int i; // ebx
  int v3; // edi
  int v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  result = dword_4B1028;
  if ( dword_4B1028 != -1 )
  {
    v1 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    for ( i = *(__int16 *)(v1 + 752); i != -1; i = *(__int16 *)(v3 + 6) )
    {
      v3 = dword_4D0C84 + i * dword_4D0C70;
      result = sub_426BF0((__int16 *)v3, (int)&v4, (int)&v5);
      if ( *(_BYTE *)(v3 + 20) > *(_BYTE *)(v3 + 22) )
      {
        do
        {
          ++*(_WORD *)(v1 + 464);
          *(_DWORD *)(v1 + 452) += sub_41B810((_DWORD *)v1);
          sub_4185E0(dword_4B1028, i, v4, v5);
          result = *(_BYTE *)(v3 + 20);
        }
        while ( result > *(char *)(v3 + 22) );
      }
      for ( ; *(_BYTE *)(v3 + 21) > *(_BYTE *)(v3 + 23); result = sub_418730(dword_4B1028, i, v4, v5) )
      {
        ++*(_WORD *)(v1 + 466);
        *(_DWORD *)(v1 + 456) += sub_41B910((_DWORD *)v1);
      }
    }
  }
  return result;
}
