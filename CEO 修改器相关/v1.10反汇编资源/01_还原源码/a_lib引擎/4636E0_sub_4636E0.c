// 函数 0x4636e0  sub_4636E0  size=0x92D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4636E0()
{
  int v0; // eax
  int v1; // ebx
  int *v2; // esi
  int *v3; // edi
  bool v4; // zf
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // edi
  char *v10; // eax
  char *v11; // edx
  char v12; // cl
  int v13; // eax
  int v14; // esi
  char *v15; // ebx
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // esi
  unsigned int v19; // edi
  int v20; // ecx
  int v21; // esi
  unsigned int v22; // ebx
  unsigned int v23; // edi
  int v24; // ecx
  unsigned int v25; // ebx
  unsigned int v26; // et0
  int v27; // ecx
  unsigned int v28; // ebx
  unsigned int v29; // et0
  int v30; // ecx
  unsigned int v31; // et0
  int v32; // esi
  unsigned int v33; // ebx
  unsigned int v34; // edi
  int v35; // ecx
  unsigned int v36; // et0
  int v37; // esi
  unsigned int v38; // ebx
  unsigned int v39; // edi
  int v40; // ecx
  unsigned int v41; // et0
  int v42; // esi
  unsigned int v43; // ebx
  unsigned int v44; // edi
  int v45; // ecx
  unsigned int v46; // et0
  int v47; // esi
  unsigned int v48; // ebx
  unsigned int v49; // edi
  int v50; // ecx
  unsigned int v51; // ebx
  unsigned int v52; // et0
  int v53; // ecx
  unsigned int v54; // et0
  int v55; // esi
  unsigned int v56; // ebx
  unsigned int v57; // edi
  int v58; // ecx
  unsigned int v59; // et0
  int v60; // esi
  __int64 v61; // kr48_8
  int v62; // ecx
  int v64; // [esp+Ch] [ebp-204h]
  char *v65; // [esp+Ch] [ebp-204h]
  __int64 Value; // [esp+10h] [ebp-200h]
  __int64 Valuea; // [esp+10h] [ebp-200h]
  unsigned int Value_4; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4a; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4b; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4c; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4d; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4e; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4f; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4g; // [esp+14h] [ebp-1FCh]
  unsigned int Value_4h; // [esp+14h] [ebp-1FCh]
  int v77; // [esp+18h] [ebp-1F8h]
  int v78; // [esp+18h] [ebp-1F8h]
  int v79; // [esp+18h] [ebp-1F8h]
  int v80; // [esp+18h] [ebp-1F8h]
  int v81; // [esp+18h] [ebp-1F8h]
  int v82; // [esp+18h] [ebp-1F8h]
  int v83; // [esp+18h] [ebp-1F8h]
  int v84; // [esp+18h] [ebp-1F8h]
  int v85; // [esp+18h] [ebp-1F8h]
  _BYTE Base[4]; // [esp+1Ch] [ebp-1F4h] BYREF
  char v87; // [esp+20h] [ebp-1F0h] BYREF
  char Buffer[256]; // [esp+10Ch] [ebp-104h] BYREF

  v0 = sub_47C740("face\\sreport.fce");
  sub_481C90(&unk_8DB6A0, v0, 1);
  v1 = 0;
  sub_47D1A0(&unk_8DB6A0, sub_462CB0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  v64 = 0;
  v2 = (int *)&v87;
  v3 = dword_4FF600;
  do
  {
    v4 = (*((_BYTE *)v3 - 189767) & 1) == 0;
    *(v2 - 1) = v1;
    if ( v4 )
    {
      *v2 = -1;
    }
    else
    {
      *v2 = sub_459B70(v1);
      ++v64;
      v2[1] = *v3;
    }
    v3 += 47470;
    ++v1;
    v2 += 3;
  }
  while ( (int)v3 < (int)dword_89E860 );
  qsort(Base, 0x14u, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_462CD0);
  v5 = 0;
  v6 = Base;
  do
  {
    dword_4FF600[47470 * *v6] = v5++;
    v6 += 3;
  }
  while ( v5 < 20 );
  v7 = 0;
  v8 = 7200;
  v9 = Base;
  do
  {
    if ( v7 >= v64 )
    {
      sub_482060(v8 + dword_8DB7C8 - 5760);
      sub_482060(v8 + dword_8DB7C8 - 2880);
      sub_482060(v8 + dword_8DB7C8);
    }
    else
    {
      v10 = &byte_4D10C8[189880 * *v9];
      v11 = (char *)(Buffer - v10);
      do
      {
        v12 = *v10;
        v11[(_DWORD)v10] = *v10;
        ++v10;
      }
      while ( v12 );
      sub_47FF50(Buffer);
      _itoa(v9[1], Buffer, 10);
      sub_47FF50(Buffer);
      v13 = v9[2];
      if ( v7 <= v13 )
      {
        if ( v7 >= v13 )
        {
          sub_482060(v8 + dword_8DB7C8);
        }
        else
        {
          sub_47E650(4);
          sub_482FE0(v8 + dword_8DB7C8);
        }
      }
      else
      {
        sub_47E650(7);
        sub_482FE0(v8 + dword_8DB7C8);
      }
      sub_482FE0(v8 + dword_8DB7C8 - 5760);
      sub_482FE0(v8 + dword_8DB7C8 - 2880);
    }
    v8 += 288;
    ++v7;
    v9 += 3;
  }
  while ( v8 < 10080 );
  sub_462D00();
  v14 = byte_4CE046;
  v15 = (char *)&unk_4D10B8 + 189880 * dword_8703A0;
  v65 = v15;
  Value = 0;
  v16 = byte_4CE046 - 25;
  v77 = 3;
  do
  {
    v17 = v14;
    if ( v14 > 24 )
      v17 = v14 - 8 * (3 * (v16 / 0x18) + 3);
    if ( v17 < 0 )
      v17 += 24 * ((-1 - v17) / 0x18u) + 24;
    Value += (unsigned __int64)*(double *)&v15[8 * v17 + 9664];
    --v14;
    --v16;
    --v77;
  }
  while ( v77 );
  sub_438340(Value, Buffer);
  sub_47FF50(Buffer);
  v18 = byte_4CE046;
  Valuea = 0;
  v19 = byte_4CE046 - 25;
  v78 = 3;
  do
  {
    v20 = v18;
    if ( v18 > 24 )
      v20 = v18 - 8 * (3 * (v19 / 0x18) + 3);
    if ( v20 < 0 )
      v20 += 24 * ((-1 - v20) / 0x18u) + 24;
    Valuea += (unsigned __int64)*(double *)&v15[8 * v20 + 11048];
    --v18;
    --v19;
    --v78;
  }
  while ( v78 );
  sub_438340(Valuea, Buffer);
  sub_47FF50(Buffer);
  v21 = byte_4CE046;
  v22 = 0;
  Value_4 = 0;
  v23 = byte_4CE046 - 25;
  v79 = 3;
  do
  {
    v24 = v21;
    if ( v21 > 24 )
      v24 = v21 - 8 * (3 * (v23 / 0x18) + 3);
    if ( v24 < 0 )
      v24 += 24 * ((-1 - v24) / 0x18u) + 24;
    v26 = ((unsigned __int64)*(double *)&v65[8 * v24 + 9864] + __PAIR64__(Value_4, v22)) >> 32;
    v25 = (unsigned __int64)*(double *)&v65[8 * v24 + 9864] + v22;
    Value_4a = v26;
    v27 = v21;
    if ( v21 > 24 )
      v27 = v21 - 8 * (3 * (v23 / 0x18) + 3);
    if ( v27 < 0 )
      v27 += 24 * ((-1 - v27) / 0x18u) + 24;
    v29 = ((unsigned __int64)*(double *)&v65[8 * v27 + 10064] + __PAIR64__(Value_4a, v25)) >> 32;
    v28 = (unsigned __int64)*(double *)&v65[8 * v27 + 10064] + v25;
    Value_4b = v29;
    v30 = v21;
    if ( v21 > 24 )
      v30 = v21 - 8 * (3 * (v23 / 0x18) + 3);
    if ( v30 < 0 )
      v30 += 24 * ((-1 - v30) / 0x18u) + 24;
    v31 = ((unsigned __int64)*(double *)&v65[8 * v30 + 10264] + __PAIR64__(Value_4b, v28)) >> 32;
    v22 = (unsigned __int64)*(double *)&v65[8 * v30 + 10264] + v28;
    Value_4 = v31;
    --v21;
    --v23;
    --v79;
  }
  while ( v79 );
  sub_438340(__SPAIR64__(Value_4, v22), Buffer);
  sub_47FF50(Buffer);
  v32 = byte_4CE046;
  v33 = 0;
  Value_4c = 0;
  v34 = byte_4CE046 - 25;
  v80 = 3;
  do
  {
    v35 = v32;
    if ( v32 > 24 )
      v35 = v32 - 8 * (3 * (v34 / 0x18) + 3);
    if ( v35 < 0 )
      v35 += 24 * ((-1 - v35) / 0x18u) + 24;
    v36 = ((unsigned __int64)*(double *)&v65[8 * v35 + 10456] + __PAIR64__(Value_4c, v33)) >> 32;
    v33 += (unsigned __int64)*(double *)&v65[8 * v35 + 10456];
    Value_4c = v36;
    --v32;
    --v34;
    --v80;
  }
  while ( v80 );
  sub_438340(__SPAIR64__(Value_4c, v33), Buffer);
  sub_47FF50(Buffer);
  v37 = byte_4CE046;
  v38 = 0;
  Value_4d = 0;
  v39 = byte_4CE046 - 25;
  v81 = 3;
  do
  {
    v40 = v37;
    if ( v37 > 24 )
      v40 = v37 - 8 * (3 * (v39 / 0x18) + 3);
    if ( v40 < 0 )
      v40 += 24 * ((-1 - v40) / 0x18u) + 24;
    v41 = ((unsigned __int64)*(double *)&v65[8 * v40 + 10656] + __PAIR64__(Value_4d, v38)) >> 32;
    v38 += (unsigned __int64)*(double *)&v65[8 * v40 + 10656];
    Value_4d = v41;
    --v37;
    --v39;
    --v81;
  }
  while ( v81 );
  sub_438340(__SPAIR64__(Value_4d, v38), Buffer);
  sub_47FF50(Buffer);
  v42 = byte_4CE046;
  v43 = 0;
  Value_4e = 0;
  v44 = byte_4CE046 - 25;
  v82 = 3;
  do
  {
    v45 = v42;
    if ( v42 > 24 )
      v45 = v42 - 8 * (3 * (v44 / 0x18) + 3);
    if ( v45 < 0 )
      v45 += 24 * ((-1 - v45) / 0x18u) + 24;
    v46 = ((unsigned __int64)*(double *)&v65[8 * v45 + 10848] + __PAIR64__(Value_4e, v43)) >> 32;
    v43 += (unsigned __int64)*(double *)&v65[8 * v45 + 10848];
    Value_4e = v46;
    --v42;
    --v44;
    --v82;
  }
  while ( v82 );
  sub_438340(__SPAIR64__(Value_4e, v43), Buffer);
  sub_47FF50(Buffer);
  v47 = byte_4CE046;
  v48 = 0;
  Value_4f = 0;
  v49 = byte_4CE046 - 25;
  v83 = 3;
  do
  {
    v50 = v47;
    if ( v47 > 24 )
      v50 = v47 - 8 * (3 * (v49 / 0x18) + 3);
    if ( v50 < 0 )
      v50 += 24 * ((-1 - v50) / 0x18u) + 24;
    v52 = ((unsigned __int64)*(double *)&v65[8 * v50 + 11448] + __PAIR64__(Value_4f, v48)) >> 32;
    v51 = (unsigned __int64)*(double *)&v65[8 * v50 + 11448] + v48;
    Value_4g = v52;
    v53 = v47;
    if ( v47 > 24 )
      v53 = v47 - 8 * (3 * (v49 / 0x18) + 3);
    if ( v53 < 0 )
      v53 += 24 * ((-1 - v53) / 0x18u) + 24;
    v54 = ((unsigned __int64)*(double *)&v65[8 * v53 + 11248] + __PAIR64__(Value_4g, v51)) >> 32;
    v48 = (unsigned __int64)*(double *)&v65[8 * v53 + 11248] + v51;
    Value_4f = v54;
    --v47;
    --v49;
    --v83;
  }
  while ( v83 );
  sub_438340(__SPAIR64__(Value_4f, v48), Buffer);
  sub_47FF50(Buffer);
  v55 = byte_4CE046;
  v56 = 0;
  Value_4h = 0;
  v57 = byte_4CE046 - 25;
  v84 = 3;
  do
  {
    v58 = v55;
    if ( v55 > 24 )
      v58 = v55 - 8 * (3 * (v57 / 0x18) + 3);
    if ( v58 < 0 )
      v58 += 24 * ((-1 - v58) / 0x18u) + 24;
    v59 = ((unsigned __int64)*(double *)&v65[8 * v58 + 11640] + __PAIR64__(Value_4h, v56)) >> 32;
    v56 += (unsigned __int64)*(double *)&v65[8 * v58 + 11640];
    Value_4h = v59;
    --v55;
    --v57;
    --v84;
  }
  while ( v84 );
  sub_438340(__SPAIR64__(Value_4h, v56), Buffer);
  sub_47FF50(Buffer);
  v60 = byte_4CE046 - 3;
  v85 = 3;
  v61 = 0;
  do
  {
    v62 = v60;
    if ( v60 > 24 )
      v62 = v60 - 8 * (3 * ((v60 - 25) / 0x18u) + 3);
    if ( v62 < 0 )
      v62 += 24 * ((-1 - v62) / 0x18u) + 24;
    v61 += (unsigned __int64)*(double *)&v65[8 * v62 + 11640];
    --v60;
    --v85;
  }
  while ( v85 );
  sub_438340(v61, Buffer);
  sub_47FF50(Buffer);
  return 1;
}
