// 函数 0x460070  sub_460070  size=0x980  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_460070()
{
  int i; // eax
  char *v1; // esi
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  int v7; // edi
  int *v8; // eax
  __int16 *v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  int v19; // edi
  unsigned int v20; // ebx
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int *v24; // eax
  __int16 *v25; // edi
  int v26; // edi
  int v27; // ebx
  int v28; // ecx
  int v29; // edi
  int *v30; // eax
  int v31; // edx
  __int16 *v32; // edi
  __int16 v33; // ax
  int v34; // eax
  int v35; // ebx
  int v36; // edi
  unsigned int v37; // esi
  int v38; // eax
  int v39; // eax
  bool v40; // cc
  int v41; // ecx
  BOOL v42; // eax
  int v43; // ecx
  int v44; // [esp+0h] [ebp-110h]
  int v45; // [esp+4h] [ebp-10Ch]
  int v46; // [esp+4h] [ebp-10Ch]
  unsigned int v47; // [esp+4h] [ebp-10Ch]
  int v48; // [esp+8h] [ebp-108h]
  int v49; // [esp+8h] [ebp-108h]
  int v50; // [esp+8h] [ebp-108h]
  int v51; // [esp+8h] [ebp-108h]
  char Buffer[256]; // [esp+Ch] [ebp-104h] BYREF

  if ( dword_8D6070 )
  {
    v44 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    memset(word_8D5FF0, -1, 0x80u);
    memset(word_8D5F70, -1, 0x80u);
    for ( i = *(__int16 *)(v44 + 238); i != -1; i = *((__int16 *)v1 + 3) )
    {
      v1 = (char *)(dword_4CC8D0 + i * dword_4CC8BC);
      if ( v1[9] != 2 )
      {
        v2 = byte_4CE046;
        v45 = 0;
        v3 = byte_4CE046 - 25;
        v48 = 3;
        do
        {
          v4 = v2;
          if ( v2 > 24 )
            v4 = v2 - 8 * (3 * (v3 / 0x18) + 3);
          if ( v4 < 0 )
            v4 += 24 * ((-1 - v4) / 0x18u) + 24;
          v5 = *(_DWORD *)&v1[4 * v4 + 512] + v45;
          --v2;
          --v3;
          v6 = v48-- == 1;
          v45 = v5;
        }
        while ( !v6 );
        v7 = 0;
        v8 = &dword_8D5FF4;
        while ( v5 <= *v8 )
        {
          v8 += 8;
          ++v7;
          if ( (int)v8 >= (int)&dword_8D6074 )
            goto LABEL_40;
        }
        if ( 3 - v7 > 0 )
          memcpy_0((char *)&unk_8D6010 + 32 * v7, &word_8D5FF0[16 * v7], 32 * (3 - v7));
        v9 = &word_8D5FF0[16 * v7];
        *((_DWORD *)v9 + 1) = v45;
        *((_DWORD *)v9 + 2) = *((_DWORD *)v1 + 3) / 4;
        *v9 = *v1;
        if ( v1[9] )
          v9[1] = 1;
        else
          v9[1] = 0;
        v10 = sub_415180((int)v1);
        v11 = byte_4CE044;
        *((_DWORD *)v9 + 4) = v10;
        v12 = v11;
        *((_DWORD *)v9 + 3) = *((__int16 *)v1 + 14);
        if ( v11 > 12 )
          v12 = -12 - 12 * ((v11 - 13) / 0xCu) + v11;
        if ( v12 < 0 )
          v12 += 12 * ((-1 - v12) / 0xCu) + 12;
        *((_DWORD *)v9 + 5) = *(_DWORD *)&v1[4 * v12 + 312];
        v13 = v11;
        if ( v11 > 12 )
          v13 = -12 - 12 * ((v11 - 13) / 0xCu) + v11;
        if ( v13 < 0 )
          v13 += 12 * ((-1 - v13) / 0xCu) + 12;
        *((_DWORD *)v9 + 6) = *(_DWORD *)&v1[4 * v13 + 160];
        v14 = v11;
        if ( v11 > 12 )
          v14 = -12 - 12 * ((v11 - 13) / 0xCu) + v11;
        if ( v14 < 0 )
          v14 += 12 * ((-1 - v14) / 0xCu) + 12;
        v15 = *(_DWORD *)&v1[4 * v14 + 208];
        v16 = byte_4CE044;
        *((_DWORD *)v9 + 7) = v15;
        if ( v16 > 12 )
          v16 += -12 - 12 * ((v16 - 13) / 0xCu);
        if ( v16 < 0 )
          v16 += 12 * ((-1 - v16) / 0xCu) + 12;
        v17 = *(_DWORD *)&v1[4 * v16 + 260] + v15;
        v18 = byte_4CE044;
        *((_DWORD *)v9 + 7) = v17;
        if ( v18 > 12 )
          v18 += -12 - 12 * ((v18 - 13) / 0xCu);
        if ( v18 < 0 )
          v18 += 12 * ((-1 - v18) / 0xCu) + 12;
        *((_DWORD *)v9 + 7) = v17 + *(_DWORD *)&v1[4 * v18 + 364];
      }
LABEL_40:
      if ( v1[10] != 2 )
      {
        v19 = byte_4CE046;
        v46 = 0;
        v20 = byte_4CE046 - 25;
        v49 = 3;
        do
        {
          v21 = v19;
          if ( v19 > 24 )
            v21 = v19 - 8 * (3 * (v20 / 0x18) + 3);
          if ( v21 < 0 )
            v21 += 24 * ((-1 - v21) / 0x18u) + 24;
          v22 = *(_DWORD *)&v1[4 * v21 + 912] + v46;
          --v19;
          --v20;
          v6 = v49-- == 1;
          v46 = v22;
        }
        while ( !v6 );
        v23 = 0;
        v24 = (int *)&unk_8D5F74;
        while ( v22 <= *v24 )
        {
          v24 += 8;
          ++v23;
          if ( (int)v24 >= (int)&dword_8D5FF4 )
            goto LABEL_57;
        }
        if ( 3 - v23 > 0 )
          memcpy_0((char *)&unk_8D5F90 + 32 * v23, &word_8D5F70[16 * v23], 32 * (3 - v23));
        v25 = &word_8D5F70[16 * v23];
        *((_DWORD *)v25 + 1) = v46;
        *((_DWORD *)v25 + 2) = *((_DWORD *)v1 + 3) / 4;
        *v25 = *v1;
        if ( v1[10] )
          v25[1] = 1;
        else
          v25[1] = 0;
        *((_DWORD *)v25 + 4) = sub_415180((int)v1);
        *((_DWORD *)v25 + 3) = *((__int16 *)v1 + 14);
      }
LABEL_57:
      if ( sub_415A00((__int16 *)v1) )
      {
        v26 = byte_4CE046;
        v27 = 0;
        v47 = byte_4CE046 - 25;
        v50 = 3;
        do
        {
          v28 = v26;
          if ( v26 > 24 )
            v28 = v26 - 8 * (3 * (v47 / 0x18) + 3);
          if ( v28 < 0 )
            v28 += 24 * ((-1 - v28) / 0x18u) + 24;
          v27 += *(_DWORD *)&v1[4 * v28 + 1012];
          --v47;
          --v26;
          --v50;
        }
        while ( v50 );
        v29 = 0;
        v30 = (int *)&unk_8D5F74;
        while ( v27 <= 0 || v27 <= *v30 )
        {
          v30 += 8;
          ++v29;
          if ( (int)v30 >= (int)&dword_8D5FF4 )
            goto LABEL_72;
        }
        if ( 3 - v29 > 0 )
          memcpy_0((char *)&unk_8D5F90 + 32 * v29, &word_8D5F70[16 * v29], 32 * (3 - v29));
        v31 = *(_DWORD *)dword_870814;
        v32 = &word_8D5F70[16 * v29];
        *((_DWORD *)v32 + 1) = v27;
        v33 = *v1;
        *v32 = v33;
        v34 = *((_DWORD *)v1 + 4) * *(_DWORD *)(v31 + 72 * v33 + 24);
        v32[1] = 2;
        *((_DWORD *)v32 + 2) = v34;
        *((_DWORD *)v32 + 4) = sub_415180((int)v1);
        *((_DWORD *)v32 + 3) = *((__int16 *)v1 + 14);
      }
LABEL_72:
      ;
    }
    v35 = 28;
    v36 = 5760;
    v37 = 0;
    v51 = 4;
    do
    {
      if ( dword_8D5FF8[v37 / 4] == -1 )
      {
        sub_47F400(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
      }
      else
      {
        sub_47F400(*(_DWORD *)dword_870814 + 72 * word_8D5FF0[v37 / 2]);
        _itoa(dword_8D6004[v37 / 4], Buffer, 10);
        sub_47FF50(Buffer);
        _itoa(dword_8D6008[v37 / 4], Buffer, 10);
        sub_47FF50(Buffer);
        _itoa(dword_8D600C[v37 / 4], Buffer, 10);
        sub_47FF50(Buffer);
      }
      if ( dword_8D5F78[v37 / 4] == -1 )
      {
        sub_47F400(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
      }
      else
      {
        sub_47F400(*(_DWORD *)dword_870814 + 72 * word_8D5F70[v37 / 2]);
        _itoa(dword_8D5F78[v37 / 4], Buffer, 10);
        sub_47FF50(Buffer);
        sprintf(Buffer, "%3d/%2d", dword_8D5F7C[v37 / 4], dword_8D5F80[v37 / 4]);
        sub_47FF50(Buffer);
        if ( word_8D5F72[v37 / 2] )
        {
          if ( word_8D5F72[v37 / 2] == 1 )
          {
            *(_WORD *)(v36 + dword_8D62D8 - 2862) = 31744;
          }
          else if ( word_8D5F72[v37 / 2] == 2 )
          {
            *(_WORD *)(v36 + dword_8D62D8 - 2862) = 31;
          }
        }
        else
        {
          *(_WORD *)(v36 + dword_8D62D8 - 2862) = 0x7FFF;
        }
      }
      ++v35;
      v37 += 32;
      v36 += 288;
      --v51;
    }
    while ( v51 );
    _itoa(*(_DWORD *)(v44 + 460), Buffer, 10);
    sub_47FF50(Buffer);
    v38 = sub_41BB50((_DWORD *)v44);
    _itoa(v38, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v44 + 482), Buffer, 10);
    sub_47FF50(Buffer);
    v39 = sub_419C70((__int16 *)v44);
    _itoa(*(__int16 *)(v44 + 482) - v39, Buffer, 10);
    sub_47FF50(Buffer);
    if ( *(char *)(v44 + 224) != dword_8703A0 )
    {
      v41 = dword_8D62D8;
LABEL_95:
      sub_4820C0(v41 + 10656);
      return;
    }
    if ( dword_4B38B8 == -1 )
    {
      v40 = *(__int16 *)(v44 + 482) <= sub_419C70((__int16 *)v44);
      v41 = dword_8D62D8;
      if ( !v40 )
      {
        sub_483040(dword_8D62D8 + 10656);
        return;
      }
      goto LABEL_95;
    }
    v42 = sub_4334C0((_DWORD *)(dword_870840 + dword_4B38B8 * dword_87082C));
    v43 = dword_8D62D8 + 10656;
    if ( v42 )
    {
      sub_4820C0(v43);
      sub_47E6A0(18);
    }
    else
    {
      sub_483040(v43);
      sub_47E6A0(-1);
    }
  }
}
