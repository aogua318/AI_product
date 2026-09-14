// 函数 0x4576d0  sub_4576D0  size=0x1B4  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4576D0()
{
  size_t v0; // eax
  int v1; // ecx
  char *v2; // edi
  char v3; // dl
  char v4; // dl
  char v5; // dl
  char v6; // dl
  int v7; // eax
  int v9; // [esp-4h] [ebp-34h]

  v0 = 0;
  dword_8C462C = 0;
  v1 = 2;
  v2 = &byte_4FF671;
  do
  {
    v3 = *(v2 - 189880);
    if ( (v3 & 1) != 0 && (v3 & 2) != 0 )
      dword_8C4630[v0++] = v1 - 2;
    if ( (*v2 & 1) != 0 && (*v2 & 2) != 0 )
      dword_8C4630[v0++] = v1 - 1;
    v4 = v2[189880];
    if ( (v4 & 1) != 0 && (v4 & 2) != 0 )
      dword_8C4630[v0++] = v1;
    v5 = v2[379760];
    if ( (v5 & 1) != 0 && (v5 & 2) != 0 )
      dword_8C4630[v0++] = v1 + 1;
    v6 = v2[569640];
    if ( (v6 & 1) != 0 && (v6 & 2) != 0 )
      dword_8C4630[v0++] = v1 + 2;
    v1 += 5;
    v2 += 949400;
  }
  while ( v1 - 2 < 20 );
  dword_8C462C = v0;
  v7 = sub_47C740("face\\score_info.fce");
  sub_481C90(&unk_8C5840, v7, 1);
  sub_47D1A0(&unk_8C5840, sub_456AA0, sub_457040, 0, 0, 0, 0, 0, 0, sub_456C90, 0, 0);
  dword_8C4628 = (void *)sub_465E40(56 * dword_8C462C, (int)"face_score_info.cpp", 461);
  sub_456E50();
  sub_47ECC0(dword_8C462C - 11);
  sub_481500(0);
  v9 = dword_4B3834;
  dword_4B3834 = -1;
  sub_4569F0(v9);
  sub_4810E0(1);
  sub_4565A0();
  return 1;
}
