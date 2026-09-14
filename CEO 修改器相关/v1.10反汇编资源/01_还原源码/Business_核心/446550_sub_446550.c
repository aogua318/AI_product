// 函数 0x446550  sub_446550  size=0x307  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_446550(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax

  result = dword_4B1024;
  if ( dword_4B1024 != -1 )
  {
    result = a2;
    v3 = (_DWORD *)(dword_4C43DC + dword_4B1024 * dword_4C43C8);
    switch ( a2 )
    {
      case 0:
        result = sub_447CE0();
        if ( result )
        {
          sub_435570(5, 0);
          sub_40F100(dword_4B1024);
          result = sub_40DD00(dword_4B1024);
        }
        break;
      case 1:
        sub_435570(1, 0);
        v4 = v3[4] & 0x3FFFFFFF ^ ((v3[4] & 0xC0000000) + 0x40000000);
        v3[4] = v4;
        if ( (v4 & 0xC0000000) > 0x80000000 )
          v3[4] = v4 & 0x3FFFFFFF;
        sub_4461E0();
        v5 = sub_47E590(dword_8AA518 + 288);
        result = sub_47C950(v5);
        break;
      case 2:
        sub_435570(1, 0);
        v6 = v3[6] & 0x3FFFFFFF ^ ((v3[6] & 0xC0000000) + 0x40000000);
        v3[6] = v6;
        if ( (v6 & 0xC0000000) > 0x80000000 )
          v3[6] = v6 & 0x3FFFFFFF;
        sub_4461E0();
        v7 = sub_47E590(dword_8AA518 + 576);
        result = sub_47C950(v7);
        break;
      case 3:
        sub_435570(1, 0);
        v8 = v3[8] & 0x3FFFFFFF ^ ((v3[8] & 0xC0000000) + 0x40000000);
        v3[8] = v8;
        if ( (v8 & 0xC0000000) > 0x80000000 )
          v3[8] = v8 & 0x3FFFFFFF;
        sub_4461E0();
        v9 = sub_47E590(dword_8AA518 + 864);
        result = sub_47C950(v9);
        break;
      case 4:
        sub_435570(1, 0);
        v10 = v3[10] & 0x3FFFFFFF ^ ((v3[10] & 0xC0000000) + 0x40000000);
        v3[10] = v10;
        if ( (v10 & 0xC0000000) > 0x80000000 )
          v3[10] = v10 & 0x3FFFFFFF;
        sub_4461E0();
        v11 = sub_47E590(dword_8AA518 + 1152);
        result = sub_47C950(v11);
        break;
      case 5:
        sub_435570(1, 0);
        v12 = v3[12] & 0x3FFFFFFF ^ ((v3[12] & 0xC0000000) + 0x40000000);
        v3[12] = v12;
        if ( (v12 & 0xC0000000) > 0x80000000 )
          v3[12] = v12 & 0x3FFFFFFF;
        sub_4461E0();
        v13 = sub_47E590(dword_8AA518 + 1440);
        result = sub_47C950(v13);
        break;
      case 6:
        sub_435570(1, 0);
        v14 = v3[14] & 0x3FFFFFFF ^ ((v3[14] & 0xC0000000) + 0x40000000);
        v3[14] = v14;
        if ( (v14 & 0xC0000000) > 0x80000000 )
          v3[14] = v14 & 0x3FFFFFFF;
        sub_4461E0();
        v15 = sub_47E590(dword_8AA518 + 1728);
        result = sub_47C950(v15);
        break;
      case 7:
        sub_435570(1, 0);
        v16 = v3[16] & 0x3FFFFFFF ^ ((v3[16] & 0xC0000000) + 0x40000000);
        v3[16] = v16;
        if ( (v16 & 0xC0000000) > 0x80000000 )
          v3[16] = v16 & 0x3FFFFFFF;
        sub_4461E0();
        v17 = sub_47E590(dword_8AA518 + 2016);
        result = sub_47C950(v17);
        break;
      default:
        return result;
    }
  }
  return result;
}
