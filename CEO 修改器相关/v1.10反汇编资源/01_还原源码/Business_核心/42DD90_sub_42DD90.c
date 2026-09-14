// 函数 0x42dd90  sub_42DD90  size=0x5B6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __cdecl sub_42DD90(int a1)
{
  __int16 *v1; // esi
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  char v16; // al
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  signed int v22; // eax
  int v23; // ebx
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v31; // [esp-8h] [ebp-48h]
  unsigned int v32; // [esp-4h] [ebp-44h]
  unsigned int v33; // [esp-4h] [ebp-44h]
  unsigned int v34; // [esp-4h] [ebp-44h]
  int v35; // [esp-4h] [ebp-44h]
  int v36; // [esp+Ch] [ebp-34h]
  int v37; // [esp+10h] [ebp-30h] BYREF
  int v38; // [esp+14h] [ebp-2Ch] BYREF
  int v39; // [esp+18h] [ebp-28h]
  int v40; // [esp+1Ch] [ebp-24h]
  int v41; // [esp+20h] [ebp-20h]
  int v42; // [esp+24h] [ebp-1Ch] BYREF
  int v43; // [esp+28h] [ebp-18h] BYREF
  int v44; // [esp+2Ch] [ebp-14h]
  unsigned int v45; // [esp+30h] [ebp-10h] BYREF
  unsigned int v46; // [esp+34h] [ebp-Ch] BYREF
  unsigned int v47; // [esp+38h] [ebp-8h] BYREF
  unsigned int v48; // [esp+3Ch] [ebp-4h] BYREF

  v1 = (__int16 *)(dword_4D10A8 + a1 * dword_4D1094);
  v2 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * v1[7]);
  v3 = v2[45] + v2[40] * v1[8];
  v36 = *(unsigned __int8 *)(v3 + 8);
  sub_483850(*(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), &v47, &v48);
  sub_483890(v47, v48, &v37, &v38);
  if ( *(__int16 *)(v3 + 2) - v37 == 16 && *(__int16 *)(v3 + 4) - v38 == 16 )
  {
    sub_483850(*(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), &v47, &v48);
    v32 = v1[1];
    v31 = *v1;
    v39 = v1[7];
    if ( !sub_42BC50(v39, v31, v32) )
    {
      LOBYTE(v4) = sub_42C3E0((int)v1, 0, 1);
      *((_BYTE *)v1 + 13) = 0;
      return v4;
    }
    if ( !sub_42BC50(v39, v47, v48) )
    {
      LOBYTE(v4) = sub_42C2F0(v1);
      return v4;
    }
    if ( (*((_BYTE *)v1 + 11) & 0xF) == 2 && v1[13] != -1 )
    {
      v5 = sub_42C4D0(v1);
      v6 = dword_4B32D0[2 * v5];
      v7 = v48 + dword_4B32D4[2 * v5];
      v46 = v47 + v6;
      v45 = v7;
      if ( sub_42C500(v2, v47 + v6, v7, v1[13]) )
      {
        *v1 = v47;
        v1[1] = v48;
        sub_434520(&v46, &v45);
        v8 = sub_483DE0(v47, v48, v46, v45);
        sub_4867D0(v1[8], v8);
      }
    }
    v9 = *v1;
    v10 = v47 - v9;
    v39 = v9;
    if ( (int)(v47 - v9) < 0 )
      v10 = v9 - v47;
    v11 = v1[1];
    v12 = v48 - v11;
    v41 = v10;
    if ( (int)(v48 - v11) < 0 )
      v12 = v11 - v48;
    v13 = v10 + v12;
    if ( !v13 || (*((_BYTE *)v1 + 12) == 3 || *((_BYTE *)v1 + 13) == 3) && v13 < 2 )
    {
      if ( (*((_BYTE *)v1 + 11) & 0xF) != 2 && (v1[9] & 0x8000) == 0 )
        v1[9] &= 0x8000u;
      LOBYTE(v4) = sub_42D230(a1);
      goto LABEL_68;
    }
    v14 = v39 - v47;
    v41 = v11 - v48;
    v39 = abs32(v11 - v48);
    v40 = v14;
    if ( (int)abs32(v14) <= v39 )
    {
      v44 = sub_483DE0(0, 0, 0, v41);
      v15 = sub_483DE0(0, 0, v40, 0);
    }
    else
    {
      v44 = sub_483DE0(0, 0, v14, 0);
      v15 = sub_483DE0(0, 0, 0, v41);
    }
    v41 = v15;
    v16 = *((_BYTE *)v1 + 8);
    if ( v16 == -1 )
    {
      v26 = *(unsigned __int8 *)(v3 + 8);
      if ( v26 != v44 && v26 != v41 )
      {
        v27 = v47 + dword_4B32D0[2 * v44];
        v45 = v48 + dword_4B32D4[2 * v44];
        v46 = v27;
        v4 = sub_42BCD0(a1, v27, v45);
        if ( !v4 )
        {
          *((_BYTE *)v1 + 8) = v44;
          goto LABEL_68;
        }
        v28 = v1[8];
        v35 = v44;
        *((_BYTE *)v1 + 9) = *(_BYTE *)(v3 + 8);
        sub_4867D0(v28, v35);
        goto LABEL_53;
      }
      v46 = v47 + dword_4B32D0[2 * *(unsigned __int8 *)(v3 + 8)];
      v45 = v48 + dword_4B32D4[2 * *(unsigned __int8 *)(v3 + 8)];
      if ( sub_42BCD0(a1, v46, v45) )
      {
LABEL_53:
        sub_483CE0(v1[8], 0, 8, &v42, &v43);
        v24 = v43;
        v25 = v42;
        goto LABEL_67;
      }
      if ( *(unsigned __int8 *)(v3 + 8) != v41 )
      {
        LOBYTE(v4) = v44;
        *((_BYTE *)v1 + 8) = v44;
        goto LABEL_68;
      }
      v23 = v44;
      v29 = v47 + dword_4B32D0[2 * v44];
      v45 = v48 + dword_4B32D4[2 * v44];
      v46 = v29;
      v4 = sub_42BCD0(a1, v29, v45);
      if ( v4 )
      {
LABEL_52:
        sub_4867D0(v1[8], v23);
        goto LABEL_53;
      }
    }
    else
    {
      v46 = v47 + dword_4B32D0[2 * v16];
      v45 = v48 + dword_4B32D4[2 * *((char *)v1 + 8)];
      if ( sub_42BCD0(a1, v46, v45) )
      {
        sub_4867D0(v1[8], *((char *)v1 + 8));
        *((_BYTE *)v1 + 8) = -1;
        goto LABEL_53;
      }
      v17 = *((char *)v1 + 8) - 1;
      v40 = v17;
      if ( v17 < 0 )
      {
        v17 += 4;
        v40 = v17;
      }
      v18 = v17 - 2;
      v39 = v17 - 2;
      if ( v17 - 2 < 0 )
      {
        v18 += 4;
        v39 = v18;
      }
      v19 = *(unsigned __int8 *)(v3 + 8);
      if ( v19 != v17 && v19 != v18 )
      {
        if ( v41 == -1 )
        {
          v20 = *((char *)v1 + 9);
          if ( v20 != v17 && v20 != v18 )
          {
            v22 = sub_4640D0(v17) & 0x80000001;
            v21 = v22 == 0;
            if ( v22 < 0 )
              v21 = (((_BYTE)v22 - 1) | 0xFFFFFFFE) == -1;
            v20 = v40;
            if ( v21 )
              v20 = v39;
          }
        }
        else if ( v17 == v44 || v17 == v41 )
        {
          v20 = v17;
        }
        else
        {
          v20 = v18;
        }
        sub_4867D0(v1[8], v20);
      }
      v46 = v47 + dword_4B32D0[2 * *(unsigned __int8 *)(v3 + 8)];
      v45 = v48 + dword_4B32D4[2 * *(unsigned __int8 *)(v3 + 8)];
      if ( sub_42BCD0(a1, v46, v45) )
        goto LABEL_53;
      v23 = *(unsigned __int8 *)(v3 + 8) - 2 + (*(unsigned __int8 *)(v3 + 8) - 2 < 0 ? 4 : 0);
      if ( v23 - v36 + (v23 - v36 < 0 ? 4 : 0) == 2 )
      {
        v33 = v48 + 2 * dword_4B32D4[2 * v36];
        v46 = v47 + 2 * dword_4B32D0[2 * v36];
        v45 = v33;
        if ( sub_42BC50(v1[7], v46, v33) )
        {
          sub_483890(v46, v45, &v42, &v43);
          LOBYTE(v4) = sub_4866A0(v1[8], v42 + 16, v43 + 16, 0);
          return v4;
        }
      }
      v34 = v48 + dword_4B32D4[2 * v23];
      v46 = v47 + dword_4B32D0[2 * v23];
      v45 = v34;
      v4 = sub_42BCD0(a1, v46, v34);
      if ( v4 )
        goto LABEL_52;
    }
    *((_BYTE *)v1 + 8) = v23;
    goto LABEL_68;
  }
  sub_483CE0(v1[8], 0, 8, &v42, &v43);
  v4 = sub_4866A0(v1[8], v42, v43, 0);
  if ( v4 )
    goto LABEL_68;
  v24 = v38 + 16;
  v25 = v37 + 16;
LABEL_67:
  LOBYTE(v4) = sub_4866A0(v1[8], v25, v24, 0);
LABEL_68:
  if ( *((_BYTE *)v1 + 12) == 3 )
    LOBYTE(v4) = sub_421C70((unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v1[10]), 1, v1[8]);
  return v4;
}
