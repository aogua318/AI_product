// 函数 0x440890  sub_440890  size=0x779  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_440890()
{
  int v0; // esi
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v18; // [esp+0h] [ebp-13Ch]
  int v19; // [esp+4h] [ebp-138h]
  int v20; // [esp+8h] [ebp-134h]
  int v21; // [esp+Ch] [ebp-130h]
  int v22; // [esp+10h] [ebp-12Ch]
  int v23; // [esp+14h] [ebp-128h]
  int v24; // [esp+18h] [ebp-124h]
  int Value; // [esp+1Ch] [ebp-120h]
  int v26; // [esp+20h] [ebp-11Ch]
  int v27; // [esp+24h] [ebp-118h]
  int v28; // [esp+28h] [ebp-114h]
  int v29; // [esp+2Ch] [ebp-110h]
  int v30; // [esp+30h] [ebp-10Ch]
  int v31; // [esp+34h] [ebp-108h]
  char Buffer[256]; // [esp+38h] [ebp-104h] BYREF

  v31 = dword_4CC8D0 + dword_4B37D8 * dword_4CC8BC;
  if ( dword_8A5E24 )
  {
    if ( dword_8A5E24 == 1 )
    {
      v30 = 3;
    }
    else if ( dword_8A5E24 == 2 )
    {
      v30 = 1;
    }
  }
  else
  {
    v30 = 12;
  }
  v0 = 0;
  v1 = 0;
  v2 = 0;
  Value = 0;
  v26 = 0;
  v24 = 0;
  v28 = 0;
  v20 = 0;
  v27 = 0;
  v21 = 0;
  v22 = 0;
  v29 = 0;
  v23 = 0;
  v19 = 0;
  if ( v30 > 0 )
  {
    v3 = byte_4CE046;
    v4 = byte_4CE046 - v30;
    v18 = v30;
    do
    {
      v5 = v4;
      if ( v4 > 24 )
        v5 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v5 < 0 )
        v5 += 24 * ((-1 - v5) / 0x18u) + 24;
      Value += *(_DWORD *)(v31 + 4 * v5 + 812);
      v6 = v3;
      if ( v3 > 24 )
        v6 = v3 - 8 * (3 * ((v30 + v4 - 25) / 0x18u) + 3);
      if ( v6 < 0 )
        v6 += 24 * ((-1 - v6) / 0x18u) + 24;
      v26 += *(_DWORD *)(v31 + 4 * v6 + 812);
      v7 = v4;
      if ( v4 > 24 )
        v7 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v7 < 0 )
        v7 += 24 * ((-1 - v7) / 0x18u) + 24;
      v24 += *(_DWORD *)(v31 + 4 * v7 + 912);
      v8 = v3;
      if ( v3 > 24 )
        v8 = v3 - 8 * (3 * ((v30 + v4 - 25) / 0x18u) + 3);
      if ( v8 < 0 )
        v8 += 24 * ((-1 - v8) / 0x18u) + 24;
      v28 += *(_DWORD *)(v31 + 4 * v8 + 912);
      v9 = v4;
      if ( v4 > 24 )
        v9 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v9 < 0 )
        v9 += 24 * ((-1 - v9) / 0x18u) + 24;
      v20 += *(_DWORD *)(v31 + 4 * v9 + 1012);
      v10 = v3;
      if ( v3 > 24 )
        v10 = v3 - 8 * (3 * ((v30 + v4 - 25) / 0x18u) + 3);
      if ( v10 < 0 )
        v10 += 24 * ((-1 - v10) / 0x18u) + 24;
      v2 += *(_DWORD *)(v31 + 4 * v10 + 1012);
      v11 = v4;
      if ( v4 > 24 )
        v11 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v11 < 0 )
        v11 += 24 * ((-1 - v11) / 0x18u) + 24;
      v27 += *(_DWORD *)(v31 + 4 * v11 + 512);
      v12 = v3;
      if ( v3 > 24 )
        v12 = v3 - 8 * (3 * ((v30 + v4 - 25) / 0x18u) + 3);
      if ( v12 < 0 )
        v12 += 24 * ((-1 - v12) / 0x18u) + 24;
      v21 += *(_DWORD *)(v31 + 4 * v12 + 512);
      v13 = v4;
      if ( v4 > 24 )
        v13 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v13 < 0 )
        v13 += 24 * ((-1 - v13) / 0x18u) + 24;
      v22 += *(_DWORD *)(v31 + 4 * v13 + 612);
      v14 = v3;
      if ( v3 > 24 )
        v14 = v3 - 8 * (3 * ((v30 + v4 - 25) / 0x18u) + 3);
      if ( v14 < 0 )
        v14 += 24 * ((-1 - v14) / 0x18u) + 24;
      v29 += *(_DWORD *)(v31 + 4 * v14 + 612);
      v15 = v4;
      if ( v4 > 24 )
        v15 = v4 - 8 * (3 * ((v4 - 25) / 0x18u) + 3);
      if ( v15 < 0 )
        v15 += 24 * ((-1 - v15) / 0x18u) + 24;
      v23 += *(_DWORD *)(v31 + 4 * v15 + 712);
      v16 = v3;
      if ( v3 > 24 )
        v16 = v3 - 8 * (3 * ((v30 + v4 - 25) / 0x18u) + 3);
      if ( v16 < 0 )
        v16 += 24 * ((-1 - v16) / 0x18u) + 24;
      v19 += *(_DWORD *)(v31 + 4 * v16 + 712);
      --v3;
      --v4;
      --v18;
    }
    while ( v18 );
    v0 = v20;
    v1 = v19;
  }
  _itoa(Value, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v24, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v0, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v26, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v28, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v2, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v27, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v22, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v23, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v21, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v29, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v1, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(Value + v24 + v0 - v23 - v22 - v27, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v26 + v28 + v2 - v1 - v29 - v21, Buffer, 10);
  return sub_47FF50(Buffer);
}
