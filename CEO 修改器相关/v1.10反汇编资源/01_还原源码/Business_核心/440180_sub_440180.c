// 函数 0x440180  sub_440180  size=0x4C7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_440180()
{
  int v0; // eax
  int result; // eax
  int v2; // eax
  int i; // ebx
  _BYTE *v4; // edi
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // eax
  int v16; // [esp-24h] [ebp-154h]
  int v17; // [esp-20h] [ebp-150h]
  int v18; // [esp+4h] [ebp-12Ch]
  int v19; // [esp+8h] [ebp-128h]
  int v20; // [esp+Ch] [ebp-124h]
  int v21; // [esp+10h] [ebp-120h]
  int v22; // [esp+10h] [ebp-120h]
  int v23; // [esp+18h] [ebp-118h]
  int v24; // [esp+1Ch] [ebp-114h]
  unsigned int v25; // [esp+20h] [ebp-110h]
  int v26; // [esp+24h] [ebp-10Ch]
  int v27; // [esp+24h] [ebp-10Ch]
  char Buffer[256]; // [esp+2Ch] [ebp-104h] BYREF

  v0 = sub_464D00(628, 250, 786, 550);
  result = sub_464BC0(v0);
  if ( result )
  {
    dword_8A6224 = sub_43FA20();
    v2 = sub_47C740("fonts\\12ns");
    sub_47D310(v2, 12, 512);
    v19 = 0;
    for ( i = 265; i < 545; i += 20 )
    {
      result = v19 + dword_8A6224;
      if ( v19 + dword_8A6224 >= dword_8A6228 )
        break;
      v4 = (_BYTE *)(dword_4CC8D0 + dword_4CC8BC * dword_8A6078[result]);
      sub_467680(15);
      sub_466CA0(&dword_8EEDEC, 627, i - 16);
      sub_467680((unsigned __int8)v4[1256] + 16);
      sub_466CA0(&dword_8EEDEC, 628, i - 15);
      LOBYTE(v5) = *v4;
      v5 = (char)*v4 < 0 ? 0 : (char)v5;
      v21 = *(_DWORD *)dword_870814 + 72 * v5;
      sub_47B910(2, 0);
      v6 = sub_464D00(629, i - 12, 691, i);
      sub_47C220((int)&dword_8EEDEC, v6, v21, 0x7FFF, -1, 1, 0, 0, 255);
      sub_47B910(1, 0);
      v7 = v4[9];
      if ( v7 == 1 )
      {
        sub_467680(27);
        sub_466CA0(&dword_8EEDEC, 692, i - 15);
        v17 = 0x7FFF;
        v8 = sub_4646A0(0, 4);
      }
      else if ( v7 )
      {
        v17 = 24275;
        v8 = sub_4646A0(0, 5);
      }
      else
      {
        sub_467680(26);
        sub_466CA0(&dword_8EEDEC, 692, i - 15);
        v17 = 32518;
        v8 = sub_4646A0(0, 3);
      }
      v16 = v8;
      v9 = sub_464D00(693, i - 12, 718, i);
      sub_47C220((int)&dword_8EEDEC, v9, v16, v17, -1, 0, 0, 0, 255);
      v18 = v4[9] == 2 ? 24275 : 32518;
      if ( dword_8A5E24 )
      {
        if ( dword_8A5E24 == 1 )
        {
          v20 = 3;
        }
        else if ( dword_8A5E24 == 2 )
        {
          v20 = 1;
        }
      }
      else
      {
        v20 = 12;
      }
      v24 = 0;
      v23 = 0;
      v26 = 0;
      if ( v20 > 0 )
      {
        v10 = byte_4CE044;
        v25 = byte_4CE044 - 13;
        v22 = v20;
        do
        {
          v11 = v10;
          if ( v10 > 12 )
            v11 = v10 - 4 * (3 * (v25 / 0xC) + 3);
          if ( v11 < 0 )
            v11 += 12 * ((-1 - v11) / 0xCu) + 12;
          v24 += *(_DWORD *)&v4[4 * v11 + 312];
          v12 = v10;
          if ( v10 > 12 )
            v12 = v10 - 4 * (3 * (v25 / 0xC) + 3);
          if ( v12 < 0 )
            v12 += 12 * ((-1 - v12) / 0xCu) + 12;
          v23 += *(_DWORD *)&v4[4 * v12 + 160];
          v13 = v10;
          if ( v10 > 12 )
            v13 = v10 - 4 * (3 * (v25 / 0xC) + 3);
          if ( v13 < 0 )
            v13 += 12 * ((-1 - v13) / 0xCu) + 12;
          v27 = *(_DWORD *)&v4[4 * v13 + 260] + v26;
          v14 = v10;
          if ( v10 > 12 )
            v14 = v10 - 4 * (3 * (v25 / 0xC) + 3);
          if ( v14 < 0 )
            v14 += 12 * ((-1 - v14) / 0xCu) + 12;
          v26 = *(_DWORD *)&v4[4 * v14 + 208] + v27;
          --v25;
          --v10;
          --v22;
        }
        while ( v22 );
        if ( v24 > 999 )
          v24 = 999;
        if ( v23 > 999 )
          v23 = 999;
        if ( v26 > 999 )
          v26 = 999;
      }
      sprintf(Buffer, "%3d/%3d/%3d", v24, v23, v26);
      v15 = sub_464D00(719, i - 12, 786, i);
      result = sub_47C220((int)&dword_8EEDEC, v15, (int)Buffer, v18, -1, 0, 0, 0, 255);
      ++v19;
    }
  }
  return result;
}
