// 函数 0x45fb20  sub_45FB20  size=0x1C9  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __cdecl sub_45FB20(int a1)
{
  int v1; // edx
  int i; // ecx
  int v3; // eax
  int v4; // esi
  char result; // al
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  _DWORD v10[3]; // [esp+4h] [ebp-110h]
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v1 = *(_DWORD *)(a1 + 296);
  v10[0] = 45;
  v10[1] = 36;
  v10[2] = 37;
  for ( i = 0; i < 3; ++i )
  {
    v3 = v1 + 288 * v10[i];
    if ( (*(_BYTE *)(v3 + 9) & 4) != 0 )
      return sub_45F540(
               1,
               *(__int16 *)(v3 + 10) + *(__int16 *)(a1 + 276),
               *(__int16 *)(v3 + 12) + *(__int16 *)(a1 + 278),
               (const char *)(v3 + 28));
  }
  v4 = *(__int16 *)(v1 + 10670);
  if ( sub_47E450(v1 + 10656) )
  {
    if ( (unsigned int)(v4 - 15) > 1 )
      v6 = 15;
    else
      v6 = v4 + 1;
    sub_47E650(v6);
  }
  else if ( v4 != -1 )
  {
    sub_47E650(-1);
  }
  v7 = dword_4CDEB0;
  v8 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
  if ( dword_4CDEB0 )
  {
    *(_DWORD *)(v8 + 460) += 10 * dword_4CDEB0;
    v9 = *(_DWORD *)(v8 + 460);
    if ( v9 <= 9999999 )
    {
      if ( v9 < 0 )
        v9 = 0;
    }
    else
    {
      v9 = 9999999;
    }
    *(_DWORD *)(v8 + 460) = v9;
    _itoa(v9, Buffer, 10);
    sub_47FF50(Buffer);
    sub_444AB0();
    v7 = dword_4CDEB0;
  }
  result = *(_BYTE *)(dword_8D62D8 + 11529);
  if ( (result & 4) != 0 && (result & 8) != 0 )
  {
    if ( v7 < 0 )
      v7 = 0;
    dword_4CDEB0 = v7 + 1;
  }
  else
  {
    result = *(_BYTE *)(dword_8D62D8 + 11241);
    if ( (result & 4) != 0 && (result & 8) != 0 )
    {
      if ( v7 > 0 )
        v7 = 0;
      dword_4CDEB0 = v7 - 1;
    }
    else
    {
      dword_4CDEB0 = 0;
    }
  }
  return result;
}
