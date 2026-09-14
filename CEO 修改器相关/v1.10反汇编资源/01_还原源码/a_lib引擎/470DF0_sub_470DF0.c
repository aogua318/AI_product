// 函数 0x470df0  sub_470DF0  size=0x381  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_470DF0(unsigned __int8 **a1, int a2)
{
  unsigned int *v2; // eax
  unsigned int v3; // eax
  int v4; // edi
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // ecx
  int v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // ecx
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // ecx
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // ecx
  unsigned __int8 *v25; // eax
  unsigned __int8 *v27; // eax
  unsigned __int8 *v28; // edx
  unsigned __int8 *v29; // ecx
  unsigned __int8 *v30; // edx
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // ecx
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // ecx
  unsigned __int8 *v36; // eax
  unsigned __int8 *v37; // eax
  unsigned __int8 *v38; // ecx
  unsigned __int8 *v39; // eax
  unsigned __int8 *v40; // eax

  if ( !a1 )
    return -2;
  v2 = (unsigned int *)a1[7];
  if ( !v2 || !*a1 )
    return -2;
  v3 = *v2;
  v4 = -5;
  while ( 2 )
  {
    switch ( v3 )
    {
      case 0u:
        v5 = a1[1];
        if ( !v5 )
          return v4;
        ++a1[2];
        v6 = a1[7];
        a1[1] = v5 - 1;
        v7 = **a1;
        *((_DWORD *)v6 + 1) = v7;
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        if ( (v7 & 0xF) != 8 )
        {
          *(_DWORD *)a1[7] = 13;
          v8 = a1[7];
          a1[6] = "unknown compression method";
          *((_DWORD *)v8 + 1) = 5;
          goto LABEL_35;
        }
        v9 = a1[7];
        if ( (unsigned int)((*((_DWORD *)v9 + 1) >> 4) + 8) > *((_DWORD *)v9 + 4) )
        {
          *(_DWORD *)v9 = 13;
          a1[6] = "invalid window size";
          goto LABEL_34;
        }
        *(_DWORD *)v9 = 1;
        goto LABEL_12;
      case 1u:
LABEL_12:
        v10 = a1[1];
        if ( !v10 )
          return v4;
        ++a1[2];
        a1[1] = v10 - 1;
        v11 = *(*a1)++;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        if ( (v11 + (*((_DWORD *)a1[7] + 1) << 8)) % 0x1Fu )
        {
          *(_DWORD *)a1[7] = 13;
          a1[6] = "incorrect header check";
LABEL_34:
          *((_DWORD *)a1[7] + 1) = 5;
LABEL_35:
          v3 = *(_DWORD *)a1[7];
          if ( v3 > 0xD )
            return -2;
          continue;
        }
        if ( (v11 & 0x20) == 0 )
        {
          *(_DWORD *)a1[7] = 7;
          goto LABEL_35;
        }
        *(_DWORD *)a1[7] = 2;
LABEL_38:
        v27 = a1[1];
        if ( !v27 )
          return v4;
        v28 = *a1;
        ++a1[2];
        v29 = a1[7];
        a1[1] = v27 - 1;
        *((_DWORD *)v29 + 2) = *v28 << 24;
        v30 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        *(_DWORD *)v30 = 3;
LABEL_40:
        v31 = a1[1];
        if ( !v31 )
          return v4;
        v32 = *a1;
        ++a1[2];
        a1[1] = v31 - 1;
        *((_DWORD *)a1[7] + 2) += *v32 << 16;
        v33 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        *(_DWORD *)v33 = 4;
LABEL_42:
        v34 = a1[1];
        if ( !v34 )
          return v4;
        v35 = *a1;
        ++a1[2];
        a1[1] = v34 - 1;
        *((_DWORD *)a1[7] + 2) += *v35 << 8;
        v36 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        *(_DWORD *)v36 = 5;
LABEL_44:
        v37 = a1[1];
        if ( !v37 )
          return v4;
        v38 = *a1;
        ++a1[2];
        a1[1] = v37 - 1;
        *((_DWORD *)a1[7] + 2) += *v38;
        v39 = a1[7];
        ++*a1;
        a1[12] = (unsigned __int8 *)*((_DWORD *)v39 + 2);
        *(_DWORD *)v39 = 6;
        return 2;
      case 2u:
        goto LABEL_38;
      case 3u:
        goto LABEL_40;
      case 4u:
        goto LABEL_42;
      case 5u:
        goto LABEL_44;
      case 6u:
        *(_DWORD *)a1[7] = 13;
        v40 = a1[7];
        a1[6] = "need dictionary";
        *((_DWORD *)v40 + 1) = 0;
        return -2;
      case 7u:
        v12 = sub_472F30(*((void **)a1[7] + 5), (int)a1, v4);
        v4 = v12;
        if ( v12 == -3 )
        {
          *(_DWORD *)a1[7] = 13;
          *((_DWORD *)a1[7] + 1) = 0;
          goto LABEL_35;
        }
        if ( !v12 )
          v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        if ( v4 != 1 )
          return v4;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        sub_472DF0(*((_DWORD *)a1[7] + 5), a1, a1[7] + 4);
        v13 = a1[7];
        if ( *((_DWORD *)v13 + 3) )
        {
          *(_DWORD *)v13 = 12;
          goto LABEL_35;
        }
        *(_DWORD *)v13 = 8;
LABEL_25:
        v14 = a1[1];
        if ( !v14 )
          return v4;
        ++a1[2];
        v15 = a1[7];
        a1[1] = v14 - 1;
        *((_DWORD *)v15 + 2) = **a1 << 24;
        v16 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        *(_DWORD *)v16 = 9;
LABEL_27:
        v17 = a1[1];
        if ( !v17 )
          return v4;
        v18 = *a1;
        ++a1[2];
        a1[1] = v17 - 1;
        *((_DWORD *)a1[7] + 2) += *v18 << 16;
        v19 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        *(_DWORD *)v19 = 10;
LABEL_29:
        v20 = a1[1];
        if ( !v20 )
          return v4;
        v21 = *a1;
        ++a1[2];
        a1[1] = v20 - 1;
        *((_DWORD *)a1[7] + 2) += *v21 << 8;
        v22 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        *(_DWORD *)v22 = 11;
LABEL_31:
        v23 = a1[1];
        if ( !v23 )
          return v4;
        v24 = *a1;
        ++a1[2];
        a1[1] = v23 - 1;
        *((_DWORD *)a1[7] + 2) += *v24;
        v25 = a1[7];
        ++*a1;
        v4 = a2 != 4 ? 0 : 0xFFFFFFFB;
        if ( *((_DWORD *)v25 + 1) == *((_DWORD *)v25 + 2) )
        {
          *(_DWORD *)a1[7] = 12;
          return 1;
        }
        *(_DWORD *)v25 = 13;
        a1[6] = "incorrect data check";
        goto LABEL_34;
      case 8u:
        goto LABEL_25;
      case 9u:
        goto LABEL_27;
      case 0xAu:
        goto LABEL_29;
      case 0xBu:
        goto LABEL_31;
      case 0xCu:
        return 1;
      case 0xDu:
        return -3;
      default:
        return -2;
    }
  }
}
