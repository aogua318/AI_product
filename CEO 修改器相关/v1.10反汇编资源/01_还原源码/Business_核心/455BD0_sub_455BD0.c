// 函数 0x455bd0  sub_455BD0  size=0x336  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_455BD0()
{
  int v0; // edx
  int v1; // ecx
  const char *v2; // edi
  char v3; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int16 *v8; // ecx
  int v9; // eax
  _BYTE *v10; // esi
  char *v11; // ecx
  _BYTE *v12; // edx
  char v13; // al
  int v15; // [esp+30h] [ebp-8h]
  char *v16; // [esp+34h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  dword_8BF5B0 = 0;
  dword_8BF6A8 = -1;
  dword_8BF5B4 = 0;
  v15 = 0;
  v2 = byte_4D10C8;
  v16 = (char *)dword_8BF754;
  do
  {
    v3 = *(v2 - 15);
    if ( (v3 & 1) != 0 && (v3 & 2) != 0 )
    {
      dword_8BF648[v0] = v1;
      if ( v1 == dword_8703A0 )
        dword_8BF5B0 = v0;
      strcpy(v16, v2);
      ++dword_8BF5B4;
      v16 += 40;
      v1 = v15;
      v0 = dword_8BF5B4;
    }
    ++v1;
    v2 += 189880;
    v15 = v1;
  }
  while ( (int)v2 < (int)byte_870328 );
  v4 = sub_47C740("face\\profit_info.fce");
  sub_481C90(&unk_8C0C28, v4, 1);
  sub_47D1A0(&unk_8C0C28, sub_4558E0, sub_454150, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  dword_8BF6AC = 0;
  v5 = sub_47C740("face\\list2.fce");
  sub_481C90(&unk_8C0AF8, v5, 1);
  sub_4801E0(-1);
  sub_481AC0(dword_8BF754, 40, dword_8BF5B4, 0);
  sub_481A70(dword_8BF5B4);
  sub_482120(142, 136);
  sub_482060(dword_8C0C20);
  sub_47D1A0(&unk_8C0AF8, sub_455B00, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  v6 = sub_47C740("face\\scroll_list1.fce");
  sub_481C90(&unk_8C09C8, v6, 1);
  dword_8BF6AC = 0;
  sub_4801E0(-1);
  sub_4801E0(-1);
  v7 = 0;
  v8 = (__int16 *)&unk_4FF6CA;
  do
  {
    if ( *(v8 - 94940) > v7 )
      v7 = *(v8 - 94940);
    if ( *v8 > v7 )
      v7 = *v8;
    if ( v8[94940] > v7 )
      v7 = v8[94940];
    if ( v8[189880] > v7 )
      v7 = v8[189880];
    if ( v8[284820] > v7 )
      v7 = v8[284820];
    v8 += 474700;
  }
  while ( (int)v8 < (int)word_89E92A );
  dword_8BF750 = v7 + 1;
  dword_8BF76C = (void *)sub_465E40(20 * (v7 + 1), (int)"face_profit_info.cpp", 552);
  v9 = sub_465E40(2 * dword_8BF750, (int)"face_profit_info.cpp", 553);
  v10 = dword_8BF76C;
  *(_DWORD *)dword_8BF768 = v9;
  memset(dword_8BF76C, 0, 20 * dword_8BF750);
  v11 = (char *)(dword_8C0D50 + 6940);
  v12 = v10;
  do
  {
    v13 = *v11;
    *v12++ = *v11++;
  }
  while ( v13 );
  sub_454030();
  sub_482120(318, 136);
  sub_482120(318, 136);
  sub_482120(393, 135);
  sub_482060(dword_8C0AF0);
  sub_482060(dword_8C0AF0 + 288);
  sub_482060(dword_8C0AF0 + 576);
  sub_47D1A0(&unk_8C09C8, sub_455B50, 0, 0, 0, 0, 0, 0, 0, sub_454240, 0, -1);
  sub_455730();
  sub_453A70();
  return 1;
}
