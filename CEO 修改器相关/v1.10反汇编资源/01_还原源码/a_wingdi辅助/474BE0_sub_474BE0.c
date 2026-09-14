// 函数 0x474be0  sub_474BE0  size=0x1F6  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_474BE0@<eax>(char a1@<bl>, _DWORD *a2, unsigned int a3)
{
  int v4; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  char v20; // [esp+0h] [ebp-4h]
  int v21; // [esp+Ch] [ebp+8h]

  if ( (a3 & 0x100000) != 0 )
  {
    a2[7] = (a3 & 0x80000) == 0;
    a2[8] = 0;
  }
  else
  {
    a2[7] = 1;
    a2[8] = 1;
  }
  v21 = 4 - ((a3 >> 17) & 3);
  a2[10] = v21;
  v4 = (a3 >> 10) & 3;
  if ( v4 == 3 )
  {
    sub_4753F0("Stream error\n", v20);
    return 0;
  }
  v6 = a2[8];
  if ( v6 )
    v7 = v4 + 6;
  else
    v7 = a2[7] + v4 + 2 * a2[7];
  a2[13] = v7;
  a2[11] = (a3 & 0x10000) == 0;
  if ( v6 )
    a2[12] = (unsigned __int16)a3 >> 12;
  a2[17] = (a3 >> 4) & 3;
  a2[15] = (a3 >> 8) & 1;
  a2[18] = (a3 >> 3) & 1;
  v8 = (unsigned __int8)a3 >> 6;
  v9 = (unsigned __int16)a3 >> 12;
  v10 = (a3 >> 9) & 1;
  a2[20] = a3 & 3;
  a2[19] = (a3 >> 2) & 1;
  a2[12] = v9;
  a2[14] = v10;
  a2[16] = v8;
  a2[4] = (v8 != 3) + 1;
  if ( !((unsigned __int16)a3 >> 12) )
  {
    sub_4753F0("Free format not supported.\n", a1);
    return 0;
  }
  switch ( v21 )
  {
    case 1:
      v18 = a2[13];
      v19 = 12000 * dword_4B4C50[48 * a2[7] + v9];
      a2[21] = v19;
      v17 = 4 * (v10 + v19 / dword_4B4DD0[v18]) - 4;
      goto LABEL_20;
    case 2:
      v15 = a2[13];
      v16 = 144000 * dword_4B4C90[48 * a2[7] + v9];
      a2[21] = v16;
      v17 = v16 / dword_4B4DD0[v15] + v10 - 4;
LABEL_20:
      a2[2] = 0;
      a2[21] = v17;
      a2[1] = 32;
      return 1;
    case 3:
      v11 = a2[7];
      v12 = dword_4B4CD0[48 * v11 + v9];
      v13 = a2[13];
      v12 *= 144000;
      a2[21] = v12;
      v14 = dword_4B4DD0[v13] << v11;
      a2[2] = 0;
      a2[1] = 32;
      a2[21] = v12 / v14 + v10 - 4;
      return 1;
    default:
      sub_4753F0("Sorry, unknown layer type.\n", a1);
      return 0;
  }
}
