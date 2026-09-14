// 函数 0x45c920  sub_45C920  size=0x33F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45C920()
{
  int result; // eax
  int v1; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // edi
  const char *v10; // ebx
  bool v11; // zf
  const char *v12; // eax
  int v13; // esi
  int v14; // edi
  int i; // esi
  int v16; // [esp+0h] [ebp-108h]
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF

  result = sub_423440(byte_8CDA60, dword_4CDEC0);
  if ( result )
  {
    v1 = sub_47C740("face\\taskplay.fce");
    sub_481C90(&unk_8CF048, v1, 1);
    sprintf(Buffer, "%s(%s)", byte_8CDA60, byte_8CDA88);
    sub_47FF50(Buffer);
    sub_47FF50(&unk_8CDAA0);
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &unk_8CDAB8;
    do
    {
      v2 += *(v6 - 1);
      v5 += *v6;
      v4 += v6[1];
      v3 += v6[2];
      v6 += 4;
    }
    while ( (int)v6 < (int)dword_8CDB58 );
    _itoa(v5 + v4 + v3 + v2, Buffer, 10);
    sub_47FF50(Buffer);
    dword_8CDA30 = sub_465E40(50 * dword_4D0C64, (int)"face_taskplay.cpp", 463);
    v7 = dword_4D0C64;
    v8 = 0;
    if ( dword_4D0C64 > 0 )
    {
      v9 = 0;
      v16 = 0;
      do
      {
        if ( dword_8CDB54[v8] > 0 && !sub_42A4C0(v8) )
        {
          sprintf(Buffer, "%s%d", "CEO_STAGE_", v8);
          sub_42A490((int)Buffer);
        }
        v10 = (const char *)(v16 + *(_DWORD *)dword_4D0C60 + 40);
        v11 = sub_42A4C0(v8) == 0;
        v12 = (const char *)&unk_4A45BC;
        if ( v11 )
          v12 = (const char *)&word_4A45B8;
        sprintf(
          (char *const)(v9 + dword_8CDA30),
          "%s   %12s    %3d/%3d      %7d",
          v12,
          v10,
          dword_8CDB54[v8],
          dword_8CDBF4[v8],
          dword_8CDAB4[v8]);
        v7 = dword_4D0C64;
        v16 += 648;
        ++v8;
        v9 += 50;
      }
      while ( v8 < dword_4D0C64 );
    }
    sub_481AC0(dword_8CDA30, 50, v7, 0);
    sub_47ECC0(dword_4D0C64 - 6);
    sub_4801E0(-1);
    sub_4801E0(-1);
    v13 = 0;
    dword_8CDA34 = sub_465E40(244, (int)"face_taskplay.cpp", 481);
    v14 = 0;
    do
    {
      dword_8CDA38[v13] = sub_41D670(v13, (char *)(v14 + dword_8CDA34));
      ++v13;
      v14 += 50;
    }
    while ( v13 < 10 );
    sub_481AC0(dword_8CDA34, 50, 10, 0);
    dword_4B3860 = -1;
    dword_4B3864 = -1;
    sub_45C620();
    for ( i = 0; i < dword_4D0C64; ++i )
    {
      if ( !dword_8CDB54[i] )
        break;
    }
    if ( i == dword_4D0C64 )
      i = 0;
    sub_4801E0(i);
    sub_45BC60(i);
    dword_4B3860 = i;
    dword_4B3864 = -1;
    sub_45C670();
    sub_47D1A0(&unk_8CF048, sub_45C6F0, 0, 0, 0, 0, 0, 0, 0, sub_45C8F0, 0, -1);
    return 1;
  }
  return result;
}
