// 函数 0x435e40  sub_435E40  size=0x447  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_435E40@<eax>(__int16 *a1@<eax>)
{
  int v2; // eax
  int v3; // esi
  __int16 *v4; // ebx
  char v5; // al
  int v6; // eax
  char *v7; // edx
  int v8; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  char v13; // al
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // edi
  int v27; // [esp-10h] [ebp-34h]
  int v28; // [esp+Ch] [ebp-18h] BYREF
  char *v29; // [esp+10h] [ebp-14h]
  int v30; // [esp+14h] [ebp-10h]
  int v31; // [esp+18h] [ebp-Ch]
  int v32; // [esp+1Ch] [ebp-8h]
  char *v33; // [esp+20h] [ebp-4h]

  sub_464B60(&v28);
  v2 = sub_4656D0(&unk_4C43C4);
  v32 = v2;
  if ( v2 == -1 )
    return -1;
  v3 = dword_4C43DC + v2 * dword_4C43C8;
  v4 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *a1);
  *(_BYTE *)(v3 + 3) = *((_BYTE *)a1 + 7);
  v5 = *((_BYTE *)a1 + 8);
  *(_BYTE *)(v3 + 2) = v5;
  if ( v5 != -1 )
    v33 = (char *)&unk_4D10B8 + 189880 * v5;
  switch ( *(_BYTE *)(v3 + 3) )
  {
    case 0:
    case 5:
      goto LABEL_5;
    case 1:
      v6 = sub_486480(*v4, a1[1], a1[2], *((char *)a1 + 6), 0, 1, 0, 0, 0);
      v7 = v33;
      *(_DWORD *)(v3 + 80) = v6;
      sub_486530(v6, *v4, *((__int16 *)v7 + 1), 0, 0, 0);
      break;
    case 2:
      v8 = sub_486480(*v4, a1[1], a1[2], *((char *)a1 + 6), 0, 1, 0, 0, 0);
      v27 = 2;
      goto LABEL_11;
    case 4:
      if ( v4[16] == 2 )
        *(_DWORD *)(v3 + 80) = sub_486480(v4[1], a1[1], a1[2], *((char *)a1 + 6), 0, 1, 0, 0, 0);
      else
LABEL_5:
        *(_DWORD *)(v3 + 80) = sub_486480(*v4, a1[1], a1[2], *((char *)a1 + 6), 0, 1, 0, 0, 0);
      break;
    case 6:
      v8 = sub_486480(*v4, a1[1], a1[2], *((char *)a1 + 6), 0, 1, 0, 0, 0);
      v27 = 1;
LABEL_11:
      *(_DWORD *)(v3 + 80) = v8;
      sub_486530(v8, *v4, v27, 0, 0, 0);
      break;
    default:
      break;
  }
  if ( *(_DWORD *)(v3 + 80) == -1 )
  {
    sub_464E10(v32);
    return -1;
  }
  v10 = sub_485A70(*(_DWORD *)(v3 + 80));
  sub_464CE0(v10);
  v33 = v29;
  if ( (int)v29 <= v31 )
  {
    v11 = v30;
    v12 = v28;
    do
    {
      if ( v12 <= v11 )
      {
        do
        {
          sub_4385B0(v12, v33);
          v11 = v30;
          ++v12;
        }
        while ( v12 <= v30 );
        v12 = v28;
      }
      ++v33;
    }
    while ( (int)v33 <= v31 );
  }
  *(_WORD *)v3 = *a1;
  *(_DWORD *)(v3 + 12) = dword_4CD11C;
  *(_BYTE *)(v3 + 7) = *((_BYTE *)a1 + 11);
  *(_WORD *)(v3 + 4) = *((char *)a1 + 9);
  *(_BYTE *)(v3 + 6) = *((_BYTE *)a1 + 10);
  *(_DWORD *)(v3 + 8) = *((_DWORD *)a1 + 3);
  v13 = *(_BYTE *)(v3 + 3);
  *(_WORD *)(v3 + 84) = -1;
  *(_WORD *)(v3 + 86) = -1;
  if ( v13 < 4 || v13 > 6 )
  {
    if ( v13 == 2 )
      sub_40D800((_DWORD *)v3);
  }
  else
  {
    *(_DWORD *)(v3 + 16) ^= (*((_DWORD *)a1 + 4) ^ *(_DWORD *)(v3 + 16)) & 0x3FFFFFF;
    v14 = *(_DWORD *)(v3 + 16) ^ (*(_DWORD *)(v3 + 16) ^ *((_DWORD *)a1 + 4)) & 0x3C000000;
    *(_DWORD *)(v3 + 16) = v14;
    v15 = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 16) = *((_DWORD *)a1 + 4) & 0xC0000000 | v14 & 0x3FFFFFF;
    *(_DWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 24) ^= (*((_DWORD *)a1 + 5) ^ v15) & 0x3FFFFFF;
    v16 = *(_DWORD *)(v3 + 32);
    v17 = *(_DWORD *)(v3 + 24) ^ (*(_DWORD *)(v3 + 24) ^ *((_DWORD *)a1 + 5)) & 0x3C000000;
    *(_DWORD *)(v3 + 24) = v17;
    *(_DWORD *)(v3 + 24) = *((_DWORD *)a1 + 5) & 0xC0000000 | v17 & 0x3FFFFFF;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 32) ^= (*((_DWORD *)a1 + 6) ^ v16) & 0x3FFFFFF;
    v18 = *(_DWORD *)(v3 + 40);
    v19 = *(_DWORD *)(v3 + 32) ^ (*(_DWORD *)(v3 + 32) ^ *((_DWORD *)a1 + 6)) & 0x3C000000;
    *(_DWORD *)(v3 + 32) = v19;
    *(_DWORD *)(v3 + 32) = *((_DWORD *)a1 + 6) & 0xC0000000 | v19 & 0x3FFFFFF;
    *(_DWORD *)(v3 + 36) = 0;
    *(_DWORD *)(v3 + 40) ^= (*((_DWORD *)a1 + 7) ^ v18) & 0x3FFFFFF;
    v20 = *(_DWORD *)(v3 + 48);
    v21 = *(_DWORD *)(v3 + 40) ^ (*(_DWORD *)(v3 + 40) ^ *((_DWORD *)a1 + 7)) & 0x3C000000;
    *(_DWORD *)(v3 + 40) = v21;
    *(_DWORD *)(v3 + 40) = *((_DWORD *)a1 + 7) & 0xC0000000 | v21 & 0x3FFFFFF;
    *(_DWORD *)(v3 + 44) = 0;
    *(_DWORD *)(v3 + 48) ^= (*((_DWORD *)a1 + 8) ^ v20) & 0x3FFFFFF;
    v22 = *(_DWORD *)(v3 + 48) ^ (*(_DWORD *)(v3 + 48) ^ *((_DWORD *)a1 + 8)) & 0x3C000000;
    *(_DWORD *)(v3 + 48) = v22;
    *(_DWORD *)(v3 + 48) = *((_DWORD *)a1 + 8) & 0xC0000000 | v22 & 0x3FFFFFF;
    *(_DWORD *)(v3 + 52) = 0;
    *(_DWORD *)(v3 + 56) ^= (*((_DWORD *)a1 + 9) ^ *(_DWORD *)(v3 + 56)) & 0x3FFFFFF;
    v23 = *(_DWORD *)(v3 + 64);
    v24 = *(_DWORD *)(v3 + 56) ^ (*(_DWORD *)(v3 + 56) ^ *((_DWORD *)a1 + 9)) & 0x3C000000;
    *(_DWORD *)(v3 + 56) = v24;
    *(_DWORD *)(v3 + 56) = *((_DWORD *)a1 + 9) & 0xC0000000 | v24 & 0x3FFFFFF;
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v3 + 64) ^= (*((_DWORD *)a1 + 10) ^ v23) & 0x3FFFFFF;
    v25 = *(_DWORD *)(v3 + 64) ^ (*(_DWORD *)(v3 + 64) ^ *((_DWORD *)a1 + 10)) & 0x3C000000;
    *(_DWORD *)(v3 + 64) = v25;
    *(_DWORD *)(v3 + 64) = v25 & 0x3FFFFFF | *((_DWORD *)a1 + 10) & 0xC0000000;
    *(_DWORD *)(v3 + 68) = 0;
  }
  *(_DWORD *)(v3 + 88) = -1;
  sub_40F6A0((__int16 *)v3);
  sub_40F570((_DWORD *)v3, 1);
  v26 = v32;
  sub_483BD0(*(_DWORD *)(v3 + 80), 0, v32);
  return v26;
}
