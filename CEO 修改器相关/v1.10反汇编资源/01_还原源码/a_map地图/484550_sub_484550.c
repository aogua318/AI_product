// 函数 0x484550  sub_484550  size=0x4F8  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_484550(int a1, int a2, int a3)
{
  int v3; // ebx
  int result; // eax
  __int16 *v5; // esi
  int v6; // edx
  int v7; // ecx
  unsigned __int16 *v8; // edi
  int v9; // ecx
  int i; // eax
  __int16 *v11; // eax
  int *v12; // eax
  char v13; // cl
  int v14; // eax
  int *v15; // eax
  __int16 v16; // cx
  __int16 v17; // dx
  int v18; // ecx
  __int16 v19; // cx
  __int16 v20; // dx
  __int16 v21; // cx
  __int16 v22; // cx
  __int16 v23; // cx
  __int16 v24; // dx
  __int16 v25; // cx
  __int16 v26; // dx
  __int16 v27; // ax
  int v28; // edx
  int v29; // esi
  int v30; // eax
  int v31; // edx
  _DWORD *v32; // edi
  int v33; // ecx
  int v34; // edx
  int v35; // esi
  int v36; // ebx
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  bool v40; // zf
  int v41; // edx
  int v42; // edi
  int v43; // ecx
  int v44; // edx
  unsigned int v45; // ecx
  int v46; // edx
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  int v52; // [esp+10h] [ebp-98h] BYREF
  int v53; // [esp+14h] [ebp-94h] BYREF
  int v54; // [esp+18h] [ebp-90h]
  int v55; // [esp+1Ch] [ebp-8Ch] BYREF
  unsigned int v56; // [esp+20h] [ebp-88h]
  int v57; // [esp+24h] [ebp-84h]
  int v58; // [esp+28h] [ebp-80h]
  int v59; // [esp+2Ch] [ebp-7Ch]
  int v60; // [esp+30h] [ebp-78h]
  int v61; // [esp+34h] [ebp-74h]
  int v62; // [esp+38h] [ebp-70h]
  int j; // [esp+3Ch] [ebp-6Ch]
  char Buffer[100]; // [esp+40h] [ebp-68h] BYREF

  v3 = a2;
  result = *(_DWORD *)(*(_DWORD *)(a2 + 136) + 4 * (a3 + a1 * *(_DWORD *)(a2 + 24)));
  dword_8F2AD4 = a2;
  if ( result != -1 )
  {
    while ( 1 )
    {
      if ( result < -1 )
      {
        sprintf(Buffer, "%s\nline%d", "a_map\\a_map.cpp", 756);
        MessageBoxA(hWnd, Buffer, "wrong objid", 0);
        exit(1);
      }
      v5 = (__int16 *)(*(_DWORD *)(v3 + 180) + result * *(_DWORD *)(v3 + 160));
      v6 = v5[1];
      v54 = *((_DWORD *)v5 + 5);
      v7 = v5[2];
      j = result;
      sub_4840A0((_DWORD *)v3, v6, v7, &v53, &v52);
      v8 = (unsigned __int16 *)(*(_DWORD *)(v3 + 148) + 10 * *v5);
      v9 = *((unsigned __int8 *)v8 + 6);
      for ( i = *((unsigned __int8 *)v5 + 8) + v9 * *(_DWORD *)(v3 + 20) / 4; i >= v9; i -= v9 )
        ;
      v61 = *v8 + v5[3] + i * *((unsigned __int8 *)v8 + 7);
      v11 = (__int16 *)sub_467760(*(_DWORD **)(v3 + 144), v61);
      v12 = sub_467100(v11, v53, v52 - *((unsigned __int8 *)v5 + 9));
      sub_464CE0(&dword_8F2AF0, v12);
      result = dword_8F2AD8;
      if ( dword_8F2AF0 < *(_DWORD *)(dword_8F2AD8 + 28)
        && dword_8F2AF4 < *(_DWORD *)(dword_8F2AD8 + 32)
        && dword_8F2AF8 > *(_DWORD *)(dword_8F2AD8 + 20)
        && dword_8F2AFC > *(_DWORD *)(dword_8F2AD8 + 24) )
      {
        v13 = *((_BYTE *)v8 + 6);
        v14 = *((unsigned __int8 *)v5 + 8);
        if ( v13 == 16 )
          v14 = (v14 + 1) >> 1;
        if ( v13 == 8 )
          v14 >>= 1;
        v15 = sub_483C60(a3, a1, *((unsigned __int8 *)v8 + 4), *((unsigned __int8 *)v8 + 5), v14);
        v16 = *((unsigned __int8 *)v5 + 9);
        HIWORD(v57) = v16 + v8[1];
        v55 = j;
        v56 = v61;
        LOWORD(v58) = v53;
        v17 = v52 - v16;
        LOWORD(v57) = v16;
        v18 = *(_DWORD *)(v3 + 20);
        HIWORD(v58) = v17;
        switch ( v18 )
        {
          case 0:
            v19 = *(_WORD *)v15;
            HIWORD(v59) = *((_WORD *)v15 + 2);
            v20 = *((_WORD *)v15 + 6);
            LOWORD(v59) = v19;
            v21 = *((_WORD *)v15 + 4);
            HIWORD(v60) = v20;
            goto LABEL_20;
          case 1:
            LOWORD(v59) = *((_WORD *)v15 + 2);
            v22 = *(_WORD *)(v3 + 24) - *(_WORD *)v15;
            HIWORD(v59) = *(_WORD *)(v3 + 24) - *((_WORD *)v15 + 4) - 1;
            LOWORD(v60) = *((_WORD *)v15 + 6);
            HIWORD(v60) = v22 - 1;
            break;
          case 2:
            v23 = *(_WORD *)(v3 + 24) - *(_WORD *)v15;
            LOWORD(v59) = *(_WORD *)(v3 + 24) - *((_WORD *)v15 + 4) - 1;
            v21 = v23 - 1;
            v24 = *(_WORD *)(v3 + 28) - *((_WORD *)v15 + 2) - 1;
            HIWORD(v59) = *(_WORD *)(v3 + 28) - *((_WORD *)v15 + 6) - 1;
            HIWORD(v60) = v24;
            goto LABEL_20;
          case 3:
            v25 = *(_WORD *)(v3 + 28) - *((_WORD *)v15 + 2);
            LOWORD(v59) = *(_WORD *)(v3 + 28) - *((_WORD *)v15 + 6) - 1;
            v26 = *(_WORD *)v15;
            v27 = *((_WORD *)v15 + 4);
            HIWORD(v59) = v26;
            v21 = v25 - 1;
            HIWORD(v60) = v27;
LABEL_20:
            LOWORD(v60) = v21;
            break;
          default:
            break;
        }
        v28 = dword_8F2AE8;
        v29 = dword_8F2AE8;
        v61 = dword_8F2AE8;
        v62 = dword_8F2AE8 - 1;
        if ( dword_8F2AE8 - 1 >= 0 )
        {
          v30 = 24 * (dword_8F2AE8 - 1);
          for ( j = v30; ; v30 = j )
          {
            if ( sub_483930(&v55, v30 + *(_DWORD *)ArgList) )
              v61 = v62;
            j -= 24;
            if ( --v62 < 0 )
              break;
          }
          v28 = dword_8F2AE8;
          v29 = v61;
        }
        if ( v28 + 1 < dword_8F2AE4 )
        {
          result = *(_DWORD *)ArgList;
        }
        else
        {
          v31 = 48 * dword_8F2AE4;
          dword_8F2AE4 *= 2;
          v32 = sub_466120(*(int *)ArgList, v31, "a_map\\a_map.cpp", 832);
          sub_4643C0("show_objs realloc %X -> %X", *(_DWORD *)ArgList, v32);
          v28 = dword_8F2AE8;
          result = (int)v32;
          *(_DWORD *)ArgList = v32;
        }
        if ( v29 != v28 )
        {
          memcpy_0((void *)(result + 24 * v29 + 24), (const void *)(result + 24 * v29), 24 * (v28 - v29));
          v28 = dword_8F2AE8;
          result = *(_DWORD *)ArgList;
        }
        v33 = 24 * v29;
        *(_DWORD *)(v33 + result) = v55;
        *(_DWORD *)(v33 + result + 4) = v56;
        *(_DWORD *)(v33 + result + 8) = v57;
        *(_DWORD *)(v33 + result + 12) = v58;
        *(_DWORD *)(v33 + result + 16) = v59;
        v34 = v28 + 1;
        v35 = v29 + 1;
        *(_DWORD *)(v33 + result + 20) = v60;
        dword_8F2AE8 = v34;
        if ( v35 != v34 )
        {
          v62 = v35;
          if ( v35 < v34 )
          {
            v36 = v33;
            v37 = 24 * v35;
            for ( j = 24 * v35; ; v37 = j )
            {
              v38 = sub_483930((_WORD *)(v37 + result), v36 + result);
              v39 = j;
              v40 = v38 == 0;
              result = *(_DWORD *)ArgList;
              if ( !v40 )
              {
                v41 = *(_DWORD *)(j + *(_DWORD *)ArgList + 8);
                v42 = *(_DWORD *)(j + *(_DWORD *)ArgList);
                v56 = *(_DWORD *)(j + *(_DWORD *)ArgList + 4);
                v58 = *(_DWORD *)(j + *(_DWORD *)ArgList + 12);
                v43 = *(_DWORD *)(j + *(_DWORD *)ArgList + 20);
                v57 = v41;
                v44 = *(_DWORD *)(j + *(_DWORD *)ArgList + 16);
                v60 = v43;
                v59 = v44;
                memcpy_0(
                  (void *)(v36 + *(_DWORD *)ArgList + 24),
                  (const void *)(v36 + *(_DWORD *)ArgList),
                  24 * (v62 - v61));
                result = *(_DWORD *)ArgList;
                v45 = v56;
                v46 = v57;
                ++v61;
                *(_DWORD *)(v36 + *(_DWORD *)ArgList) = v42;
                *(_DWORD *)(v36 + result + 4) = v45;
                v47 = v58;
                *(_DWORD *)(v36 + result + 8) = v46;
                v48 = v59;
                *(_DWORD *)(v36 + result + 12) = v47;
                v49 = v60;
                *(_DWORD *)(v36 + result + 16) = v48;
                *(_DWORD *)(v36 + result + 20) = v49;
                v36 += 24;
              }
              ++v62;
              j = v39 + 24;
              if ( v62 >= dword_8F2AE8 )
                break;
            }
            v3 = a2;
          }
        }
      }
      if ( v54 == -1 )
        break;
      result = v54;
    }
  }
  return result;
}
