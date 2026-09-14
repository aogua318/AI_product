// 函数 0x432b20  sub_432B20  size=0x39F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_432B20()
{
  char *v0; // eax
  char v1; // cl
  int v2; // esi
  char *v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // eax
  int v7; // eax
  int v8; // esi
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  int v12; // eax
  unsigned __int8 *v13; // edi
  char *v14; // eax
  int v15; // edx
  char v16; // cl
  char *v17; // eax
  int v18; // edx
  char v19; // cl
  char *v20; // eax
  char *v21; // edx
  char v22; // cl
  int v23; // esi
  _WORD *v24; // ebx
  char *v25; // eax
  char *v26; // edx
  char v27; // cl
  __int16 v28; // ax
  char *v29; // eax
  char *v30; // edx
  char v31; // cl
  int v32; // eax
  int v33; // edx
  char *v34; // eax
  char *v35; // edx
  char v36; // cl
  int v37; // edx
  int v38; // esi
  int v39; // ecx
  int v40; // eax
  __int16 *v41; // edx
  int v42; // eax
  _WORD *v43; // ecx
  int v45; // [esp-4h] [ebp-440h]
  int v46; // [esp+10h] [ebp-42Ch]
  int *v47; // [esp+14h] [ebp-428h]
  _BYTE v48[12]; // [esp+18h] [ebp-424h] BYREF
  int v49; // [esp+24h] [ebp-418h]
  int i; // [esp+28h] [ebp-414h]
  char String[1024]; // [esp+2Ch] [ebp-410h] BYREF
  int v52; // [esp+438h] [ebp-4h]

  sub_464410(v48);
  v52 = 0;
  v0 = (char *)sub_47C740("data\\product2.csv");
  if ( sub_464420(v0) )
  {
    v1 = 0;
    v2 = 0;
    for ( dword_870820 = 0; v2 < v49; ++v2 )
    {
      v3 = (char *)sub_4646A0(0, v2);
      v4 = (char *)(String - v3);
      do
      {
        v5 = *v3;
        v3[(_DWORD)v4] = *v3;
        ++v3;
      }
      while ( v5 );
      if ( sub_438150(String) )
      {
        v6 = atoi(String);
        v1 = dword_870820;
        v7 = v6 + 1;
        if ( v7 > dword_870820 )
        {
          v1 = v7;
          dword_870820 = v7;
        }
      }
      else
      {
        v1 = dword_870820;
      }
    }
    v8 = 0;
    *(_DWORD *)dword_87081C = sub_465E40(116 * v1, (int)"product_type.cpp", 208);
    for ( i = 0; v8 < v49; i = v8 )
    {
      v9 = (char *)sub_4646A0(0, v8);
      v10 = (char *)(String - v9);
      do
      {
        v11 = *v9;
        v9[(_DWORD)v10] = *v9;
        ++v9;
      }
      while ( v11 );
      if ( sub_438150(String) )
      {
        v12 = atoi(String);
        v13 = (unsigned __int8 *)(*(_DWORD *)dword_87081C + 116 * v12);
        v46 = v12;
        *((_DWORD *)v13 + 1) = v12;
        v13[1] = sub_4646D0(1, v8);
        v14 = (char *)sub_4646A0(2, v8);
        v15 = v13 - (unsigned __int8 *)v14;
        do
        {
          v16 = *v14;
          v14[v15 + 8] = *v14;
          ++v14;
        }
        while ( v16 );
        v17 = (char *)sub_4646A0(3, v8);
        v18 = v13 - (unsigned __int8 *)v17;
        do
        {
          v19 = *v17;
          v17[v18 + 52] = *v17;
          ++v17;
        }
        while ( v19 );
        v20 = (char *)sub_4646A0(4, v8);
        v21 = (char *)(String - v20);
        do
        {
          v22 = *v20;
          v20[(_DWORD)v21] = *v20;
          ++v20;
        }
        while ( v22 );
        *v13 = sub_4298F0(String);
        v23 = 6;
        v24 = v13 + 44;
        v47 = (int *)(v13 + 28);
        do
        {
          v25 = (char *)sub_4646A0(v23 - 1, i);
          v26 = (char *)(String - v25);
          do
          {
            v27 = *v25;
            v25[(_DWORD)v26] = *v25;
            ++v25;
          }
          while ( v27 );
          v28 = atoi(String);
          v45 = i;
          *(v24 - 12) = v28;
          v29 = (char *)sub_4646A0(v23, v45);
          v30 = (char *)(String - v29);
          do
          {
            v31 = *v29;
            v29[(_DWORD)v30] = *v29;
            ++v29;
          }
          while ( v31 );
          v32 = atoi(String);
          v33 = i;
          *v47 = v32;
          v34 = (char *)sub_4646A0(v23 + 1, v33);
          v35 = (char *)(String - v34);
          do
          {
            v36 = *v34;
            v34[(_DWORD)v35] = *v34;
            ++v34;
          }
          while ( v36 );
          ++v47;
          *v24 = atoi(String);
          v23 += 3;
          ++v24;
        }
        while ( v23 < 18 );
        v37 = *(_DWORD *)dword_4D0C94 + 68 * *v13;
        v38 = *(_DWORD *)dword_870814 + 72 * v13[1];
        v39 = *(__int16 *)(v37 + 64);
        v40 = 0;
        if ( v39 > 0 )
        {
          v41 = (__int16 *)(v37 + 24);
          while ( *v41 != v46 )
          {
            ++v40;
            ++v41;
            if ( v40 >= v39 )
              goto LABEL_38;
          }
          v13[2] = v40;
          v42 = 0;
          v43 = (_WORD *)(v38 + 16);
          while ( *v43 != 0xFFFF )
          {
            ++v42;
            ++v43;
            if ( v42 >= 4 )
              goto LABEL_38;
          }
          *(_WORD *)(v38 + 2 * v42 + 16) = v46;
        }
LABEL_38:
        v8 = i;
      }
      ++v8;
    }
    v52 = -1;
    sub_464B50(v48);
    return 1;
  }
  else
  {
    v52 = -1;
    sub_464B50(v48);
    return 0;
  }
}
