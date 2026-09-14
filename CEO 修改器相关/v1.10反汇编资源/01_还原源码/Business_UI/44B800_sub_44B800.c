// 函数 0x44b800  sub_44B800  size=0x151  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_44B800()
{
  int i; // esi
  int v1; // esi
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v10[4]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+14h] [ebp-4h]

  sub_464B60(v10);
  sub_464B70(347, 203, 473, 228);
  for ( i = 0; i < 6; ++i )
  {
    if ( sub_464B90(dword_8EED88, dword_8EED8C) )
      break;
    v11 += 26;
    v12 += 26;
  }
  v1 = i - 3;
  *(_WORD *)(dword_8BD8C0 + 1466) = 13975;
  *(_WORD *)(dword_8BD8C0 + 1754) = 13975;
  *(_WORD *)(dword_8BD8C0 + 2042) = 13975;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        v3 = *(__int16 *)(dword_8BD8C0 + 2032);
        if ( v3 == 12 || v3 == 18 )
          *(_WORD *)(dword_8BD8C0 + 2042) = 27615;
      }
    }
    else
    {
      v4 = *(__int16 *)(dword_8BD8C0 + 1744);
      if ( v4 == 11 || v4 == 17 )
        *(_WORD *)(dword_8BD8C0 + 1754) = 27615;
    }
  }
  else
  {
    v5 = *(__int16 *)(dword_8BD8C0 + 1456);
    if ( v5 == 10 || v5 == 16 )
      *(_WORD *)(dword_8BD8C0 + 1466) = 27615;
  }
  v6 = sub_47E590(dword_8BD8C0 + 1440);
  sub_47C950(v6);
  v7 = sub_47E590(dword_8BD8C0 + 1728);
  sub_47C950(v7);
  v8 = sub_47E590(dword_8BD8C0 + 2016);
  return sub_47C950(v8);
}
