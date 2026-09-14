// 函数 0x458d10  sub_458D10  size=0x3F9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_458D10()
{
  char *v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v0 = (char *)sub_47C740("data\\AIinfo.csv");
  sub_464420(v0);
  v1 = sub_47C740("face\\freeplay.fce");
  sub_481C90(&unk_8C7588, v1, 1);
  sub_47D1A0(&unk_8C7588, sub_4587B0, sub_458CF0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  v2 = sub_47C740("face\\colorlist.fce");
  sub_481E60(v2, &unk_8C7588);
  v3 = sub_4250C0();
  *(_DWORD *)dword_8C5974 = sub_465E40(20 * v3, (int)"face_freeplay.cpp", 530);
  sub_425160(*(int *)dword_8C5974, 20);
  sub_47FF50(*(_DWORD *)dword_8C5974);
  v4 = sub_47C740("face\\face_list.fce");
  sub_481C90(&unk_8C5F30, v4, 1);
  sub_482120(670, 55);
  sub_481AC0(*(_DWORD *)dword_8C5974, 20, v3, 0);
  sub_481A70(v3);
  dword_8C5A38 = 0;
  sub_457F10(0);
  sub_457C20();
  dword_8C5A3C = 10;
  sub_47FF50(*(_DWORD *)dword_8C5970 + 360);
  v5 = sub_47C740("face\\face_list.fce");
  sub_481E60(v5, &unk_8C5F30);
  sub_482120(670, 80);
  sub_481AC0(*(_DWORD *)dword_8C5970, 36, dword_8C5A40, 0);
  sub_481A70(dword_8C5A40);
  sub_457D60();
  dword_8C5A3C = 0;
  sub_457BC0();
  sub_47FF50(*(_DWORD *)dword_8C59AC);
  v6 = sub_47C740("face\\list2.fce");
  sub_481C90(&unk_8C7458, v6, 1);
  sub_482120(230, 146);
  sub_481AC0(*(_DWORD *)dword_8C59AC, 20, 7, 0);
  sub_481A70(7);
  dword_8C5A44 = 0;
  sub_4579A0();
  sub_47FF50(*(_DWORD *)dword_8C5A30);
  v7 = sub_47C740("face\\face_list.fce");
  sub_481C90(&unk_8C5B88, v7, 1);
  sub_482120(233, 169);
  sub_481AC0(*(_DWORD *)dword_8C5A30, 20, dword_8C5A4C, 0);
  sub_481A70(dword_8C5A4C);
  dword_8C5A48 = 0;
  v8 = sub_47C740("face\\face_list.fce");
  sub_481E60(v8, &unk_8C5F30);
  sub_482120(184, 261);
  sub_481AC0(*(_DWORD *)dword_4D0C94 + 68 * (dword_8C5A50 + 3), 68, dword_4D0C98 - 3, 0);
  sub_481A70(dword_4D0C98 - 3);
  sub_47FF50(*(_DWORD *)dword_4D0C94 + 68 * (dword_8C5A50 + 3));
  sub_457940();
  v9 = sub_47C740("face\\face_list.fce");
  sub_481E60(v9, &unk_8C5F30);
  sub_482120(164, 284);
  sub_481AC0(*(_DWORD *)dword_8C5A34, 20, 6, 0);
  sub_481A70(6);
  sub_47FF50(*(_DWORD *)dword_8C5A34 + 20 * dword_8C5A54);
  v10 = sub_47C740("face\\ceo_info.fce");
  sub_481C90(&unk_8C5A58, v10, 1);
  dword_4B3838 = -1;
  sub_458730(1950);
  sub_457DD0(4);
  return 1;
}
