// 函数 0x401fb0  sub_401FB0  size=0x40A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_401FB0(int a1)
{
  char *v1; // esi
  int v2; // eax
  int *v3; // ebx
  int v4; // edi
  double v5; // st6
  double v6; // st5
  double v7; // st4
  bool v8; // c0
  bool v9; // c3
  double v10; // st5
  double v11; // st5
  double v12; // st3
  double v13; // st2
  double v14; // st4
  double v15; // st7
  double v16; // st7
  bool v17; // c0
  double v18; // st5
  double v19; // st4
  double v20; // st6
  double v21; // st7
  double v22; // rt0
  double v23; // st5
  double v24; // st7
  double v25; // st5
  bool v26; // c0
  bool v27; // c3
  double v28; // st5
  double v29; // st6
  double v30; // st7
  int v31; // ecx
  double v32; // st7
  double v33; // st6
  int v34; // ebx
  double v35; // st5
  double v36; // st3
  double v37; // st2
  double v38; // st2
  double v39; // st7
  double v40; // st4
  double v41; // st4
  double v42; // st5
  double v43; // st6
  bool v44; // c0
  double v45; // rt2
  double v46; // st5
  double v47; // st5
  int v48; // ecx
  int v49; // [esp+10h] [ebp-8h]

  v1 = (char *)(dword_4CC8D0 + a1 * dword_4CC8BC);
  v2 = *v1;
  v3 = (int *)((char *)dword_870824 + 112 * v2);
  v49 = *(_DWORD *)dword_870814 + 72 * v2;
  if ( v1[10] == 2 )
  {
    if ( sub_415A00(dword_4CC8D0 + a1 * dword_4CC8BC) )
    {
      v31 = *(_DWORD *)(v49 + 24);
      v32 = (double)*v3 * 0.00390625;
      v33 = v32;
      v34 = *((_DWORD *)v1 + 4);
      v35 = (double)v34;
      v36 = (double)(*((_DWORD *)v1 + 317) / v31);
      if ( v36 <= v32 )
        v37 = v32;
      else
        v37 = v36;
      v38 = v35 / v37;
      if ( !*((_WORD *)v1 + 633) && v34 * v31 < 12 * *((_DWORD *)v1 + 317) / 10 )
        v38 = (double)*((__int16 *)v1 + 632);
      if ( (double)*((__int16 *)v1 + 632) < v38 )
      {
        if ( v36 > v32 )
          v33 = v36;
        v44 = v33 / v35 * 3.0 < (double)*((__int16 *)v1 + 633);
        v43 = v35;
        if ( v44 )
        {
          v45 = v35;
          v46 = (double)(4 * v34) - v32;
          v39 = v45;
          v47 = v46 * 0.03125;
          if ( v47 >= 0.0 )
            v43 = v43 - v47;
          else
            v43 = v43 - 0.0;
          *((_WORD *)v1 + 633) = 0;
        }
        else
        {
          v39 = v35;
        }
      }
      else
      {
        v39 = v35;
        v40 = (v33 * 4.0 - v35) * 0.015625;
        if ( v40 < 0.0 )
          v40 = 0.0;
        v41 = v40 + v35;
        v42 = 4.0 * (v33 * (double)dword_4D0B34);
        if ( 100.0 * v41 <= v42 )
          v43 = v41;
        else
          v43 = 0.015625 * v42;
        *((_WORD *)v1 + 632) = 0;
      }
      if ( v43 < 1.0 )
        v43 = 1.0;
      if ( v43 != v39 )
      {
        sub_415510((int)v43);
        sub_43CAB0();
      }
    }
    else if ( !sub_415AC0(v1) && v1[9] == 2 )
    {
      v48 = dword_4CD11C;
      v1[8] &= ~1u;
      *((_DWORD *)v1 + 9) = v48;
      v1[10] = 0;
    }
  }
  else
  {
    v4 = *(_DWORD *)dword_870814 + 72 * *((__int16 *)v3 + 7);
    v5 = (double)*v3 * 0.00390625;
    v6 = (double)*(int *)(v4 + 24) * v5;
    if ( *(_BYTE *)(v4 + 13) )
      v6 = v6 * 0.8;
    v7 = (double)*((int *)v1 + 317);
    v8 = v7 < v6;
    v9 = v7 == v6;
    v10 = v7;
    if ( v8 || v9 )
    {
      v10 = (double)*(int *)(v4 + 24) * v5;
      if ( *(_BYTE *)(v4 + 13) )
        v10 = v10 * 0.8;
    }
    v11 = v10 * 4.0;
    v12 = (double)*((int *)v1 + 3);
    v13 = v12 / v11 * 3.0;
    if ( !*((_WORD *)v1 + 631) && *((_DWORD *)v1 + 317) > *((_DWORD *)v1 + 3) / 4 )
      v13 = (double)*((__int16 *)v1 + 630);
    if ( *((__int16 *)v1 + 630) < (int)v13 )
    {
      v17 = 3.0 * (v11 / v12) < (double)*((__int16 *)v1 + 631);
      v18 = v12;
      if ( v17 )
      {
        if ( *(_BYTE *)(v4 + 13) )
        {
          v19 = v5 * (double)*(int *)(v4 + 24);
          v20 = 4.0;
          v21 = 0.8 * v19;
        }
        else
        {
          v21 = v5 * (double)*(int *)(v4 + 24);
          v18 = v12;
          v20 = 4.0;
        }
        v22 = v18;
        v23 = v18 - v21;
        v24 = v22;
        v25 = v23 / 10.0;
        v26 = v25 > 0.0;
        v27 = 0.0 == v25;
        v28 = 0.0;
        if ( v26 || v27 )
        {
          v29 = v12 - sub_401230((int *)dword_870824 + 28 * v2);
          v24 = v12;
          v28 = v29 / 10.0;
          v20 = 4.0;
        }
        v30 = v24 - v28;
        if ( v20 > v30 )
          v30 = v20;
        sub_415610((int)v30);
        *((_DWORD *)v1 + 313) = dword_4CD11C;
        *((_WORD *)v1 + 631) = 0;
      }
    }
    else
    {
      v14 = (v11 * 4.0 - v12) * 0.03125;
      if ( v14 < 0.0 )
        v14 = 0.0;
      v15 = 4.0 * (v11 * (double)dword_4D0B34);
      if ( (v12 + v14) * 100.0 <= v15 )
        v16 = v12 + v14;
      else
        v16 = v15 / 100.0;
      sub_415610((int)v16);
      *((_DWORD *)v1 + 313) = dword_4CD11C;
      *((_WORD *)v1 + 630) = 0;
    }
  }
}
