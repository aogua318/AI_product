// 函数 0x453670  sub_453670  size=0x32B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_453670()
{
  size_t v0; // eax
  int v1; // ecx
  char *v2; // esi
  char v3; // dl
  char v4; // dl
  char v5; // dl
  char v6; // dl
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v0 = 0;
  dword_8BDA60 = 0;
  v1 = 2;
  v2 = &byte_4FF671;
  do
  {
    v3 = *(v2 - 189880);
    if ( (v3 & 1) != 0 && (v3 & 2) != 0 )
      dword_8BDA68[v0++] = v1 - 2;
    if ( (*v2 & 1) != 0 && (*v2 & 2) != 0 )
      dword_8BDA68[v0++] = v1 - 1;
    v4 = v2[189880];
    if ( (v4 & 1) != 0 && (v4 & 2) != 0 )
      dword_8BDA68[v0++] = v1;
    v5 = v2[379760];
    if ( (v5 & 1) != 0 && (v5 & 2) != 0 )
      dword_8BDA68[v0++] = v1 + 1;
    v6 = v2[569640];
    if ( (v6 & 1) != 0 && (v6 & 2) != 0 )
      dword_8BDA68[v0++] = v1 + 2;
    v1 += 5;
    v2 += 949400;
  }
  while ( v1 - 2 < 20 );
  dword_8BDA60 = v0;
  v7 = sub_47C740("face\\prod_info.fce");
  sub_481C90(&unk_8BF460, v7, 1);
  v8 = sub_47C740("face\\face_list.fce");
  sub_481C90(&unk_8BF330, v8, 1);
  sub_482120(134, 136);
  sub_482060(dword_8BF458);
  v9 = sub_47C740("face\\face_list.fce");
  sub_481C90(&unk_8BF200, v9, 1);
  sub_482060(dword_8BF328);
  sub_47ECC0(dword_8BDA60 - 9);
  sub_481500(0);
  if ( (unsigned int)dword_8BE03C <= 1 )
    sub_4810E0(1);
  if ( (unsigned int)dword_4B3828 <= 2 )
    sub_4810E0(1);
  sub_4810E0(1);
  switch ( dword_8BE040 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      sub_4810E0(1);
      break;
    default:
      break;
  }
  sub_452950(1);
  sub_47D1A0(&unk_8BF460, sub_4532A0, sub_4524E0, 0, 0, 0, 0, 0, 0, sub_453270, 0, 0);
  sub_47D1A0(&unk_8BF330, sub_4520A0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  sub_47D1A0(&unk_8BF200, sub_453600, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
