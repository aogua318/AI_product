// 函数 0x421c70  sub_421C70  size=0xAA2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_421C70(unsigned __int8 *this, int a2, int a3)
{
  __int16 v4; // ax
  int v5; // ecx
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  unsigned int v14; // eax
  int v15; // ebx
  __int16 v16; // ax
  unsigned int v17; // eax
  int v18; // ecx
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  __int16 *v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  __int16 v35; // ax
  __int16 v36; // ax
  int v37; // eax
  int v38; // ebx
  unsigned int v39; // eax
  int v40; // ecx
  __int16 v41; // ax
  int v42; // eax
  __int16 v43; // ax
  int v44; // eax
  __int16 v45; // ax
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  int v50; // [esp-Ch] [ebp-2Ch]
  int v51; // [esp+4h] [ebp-1Ch]
  int v52; // [esp+4h] [ebp-1Ch]
  int v53; // [esp+8h] [ebp-18h]
  int v54; // [esp+8h] [ebp-18h]
  int v55; // [esp+Ch] [ebp-14h]
  unsigned int v56; // [esp+Ch] [ebp-14h]
  int v57; // [esp+Ch] [ebp-14h]
  int v58; // [esp+Ch] [ebp-14h]
  int v59; // [esp+10h] [ebp-10h] BYREF
  int v60; // [esp+14h] [ebp-Ch] BYREF
  int v61; // [esp+18h] [ebp-8h] BYREF
  int v62; // [esp+1Ch] [ebp-4h] BYREF
  __int16 *v63; // [esp+2Ch] [ebp+Ch]
  int v64; // [esp+2Ch] [ebp+Ch]
  __int16 *v65; // [esp+2Ch] [ebp+Ch]
  int v66; // [esp+2Ch] [ebp+Ch]

  v4 = *((_WORD *)this + 2);
  if ( v4 < 0 )
    return v4;
  v5 = dword_4CCAAC;
  v6 = dword_4CCA98 * v4 + dword_4CCAAC;
  if ( *(this + 3) == 2 )
  {
    if ( a2 != 2 )
    {
      v10 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v6 + 2 * *this + 240);
      v11 = dword_4CD11C;
      *(_BYTE *)(v10 + 8) &= ~1u;
      --*(_WORD *)(v10 + 26);
      *(_DWORD *)(v10 + 36) = v11;
      --*(_WORD *)(v6 + 766);
      v12 = *(this + 10) == 3
          ? *(char *)(dword_4C4364 * *((__int16 *)this + 6) + dword_4C4378 + 10)
          : *(unsigned __int8 *)(v10 + 1256);
      --*(_WORD *)(v6 + 2 * v12 + 784);
      v5 = *((_DWORD *)this + 5);
      if ( v5 == *(_DWORD *)(*(_DWORD *)dword_870814 + 72 * *this + 24) )
        --*(_WORD *)(v10 + 28);
    }
  }
  else if ( a2 == 2 )
  {
    v7 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v6 + 2 * *this + 240);
    v8 = dword_4CD11C;
    *(_BYTE *)(v7 + 8) &= ~1u;
    *(_DWORD *)(v7 + 36) = v8;
    ++*(_WORD *)(v7 + 26);
    ++*(_WORD *)(v6 + 766);
    v9 = sub_483C00(a3) == 3
       ? *(char *)(sub_483C30(a3) * dword_4C4364 + dword_4C4378 + 10)
       : *(unsigned __int8 *)(v7 + 1256);
    ++*(_WORD *)(v6 + 2 * v9 + 784);
    v5 = *((_DWORD *)this + 5);
    if ( v5 == *(_DWORD *)(*(_DWORD *)dword_870814 + 72 * *this + 24) )
      ++*(_WORD *)(v7 + 28);
  }
  if ( *(this + 3) == 1 && a2 != 1 )
  {
    v5 = dword_4D10A8;
    *(_WORD *)(dword_4D1094 * *((__int16 *)this + 6) + dword_4D10A8 + 20) = -1;
    *((_WORD *)this + 14) = -1;
  }
  if ( a3 == -1 )
  {
    v13 = -1;
    *(this + 10) = -1;
  }
  else
  {
    v13 = *(_DWORD *)(v6 + 180) + a3 * *(_DWORD *)(v6 + 160);
    *(this + 10) = *(_BYTE *)(v13 + 11);
    LOWORD(v5) = *(_WORD *)(v13 + 12);
    *((_WORD *)this + 6) = v5;
  }
  LOBYTE(v4) = a2 - 1;
  switch ( a2 )
  {
    case 1:
      v57 = dword_4D10A8 + dword_4D1094 * *((__int16 *)this + 6);
      if ( *(this + 11) == 0xFF || *((_WORD *)this + 7) == 0xFFFF )
      {
        sub_42C290(&v60, &v59);
        v27 = sub_40C2E0(*((__int16 *)this + 2), v60, v59, *this);
        v51 = v27;
        if ( v27 == -1 )
        {
          v29 = sub_4640D0(v28) % 10;
          v54 = sub_4640D0(10) % 10;
          v52 = sub_4640D0(10) % 10;
          v30 = sub_4640D0(10);
          sub_42C450(v60 + v29 - v54, v59 + v52 - v30 % 10, 0, 3);
        }
        else
        {
          sub_40C3F0((__int16 *)(dword_4C4378 + v27 * dword_4C4364), &v60, &v59);
          if ( sub_42C450(v60, v59, 0, 3) )
            sub_421B20((int)this, *(__int16 *)(v51 * dword_4C4364 + dword_4C4378 + 8), *((_WORD *)this + 6));
        }
      }
      v31 = *(_DWORD *)(v6 + 180) + a3 * *(_DWORD *)(v6 + 160);
      sub_42C290(&v60, &v59);
      v32 = sub_42C4D0(v57);
      v50 = dword_4B32D4[2 * v32] + v59;
      v60 += dword_4B32D0[2 * v32];
      v59 = v50;
      v33 = sub_42BC50(*(__int16 *)(v57 + 14), v60, v50);
      v34 = *(unsigned __int8 *)(v31 + 8);
      if ( *((_WORD *)this + 3) == 0xFFFF )
      {
        if ( v33 )
          sub_483CE0(a3, 0, 32, &v61, &v62);
        else
          sub_483CE0(a3, 0, 16, &v61, &v62);
        v35 = sub_486310(418, v61, v62, v34, 0, 0, 0, 0, 0);
        *((_WORD *)this + 3) = v35;
        *(_BYTE *)(*(_DWORD *)(v6 + 160) * v35 + *(_DWORD *)(v6 + 180) + 11) = 4;
        *(_WORD *)(*(_DWORD *)(v6 + 160) * *((__int16 *)this + 3) + *(_DWORD *)(v6 + 180) + 12) = sub_420D50(this);
        v36 = sub_486310(416, v61, v62, v34, 46, 0, 0, 0, 0);
        *((_WORD *)this + 4) = v36;
        *(_BYTE *)(*(_DWORD *)(v6 + 160) * v36 + *(_DWORD *)(v6 + 180) + 11) = 5;
        *(_WORD *)(*(_DWORD *)(v6 + 160) * *((__int16 *)this + 4) + *(_DWORD *)(v6 + 180) + 12) = sub_420D50(this);
      }
      else
      {
        if ( v33 )
        {
          sub_483CE0(a3, 0, 32, &v61, &v62);
          sub_4866A0(*((__int16 *)this + 3), v61, v62, 0);
          sub_4866A0(*((__int16 *)this + 4), v61, v62, 46);
        }
        sub_486530(*((__int16 *)this + 3), 418, *this, 0, 0, 1);
        sub_4867D0(*((__int16 *)this + 3), v34);
        sub_4867D0(*((__int16 *)this + 4), v34);
      }
      v37 = word_4D10BA[94940 * ((char)(2 * *(this + 1)) >> 1)];
      if ( v37 >= 8 )
        v37 = 7;
      v38 = 2 * v37;
      if ( !sub_420D60(this) )
        ++v38;
      sub_4868E0(*((__int16 *)this + 4), v38);
      *(_WORD *)(v57 + 20) = sub_420D50(this);
      LOBYTE(v4) = *(this + 11);
      if ( (_BYTE)v4 == 3 )
      {
        v4 = sub_420D50(this);
        *(_WORD *)(dword_4C4364 * *((__int16 *)this + 7) + dword_4C4378 + 2) = v4;
        *(this + 3) = a2;
      }
      else
      {
        if ( (_BYTE)v4 != 6 )
          goto LABEL_83;
        v39 = sub_420D50(this);
        LOBYTE(v4) = sub_430AA0(v39);
        *(this + 3) = a2;
      }
      return v4;
    case 2:
      v40 = sub_4640D0(v5) % 4;
      v41 = *((_WORD *)this + 3);
      v58 = v40;
      if ( v41 != -1 )
      {
        sub_486530(v41, 417, *this, 0, 0, 1);
        sub_4867D0(*((__int16 *)this + 3), v58);
        sub_4866A0(*((__int16 *)this + 3), *(__int16 *)(v13 + 2), *(__int16 *)(v13 + 4), 6);
        v48 = word_4D10BA[94940 * ((char)(2 * *(this + 1)) >> 1)];
        if ( v48 >= 8 )
          v48 = 7;
        v66 = 2 * v48;
        if ( !sub_420D60(this) )
          ++v66;
        sub_4868E0(*((__int16 *)this + 4), v66);
        sub_4867D0(*((__int16 *)this + 4), v58);
        LOBYTE(v4) = sub_4866A0(*((__int16 *)this + 4), *(__int16 *)(v13 + 2), *(__int16 *)(v13 + 4), 41);
        goto LABEL_82;
      }
      v42 = *(_DWORD *)(v6 + 180) + a3 * *(_DWORD *)(v6 + 160);
      v43 = sub_486310(417, *(__int16 *)(v42 + 2), *(__int16 *)(v42 + 4), v40, 6, 0, 0, 0, 0);
      *((_WORD *)this + 3) = v43;
      *(_BYTE *)(*(_DWORD *)(v6 + 160) * v43 + *(_DWORD *)(v6 + 180) + 11) = 4;
      *(_WORD *)(*(_DWORD *)(v6 + 160) * *((__int16 *)this + 3) + *(_DWORD *)(v6 + 180) + 12) = sub_420D50(this);
      sub_4868E0(*((__int16 *)this + 3), *this);
      v44 = *(_DWORD *)(v6 + 180) + a3 * *(_DWORD *)(v6 + 160);
      v45 = sub_486310(416, *(__int16 *)(v44 + 2), *(__int16 *)(v44 + 4), v58, 41, 0, 0, 0, 0);
      *((_WORD *)this + 4) = v45;
      *(_BYTE *)(*(_DWORD *)(v6 + 160) * v45 + *(_DWORD *)(v6 + 180) + 11) = 5;
      *(_WORD *)(*(_DWORD *)(v6 + 160) * *((__int16 *)this + 4) + *(_DWORD *)(v6 + 180) + 12) = sub_420D50(this);
      v46 = word_4D10BA[94940 * ((char)(2 * *(this + 1)) >> 1)];
      if ( v46 >= 8 )
        v46 = 7;
      v47 = 2 * v46;
      if ( !sub_420D60(this) )
        ++v47;
      LOBYTE(v4) = sub_4868E0(*((__int16 *)this + 4), v47);
      *(this + 11) = -1;
      *(this + 3) = a2;
      return v4;
    case 3:
      v15 = dword_8703D0 + dword_8703BC * *((__int16 *)this + 6);
      v53 = dword_89E57C + dword_89E568 * *(__int16 *)(v15 + 28);
      v55 = sub_4640D0(v5) % 4;
      v16 = *((_WORD *)this + 3);
      if ( v16 == -1 )
      {
        v17 = sub_420D50(this);
        v18 = 0;
        v63 = (__int16 *)(v53 + 8);
        do
        {
          if ( *v63 == v17 )
            break;
          ++v63;
          ++v18;
        }
        while ( v18 < 4 );
        sub_483CE0(*(__int16 *)(v15 + 26), word_4B1174[2 * v18], word_4B1176[2 * v18], &v61, &v62);
        v19 = sub_486310(417, v61, v62, v55, 32, 0, 0, 0, 0);
        *((_WORD *)this + 3) = v19;
        *(_BYTE *)(*(_DWORD *)(v6 + 160) * v19 + *(_DWORD *)(v6 + 180) + 11) = 4;
        *(_WORD *)(*(_DWORD *)(v6 + 160) * *((__int16 *)this + 3) + *(_DWORD *)(v6 + 180) + 12) = sub_420D50(this);
        sub_4868E0(*((__int16 *)this + 3), *this);
        v20 = sub_486310(416, v61, v62, v55, 67, 0, 0, 0, 0);
        *((_WORD *)this + 4) = v20;
        *(_BYTE *)(*(_DWORD *)(v6 + 160) * v20 + *(_DWORD *)(v6 + 180) + 11) = 5;
        *(_WORD *)(*(_DWORD *)(v6 + 160) * *((__int16 *)this + 4) + *(_DWORD *)(v6 + 180) + 12) = sub_420D50(this);
        v21 = word_4D10BA[94940 * ((char)(2 * *(this + 1)) >> 1)];
        if ( v21 >= 8 )
          v21 = 7;
        v22 = 2 * v21;
        if ( !sub_420D60(this) )
          ++v22;
        sub_4868E0(*((__int16 *)this + 4), v22);
        goto LABEL_48;
      }
      sub_486530(v16, 417, *this, 0, 0, 1);
      sub_4867D0(*((__int16 *)this + 3), v55);
      v23 = word_4D10BA[94940 * ((char)(2 * *(this + 1)) >> 1)];
      if ( v23 >= 8 )
        v23 = 7;
      v64 = 2 * v23;
      if ( !sub_420D60(this) )
        ++v64;
      sub_4868E0(*((__int16 *)this + 4), v64);
      sub_4867D0(*((__int16 *)this + 4), v55);
      v56 = sub_420D50(this);
      v24 = 0;
      v25 = (__int16 *)(v15 + 8);
      v26 = v53 - v15;
      v65 = (__int16 *)(v15 + 8);
      break;
    case 4:
      v14 = sub_420D50(this);
      LOBYTE(v4) = sub_4345B0(v14);
      if ( *((__int16 *)this + 6) != dword_4B32BC )
        goto LABEL_82;
      LOBYTE(v4) = sub_43CAB0();
      *(this + 11) = -1;
      *(this + 3) = a2;
      return v4;
    case 5:
      v4 = *((_WORD *)this + 3);
      if ( v4 == -1 )
      {
LABEL_82:
        *(this + 11) = -1;
        goto LABEL_83;
      }
      sub_4864E0(v4);
      sub_4864E0(*((__int16 *)this + 4));
      *((_WORD *)this + 3) = -1;
      *(this + 11) = -1;
      *((_WORD *)this + 4) = -1;
      *((_WORD *)this + 2) = -1;
      *(this + 3) = a2;
      LOBYTE(v4) = -1;
      return v4;
    default:
LABEL_83:
      *(this + 3) = a2;
      return v4;
  }
  while ( *(__int16 *)((char *)v25 + v26) != -1 )
  {
LABEL_44:
    ++v24;
    v65 = ++v25;
    if ( v24 >= 4 )
      goto LABEL_47;
  }
  if ( *v25 != v56 )
  {
    v26 = v53 - v15;
    v25 = v65;
    goto LABEL_44;
  }
  *(_WORD *)(v53 + 2 * v24 + 8) = v56;
LABEL_47:
  sub_483CE0(*(__int16 *)(v15 + 26), word_4B1174[2 * v24], word_4B1176[2 * v24], &v61, &v62);
  sub_4866A0(*((__int16 *)this + 3), v61, v62, 32);
  sub_4866A0(*((__int16 *)this + 4), v61, v62, 67);
LABEL_48:
  LOBYTE(v4) = sub_486260(*((__int16 *)this + 3), 6, 0);
  *((_WORD *)this + 7) = -1;
  *(this + 11) = -1;
  *(this + 3) = a2;
  return v4;
}
