// 函数 0x448f20  sub_448F20  size=0x191  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_448F20()
{
  int v0; // ebx
  const char *v1; // edi
  char v2; // al
  int v3; // eax
  int v4; // eax
  char *v6; // [esp+30h] [ebp-4h]

  v0 = 0;
  dword_8B4294 = 0;
  v1 = byte_4D10C8;
  v6 = (char *)dword_8B42E8;
  do
  {
    v2 = *(v1 - 15);
    if ( (v2 & 1) != 0 && (v2 & 2) != 0 )
    {
      dword_8B4298[dword_8B4294] = v0;
      strcpy(v6, v1);
      ++dword_8B4294;
      v6 += 40;
    }
    v1 += 189880;
    ++v0;
  }
  while ( (int)v1 < (int)byte_870328 );
  v3 = sub_47C740("face\\balance_info.fce");
  sub_481C90(&unk_8B55E0, v3, 1);
  sub_47D1A0(&unk_8B55E0, sub_448AC0, sub_448D40, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  sub_448550();
  v4 = sub_47C740("face\\list2.fce");
  sub_481C90(&unk_8B54B0, v4, 1);
  sub_481AC0(dword_8B42E8, 40, dword_8B4294, 0);
  sub_481A70(dword_8B4294);
  sub_482120(142, 136);
  sub_482060(dword_8B55D8);
  sub_4801E0(dword_8B4290);
  sub_47FF50(dword_8B42E8 + 40 * dword_8B4290);
  sub_47D1A0(&unk_8B54B0, sub_448C10, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
