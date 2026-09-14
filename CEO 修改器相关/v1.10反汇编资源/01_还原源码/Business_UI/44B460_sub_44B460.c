// 函数 0x44b460  sub_44B460  size=0x384  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD sub_44B460()
{
  DWORD result; // eax
  int i; // esi
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  _BYTE v20[4]; // [esp+4h] [ebp-10h] BYREF
  int v21; // [esp+8h] [ebp-Ch]
  int v22; // [esp+10h] [ebp-4h]

  sub_464B60(v20);
  result = GetTickCount();
  if ( (int)(result - dword_8BD8C8) > 300 )
  {
    dword_8BD8C8 = result;
    sub_40AE10((int)&unk_8BC610);
    sub_40ACC0();
    sub_464B70(347, 203, 473, 228);
    for ( i = 0; i < 6; ++i )
    {
      result = sub_464B90(dword_8EED88, dword_8EED8C);
      if ( result )
        break;
      v21 += 26;
      v22 += 26;
    }
    switch ( i )
    {
      case 0:
        v2 = *(__int16 *)(dword_8BD8C0 + 598);
        v3 = sub_47E590(dword_8BD8C0 + 576);
        sub_47C950(v3);
        if ( v2 == 1 )
          *(_WORD *)(dword_8BD8C0 + 598) = 7;
        else
          *(_WORD *)(dword_8BD8C0 + 598) = 1;
        v4 = sub_47E590(dword_8BD8C0 + 576);
        result = sub_47C950(v4);
        break;
      case 1:
        v5 = *(__int16 *)(dword_8BD8C0 + 886);
        v6 = sub_47E590(dword_8BD8C0 + 864);
        sub_47C950(v6);
        if ( v5 == 2 )
          *(_WORD *)(dword_8BD8C0 + 886) = 8;
        else
          *(_WORD *)(dword_8BD8C0 + 886) = 2;
        v7 = sub_47E590(dword_8BD8C0 + 864);
        result = sub_47C950(v7);
        break;
      case 2:
        v8 = *(__int16 *)(dword_8BD8C0 + 1174);
        v9 = sub_47E590(dword_8BD8C0 + 1152);
        sub_47C950(v9);
        if ( v8 == 3 )
          *(_WORD *)(dword_8BD8C0 + 1174) = 9;
        else
          *(_WORD *)(dword_8BD8C0 + 1174) = 3;
        v10 = sub_47E590(dword_8BD8C0 + 1152);
        result = sub_47C950(v10);
        break;
      case 3:
        v11 = *(__int16 *)(dword_8BD8C0 + 1456);
        v12 = sub_47E590(dword_8BD8C0 + 1440);
        sub_47C950(v12);
        if ( v11 == 10 )
        {
          *(_WORD *)(dword_8BD8C0 + 1456) = 16;
        }
        else if ( v11 == 16 )
        {
          *(_WORD *)(dword_8BD8C0 + 1456) = 10;
        }
        v13 = sub_47E590(dword_8BD8C0 + 1440);
        result = sub_47C950(v13);
        break;
      case 4:
        v14 = *(__int16 *)(dword_8BD8C0 + 1744);
        v15 = sub_47E590(dword_8BD8C0 + 1728);
        sub_47C950(v15);
        if ( v14 == 11 )
        {
          *(_WORD *)(dword_8BD8C0 + 1744) = 17;
        }
        else if ( v14 == 17 )
        {
          *(_WORD *)(dword_8BD8C0 + 1744) = 11;
        }
        v16 = sub_47E590(dword_8BD8C0 + 1728);
        result = sub_47C950(v16);
        break;
      case 5:
        v17 = *(__int16 *)(dword_8BD8C0 + 2032);
        v18 = sub_47E590(dword_8BD8C0 + 2016);
        sub_47C950(v18);
        if ( v17 == 12 )
        {
          *(_WORD *)(dword_8BD8C0 + 2032) = 18;
        }
        else if ( v17 == 18 )
        {
          *(_WORD *)(dword_8BD8C0 + 2032) = 12;
        }
        v19 = sub_47E590(dword_8BD8C0 + 2016);
        result = sub_47C950(v19);
        break;
      default:
        return result;
    }
  }
  return result;
}
