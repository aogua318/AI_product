// 函数 0x471730  sub_471730  size=0x57B  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_471730@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebx
  int v5; // edx
  int v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // ecx
  unsigned __int16 v11; // si
  __int16 v12; // dx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  bool v16; // zf
  int v17; // ecx
  __int16 v18; // dx
  int v19; // ecx
  __int16 v20; // di
  __int16 v21; // di
  int v22; // ecx
  int v23; // ecx
  __int16 v24; // dx
  int v25; // ecx
  __int16 v26; // di
  int v27; // ecx
  unsigned __int16 v28; // dx
  __int16 v29; // dx
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // ecx
  __int16 v34; // dx
  int v35; // ecx
  __int16 v36; // di
  __int16 v37; // di
  int v38; // ecx
  int v39; // ecx
  unsigned __int16 v40; // dx
  __int16 v41; // dx
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  __int16 v45; // dx
  int v46; // ecx
  __int16 v47; // di
  __int16 v48; // di
  int v49; // ecx
  int v50; // ecx
  unsigned __int16 v51; // dx
  __int16 v52; // dx
  int v53; // ecx
  int v54; // edx
  int v55; // [esp+Ch] [ebp-1Ch]
  int i; // [esp+10h] [ebp-18h]
  int v57; // [esp+14h] [ebp-14h]
  unsigned __int16 v58; // [esp+14h] [ebp-14h]
  unsigned __int16 v59; // [esp+14h] [ebp-14h]
  unsigned __int16 v60; // [esp+14h] [ebp-14h]
  unsigned __int16 v61; // [esp+14h] [ebp-14h]
  unsigned __int16 v62; // [esp+14h] [ebp-14h]
  unsigned __int16 v63; // [esp+14h] [ebp-14h]
  unsigned __int16 v64; // [esp+14h] [ebp-14h]
  unsigned __int16 *v65; // [esp+18h] [ebp-10h]
  int v66; // [esp+1Ch] [ebp-Ch]
  int v67; // [esp+20h] [ebp-8h]
  int v68; // [esp+20h] [ebp-8h]
  int v69; // [esp+20h] [ebp-8h]
  int v70; // [esp+20h] [ebp-8h]
  int v71; // [esp+20h] [ebp-8h]
  int v72; // [esp+24h] [ebp-4h]

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0;
  v57 = -1;
  v66 = v4;
  v7 = 7;
  v67 = 4;
  if ( !v4 )
  {
    v7 = 138;
    v67 = 3;
  }
  if ( a3 >= 0 )
  {
    v65 = (unsigned __int16 *)(a2 + 6);
    for ( i = a3 + 1; i; --i )
    {
      v8 = v66;
      ++v5;
      v55 = v66;
      v66 = *v65;
      v72 = v5;
      if ( v5 < v7 && v8 == *v65 )
        goto LABEL_44;
      if ( v5 < v67 )
      {
        do
        {
          v9 = *(unsigned __int16 *)(result + 4 * v8 + 2678);
          v10 = *(_DWORD *)(result + 5812);
          if ( v10 <= 16 - v9 )
          {
            *(_WORD *)(result + 5808) |= *(_WORD *)(result + 4 * v8 + 2676) << v10;
            v15 = v9 + v10;
          }
          else
          {
            v11 = *(_WORD *)(result + 4 * v8 + 2676);
            v12 = v11 << v10;
            v13 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5808) |= v12;
            *(_BYTE *)(v13 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
            v14 = *(_DWORD *)(result + 5812);
            ++*(_DWORD *)(result + 20);
            v15 = v14 + v9 - 16;
            *(_WORD *)(result + 5808) = v11 >> (16 - v14);
            v8 = v55;
          }
          v16 = v72-- == 1;
          *(_DWORD *)(result + 5812) = v15;
        }
        while ( !v16 );
        goto LABEL_39;
      }
      if ( v8 )
      {
        if ( v8 != v57 )
        {
          v68 = *(unsigned __int16 *)(result + 4 * v8 + 2678);
          v17 = *(_DWORD *)(result + 5812);
          if ( v17 <= 16 - v68 )
          {
            v21 = *(_WORD *)(result + 4 * v8 + 2676) << v17;
            v22 = *(_DWORD *)(result + 5812);
            *(_WORD *)(result + 5808) |= v21;
            *(_DWORD *)(result + 5812) = v68 + v22;
          }
          else
          {
            v58 = *(_WORD *)(result + 4 * v8 + 2676);
            v18 = v58 << v17;
            v19 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5808) |= v18;
            *(_BYTE *)(v19 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
            v5 = *(_DWORD *)(result + 5812);
            ++*(_DWORD *)(result + 20);
            v20 = v58 >> (16 - v5);
            *(_DWORD *)(result + 5812) = v5 + v68 - 16;
            LOWORD(v5) = v72;
            *(_WORD *)(result + 5808) = v20;
          }
          LOWORD(v5) = v5 - 1;
          LOWORD(v72) = v5;
        }
        v69 = *(unsigned __int16 *)(result + 2742);
        v23 = *(_DWORD *)(result + 5812);
        if ( v23 <= 16 - v69 )
        {
          *(_WORD *)(result + 5808) |= *(_WORD *)(result + 2740) << v23;
          *(_DWORD *)(result + 5812) = v69 + v23;
        }
        else
        {
          v59 = *(_WORD *)(result + 2740);
          v24 = v59 << v23;
          v25 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v24;
          *(_BYTE *)(v25 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v5 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          v26 = v59 >> (16 - v5);
          *(_DWORD *)(result + 5812) = v5 + v69 - 16;
          LOWORD(v5) = v72;
          *(_WORD *)(result + 5808) = v26;
        }
        v27 = *(_DWORD *)(result + 5812);
        v28 = v5 - 3;
        if ( v27 > 14 )
        {
          v60 = v28;
          v29 = v28 << v27;
          v30 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v29;
          *(_BYTE *)(v30 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v31 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          *(_DWORD *)(result + 5812) = v31 - 14;
          *(_WORD *)(result + 5808) = v60 >> (16 - v31);
          goto LABEL_39;
        }
        *(_WORD *)(result + 5808) |= v28 << v27;
        v32 = v27 + 2;
      }
      else if ( v5 > 10 )
      {
        v71 = *(unsigned __int16 *)(result + 2750);
        v44 = *(_DWORD *)(result + 5812);
        if ( v44 <= 16 - v71 )
        {
          v48 = *(_WORD *)(result + 2748) << v44;
          v49 = *(_DWORD *)(result + 5812);
          *(_WORD *)(result + 5808) |= v48;
          *(_DWORD *)(result + 5812) = v71 + v49;
        }
        else
        {
          v63 = *(_WORD *)(result + 2748);
          v45 = v63 << v44;
          v46 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v45;
          *(_BYTE *)(v46 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v5 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          v47 = v63 >> (16 - v5);
          *(_DWORD *)(result + 5812) = v5 + v71 - 16;
          LOWORD(v5) = v72;
          *(_WORD *)(result + 5808) = v47;
        }
        v50 = *(_DWORD *)(result + 5812);
        v51 = v5 - 11;
        if ( v50 > 9 )
        {
          v64 = v51;
          v52 = v51 << v50;
          v53 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v52;
          *(_BYTE *)(v53 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v54 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          *(_DWORD *)(result + 5812) = v54 - 9;
          *(_WORD *)(result + 5808) = v64 >> (16 - v54);
          goto LABEL_39;
        }
        *(_WORD *)(result + 5808) |= v51 << v50;
        v32 = v50 + 7;
      }
      else
      {
        v70 = *(unsigned __int16 *)(result + 2746);
        v33 = *(_DWORD *)(result + 5812);
        if ( v33 <= 16 - v70 )
        {
          v37 = *(_WORD *)(result + 2744) << v33;
          v38 = *(_DWORD *)(result + 5812);
          *(_WORD *)(result + 5808) |= v37;
          *(_DWORD *)(result + 5812) = v70 + v38;
        }
        else
        {
          v61 = *(_WORD *)(result + 2744);
          v34 = v61 << v33;
          v35 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v34;
          *(_BYTE *)(v35 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v5 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          v36 = v61 >> (16 - v5);
          *(_DWORD *)(result + 5812) = v5 + v70 - 16;
          LOWORD(v5) = v72;
          *(_WORD *)(result + 5808) = v36;
        }
        v39 = *(_DWORD *)(result + 5812);
        v40 = v5 - 3;
        if ( v39 > 13 )
        {
          v62 = v40;
          v41 = v40 << v39;
          v42 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5808) |= v41;
          *(_BYTE *)(v42 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
          v43 = *(_DWORD *)(result + 5812);
          ++*(_DWORD *)(result + 20);
          *(_DWORD *)(result + 5812) = v43 - 13;
          *(_WORD *)(result + 5808) = v62 >> (16 - v43);
          goto LABEL_39;
        }
        *(_WORD *)(result + 5808) |= v40 << v39;
        v32 = v39 + 3;
      }
      *(_DWORD *)(result + 5812) = v32;
LABEL_39:
      v5 = 0;
      v57 = v8;
      if ( v66 )
      {
        if ( v8 == v66 )
        {
          v7 = 6;
          v67 = 3;
        }
        else
        {
          v7 = 7;
          v67 = 4;
        }
      }
      else
      {
        v7 = 138;
        v67 = 3;
      }
LABEL_44:
      v65 += 2;
    }
  }
  return result;
}
