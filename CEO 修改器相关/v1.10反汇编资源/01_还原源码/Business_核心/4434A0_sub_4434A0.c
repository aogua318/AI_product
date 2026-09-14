// 函数 0x4434a0  sub_4434A0  size=0x477  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4434A0()
{
  int v0; // eax
  int result; // eax
  int v2; // eax
  int i; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // eax
  int v14; // [esp-20h] [ebp-14Ch]
  int v15; // [esp+4h] [ebp-128h]
  int v16; // [esp+8h] [ebp-124h]
  int v17; // [esp+Ch] [ebp-120h]
  int v18; // [esp+10h] [ebp-11Ch]
  int v19; // [esp+10h] [ebp-11Ch]
  int v20; // [esp+18h] [ebp-114h]
  unsigned int v21; // [esp+1Ch] [ebp-110h]
  int v22; // [esp+24h] [ebp-108h]
  int v23; // [esp+24h] [ebp-108h]
  char Buffer[256]; // [esp+28h] [ebp-104h] BYREF

  v0 = sub_464D00(628, 250, 786, 550);
  result = sub_464BC0(v0);
  if ( result )
  {
    dword_8A743C = sub_43FA20();
    v2 = sub_47C740("fonts\\12ns");
    sub_47D310(v2, 12, 512);
    v16 = 0;
    for ( i = 265; i < 565; i += 20 )
    {
      result = v16 + dword_8A743C;
      if ( v16 + dword_8A743C >= dword_8A7440 )
        break;
      v4 = dword_4CC8D0 + dword_4CC8BC * dword_8A7290[result];
      sub_467680(14);
      sub_466CA0(&dword_8EEDEC, 627, i - 16);
      sub_467680(*(unsigned __int8 *)(v4 + 1256) + 16);
      sub_466CA0(&dword_8EEDEC, 628, i - 15);
      LOBYTE(v5) = *(_BYTE *)v4;
      v5 = *(char *)v4 < 0 ? 0 : (char)v5;
      v18 = *(_DWORD *)dword_870814 + 72 * v5;
      sub_47B910(2, 0);
      v6 = sub_464D00(629, i - 12, 691, i);
      sub_47C220((int)&dword_8EEDEC, v6, v18, 0x7FFF, -1, 1, 0, 0, 255);
      sprintf(Buffer, "%d", *(_DWORD *)(v4 + 12) / 4);
      v7 = *(_BYTE *)(v4 + 10);
      if ( v7 == 1 )
      {
        sub_467680(25);
        sub_466CA0(&dword_8EEDEC, 692, i - 15);
        v14 = 0x7FFF;
      }
      else if ( v7 )
      {
        v14 = 24275;
      }
      else
      {
        sub_467680(24);
        sub_466CA0(&dword_8EEDEC, 692, i - 15);
        v14 = 32518;
      }
      v8 = sub_464D00(693, i - 12, 740, i);
      sub_47C220((int)&dword_8EEDEC, v8, (int)Buffer, v14, -1, 0, 0, 0, 255);
      v15 = *(_BYTE *)(v4 + 10) == 2 ? 24275 : 32518;
      if ( dword_8A5E24 )
      {
        if ( dword_8A5E24 == 1 )
        {
          v17 = 3;
        }
        else if ( dword_8A5E24 == 2 )
        {
          v17 = 1;
        }
      }
      else
      {
        v17 = 12;
      }
      v22 = 0;
      v20 = 0;
      if ( v17 > 0 )
      {
        v9 = byte_4CE044;
        v21 = byte_4CE044 - 13;
        v19 = v17;
        do
        {
          v10 = v9;
          if ( v9 > 12 )
            v10 = v9 - 4 * (3 * (v21 / 0xC) + 3);
          if ( v10 < 0 )
            v10 += 12 * ((-1 - v10) / 0xCu) + 12;
          v23 = *(_DWORD *)(v4 + 4 * v10 + 312) + v22;
          v11 = v9;
          if ( v9 > 12 )
            v11 = v9 - 4 * (3 * (v21 / 0xC) + 3);
          if ( v11 < 0 )
            v11 += 12 * ((-1 - v11) / 0xCu) + 12;
          v22 = *(_DWORD *)(v4 + 4 * v11 + 160) + v23;
          v12 = v9;
          if ( v9 > 12 )
            v12 = v9 - 4 * (3 * (v21 / 0xC) + 3);
          if ( v12 < 0 )
            v12 += 12 * ((-1 - v12) / 0xCu) + 12;
          v20 += *(_DWORD *)(v4 + 4 * v12 + 208);
          --v21;
          --v9;
          --v19;
        }
        while ( v19 );
        if ( v22 > 999 )
          v22 = 999;
        if ( v20 > 999 )
          v20 = 999;
      }
      sprintf(Buffer, "%3d/%3d", v20, v22);
      v13 = sub_464D00(742, i - 12, 786, i);
      result = sub_47C220((int)&dword_8EEDEC, v13, (int)Buffer, v15, -1, 0, 0, 0, 255);
      ++v16;
    }
  }
  return result;
}
