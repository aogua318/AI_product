// 函数 0x471f00  sub_471F00  size=0x40E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_471F00@<eax>(int result@<eax>, int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // edx
  unsigned __int16 v8; // si
  __int16 v9; // dx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  __int16 v14; // dx
  int v15; // ecx
  int v16; // edx
  int v17; // ebx
  int v18; // esi
  int v19; // ecx
  __int16 v20; // di
  int v21; // ecx
  int v22; // ebx
  int v23; // ecx
  unsigned int v24; // edx
  int v25; // esi
  int v26; // edi
  int v27; // ecx
  unsigned __int16 v28; // di
  __int16 v29; // dx
  int v30; // ecx
  int v31; // edx
  __int16 v32; // di
  int v33; // edi
  unsigned int v34; // edx
  int v35; // ecx
  __int16 v36; // si
  int v37; // ecx
  int v38; // ebx
  int v39; // edx
  int v40; // edx
  int v41; // ecx
  unsigned __int16 v42; // si
  __int16 v43; // dx
  int v44; // ecx
  int v45; // edx
  unsigned __int16 v46; // [esp+Ch] [ebp-10h]
  int v47; // [esp+Ch] [ebp-10h]
  int v48; // [esp+Ch] [ebp-10h]
  unsigned int v49; // [esp+10h] [ebp-Ch]
  int v50; // [esp+14h] [ebp-8h]
  int v51; // [esp+14h] [ebp-8h]
  int v52; // [esp+18h] [ebp-4h]
  unsigned int v53; // [esp+18h] [ebp-4h]
  int v54; // [esp+24h] [ebp+8h]

  v3 = a2;
  v4 = 0;
  if ( *(_DWORD *)(result + 5784) )
  {
    while ( 1 )
    {
      v5 = *(unsigned __int8 *)(v4 + *(_DWORD *)(result + 5776));
      v52 = *(unsigned __int16 *)(*(_DWORD *)(result + 5788) + 2 * v4);
      v6 = *(_DWORD *)(result + 5812);
      v49 = v4 + 1;
      if ( !*(_WORD *)(*(_DWORD *)(result + 5788) + 2 * v4) )
        break;
      v13 = (unsigned __int8)byte_4A59F0[v5];
      v51 = *(unsigned __int16 *)(v3 + 4 * v13 + 1030);
      if ( v6 <= 16 - v51 )
      {
        *(_WORD *)(result + 5808) |= *(_WORD *)(a2 + 4 * v13 + 1028) << v6;
        *(_DWORD *)(result + 5812) = v51 + v6;
      }
      else
      {
        v46 = *(_WORD *)(a2 + 4 * v13 + 1028);
        v14 = v46 << v6;
        v15 = *(_DWORD *)(result + 8);
        *(_WORD *)(result + 5808) |= v14;
        *(_BYTE *)(v15 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
        *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
        v16 = *(_DWORD *)(result + 5812);
        ++*(_DWORD *)(result + 20);
        *(_DWORD *)(result + 5812) = v16 + v51 - 16;
        *(_WORD *)(result + 5808) = v46 >> (16 - v16);
      }
      v17 = dword_4A51A8[v13];
      v47 = v17;
      if ( v17 )
      {
        v18 = v5 - dword_4A5AF0[v13];
        v19 = *(_DWORD *)(result + 5812);
        if ( v19 <= 16 - v17 )
        {
          *(_WORD *)(result + 5808) |= (_WORD)v18 << v19;
          v23 = v17 + v19;
        }
        else
        {
          v20 = (_WORD)v18 << v19;
          v21 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v20;
          *(_BYTE *)(v21 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v22 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          v23 = v22 + v47 - 16;
          *(_WORD *)(result + 5808) = (unsigned __int16)v18 >> (16 - v22);
        }
        *(_DWORD *)(result + 5812) = v23;
      }
      v24 = v52 - 1;
      v53 = v24;
      if ( v24 >= 0x100 )
        v25 = (unsigned __int8)byte_4A58F0[v24 >> 7];
      else
        v25 = (unsigned __int8)byte_4A57F0[v24];
      v26 = *(unsigned __int16 *)(a3 + 4 * v25 + 2);
      v27 = *(_DWORD *)(result + 5812);
      v48 = v26;
      if ( v27 <= 16 - v26 )
      {
        *(_WORD *)(result + 5808) |= *(_WORD *)(a3 + 4 * v25) << v27;
        *(_DWORD *)(result + 5812) = v26 + v27;
      }
      else
      {
        v28 = *(_WORD *)(a3 + 4 * v25);
        v29 = v28 << v27;
        v30 = *(_DWORD *)(result + 8);
        *(_WORD *)(result + 5808) |= v29;
        *(_BYTE *)(v30 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
        *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
        v31 = *(_DWORD *)(result + 5812);
        ++*(_DWORD *)(result + 20);
        v32 = v28 >> (16 - v31);
        *(_DWORD *)(result + 5812) = v31 + v48 - 16;
        v24 = v53;
        *(_WORD *)(result + 5808) = v32;
      }
      v33 = dword_4A5230[v25];
      v3 = a2;
      if ( v33 )
      {
        v34 = v24 - dword_4A5B68[v25];
        v35 = *(_DWORD *)(result + 5812);
        if ( v35 > 16 - v33 )
        {
          v36 = (_WORD)v34 << v35;
          v37 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v36;
          *(_BYTE *)(v37 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v38 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          *(_WORD *)(result + 5808) = (unsigned __int16)v34 >> (16 - v38);
          v39 = v38 + v33 - 16;
          v3 = a2;
          *(_DWORD *)(result + 5812) = v39;
          goto LABEL_27;
        }
        *(_WORD *)(result + 5808) |= (_WORD)v34 << v35;
        v12 = v33 + v35;
        goto LABEL_26;
      }
LABEL_27:
      if ( v49 >= *(_DWORD *)(result + 5784) )
        goto LABEL_28;
      v4 = v49;
    }
    v7 = *(unsigned __int16 *)(v3 + 4 * v5 + 2);
    v50 = v7;
    if ( v6 > 16 - v7 )
    {
      v8 = *(_WORD *)(v3 + 4 * v5);
      v9 = v8 << v6;
      v10 = *(_DWORD *)(result + 8);
      *(_WORD *)(result + 5808) |= v9;
      *(_BYTE *)(v10 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
      *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
      v11 = *(_DWORD *)(result + 5812);
      ++*(_DWORD *)(result + 20);
      *(_DWORD *)(result + 5812) = v11 + v50 - 16;
      *(_WORD *)(result + 5808) = v8 >> (16 - v11);
      goto LABEL_27;
    }
    *(_WORD *)(result + 5808) |= *(_WORD *)(v3 + 4 * v5) << v6;
    v12 = v7 + v6;
LABEL_26:
    *(_DWORD *)(result + 5812) = v12;
    goto LABEL_27;
  }
LABEL_28:
  v40 = *(unsigned __int16 *)(v3 + 1026);
  v41 = *(_DWORD *)(result + 5812);
  v54 = v40;
  if ( v41 <= 16 - v40 )
  {
    *(_WORD *)(result + 5808) |= *(_WORD *)(v3 + 1024) << v41;
    *(_DWORD *)(result + 5812) = v40 + v41;
  }
  else
  {
    v42 = *(_WORD *)(v3 + 1024);
    v43 = v42 << v41;
    v44 = *(_DWORD *)(result + 8);
    *(_WORD *)(result + 5808) |= v43;
    *(_BYTE *)(v44 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
    *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
    v45 = *(_DWORD *)(result + 5812);
    ++*(_DWORD *)(result + 20);
    *(_DWORD *)(result + 5812) = v45 + v54 - 16;
    *(_WORD *)(result + 5808) = v42 >> (16 - v45);
  }
  *(_DWORD *)(result + 5804) = *(unsigned __int16 *)(v3 + 1026);
  return result;
}
