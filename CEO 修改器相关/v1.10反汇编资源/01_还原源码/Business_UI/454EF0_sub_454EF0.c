// 函数 0x454ef0  sub_454EF0  size=0x833  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_454EF0()
{
  int v0; // esi
  unsigned int v1; // ebx
  int v2; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // edi
  int v21; // ecx
  unsigned int v22; // ebx
  unsigned int v23; // kr08_4
  int v24; // ecx
  int v25; // edi
  unsigned int v26; // ebx
  int v27; // esi
  double v28; // st7
  int v29; // esi
  double v30; // st7
  int v31; // esi
  double v32; // st7
  int v33; // esi
  double v34; // st7
  int v35; // edi
  int v36; // esi
  double v37; // st7
  int v38; // esi
  int result; // eax
  int v40; // [esp+Ch] [ebp-18h]
  int v41; // [esp+14h] [ebp-10h]
  int v42; // [esp+18h] [ebp-Ch]
  int v43; // [esp+18h] [ebp-Ch]
  int v44; // [esp+1Ch] [ebp-8h]
  int v45; // [esp+20h] [ebp-4h]

  v0 = dword_4CCAAC + dword_8BF6A8 * dword_4CCA98;
  v44 = v0;
  if ( dword_8BF808 )
  {
    if ( dword_8BF808 == 1 )
    {
      v42 = 3;
    }
    else if ( dword_8BF808 == 2 )
    {
      v42 = 1;
    }
  }
  else
  {
    v42 = 12;
  }
  v1 = HIDWORD(qword_8BF6C0);
  v41 = 0;
  if ( v42 > 0 )
  {
    do
    {
      v2 = byte_4CE046 - v41;
      v3 = v2 - v42;
      v40 = v2;
      v45 = v2 - v42;
      if ( v2 - v42 > 24 )
        v3 += -24 - 24 * ((v3 - 25) / 0x18u);
      if ( v3 < 0 )
        v3 += 24 * ((-1 - v3) / 0x18u) + 24;
      qword_8BF770 += *(int *)(v0 + 4 * v3 + 820);
      v4 = byte_4CE046 - v41;
      if ( v2 > 24 )
        v4 = -24 - 24 * ((v2 - 25) / 0x18u) + v2;
      if ( v4 < 0 )
        v4 += 24 * ((-1 - v4) / 0x18u) + 24;
      v5 = *(_DWORD *)(v0 + 4 * v4 + 820);
      v6 = v2 - v42;
      v1 = (v5 + __PAIR64__(v1, qword_8BF6C0)) >> 32;
      LODWORD(qword_8BF6C0) = v5 + qword_8BF6C0;
      if ( v45 > 24 )
        v6 = -24 - 24 * ((v45 - 25) / 0x18u) + v45;
      if ( v6 < 0 )
        v6 += 24 * ((-1 - v6) / 0x18u) + 24;
      qword_8BF5C0 += *(int *)(v0 + 4 * v6 + 920);
      v7 = byte_4CE046 - v41;
      if ( v2 > 24 )
        v7 = -24 - 24 * ((v2 - 25) / 0x18u) + v2;
      if ( v7 < 0 )
        v7 += 24 * ((-1 - v7) / 0x18u) + 24;
      v8 = *(_DWORD *)(v0 + 4 * v7 + 920);
      v9 = v2 - v42;
      qword_8BF748 += v8;
      if ( v45 > 24 )
        v9 = -24 - 24 * ((v45 - 25) / 0x18u) + v45;
      if ( v9 < 0 )
        v9 += 24 * ((-1 - v9) / 0x18u) + 24;
      qword_8BF5D0 += *(int *)(v0 + 4 * v9 + 1020);
      v10 = byte_4CE046 - v41;
      if ( v2 > 24 )
        v10 = -24 - 24 * ((v2 - 25) / 0x18u) + v2;
      if ( v10 < 0 )
        v10 += 24 * ((-1 - v10) / 0x18u) + 24;
      v11 = *(_DWORD *)(v0 + 4 * v10 + 1020);
      v12 = v2 - v42;
      qword_8BF760 += v11;
      if ( v45 > 24 )
        v12 = -24 - 24 * ((v45 - 25) / 0x18u) + v45;
      if ( v12 < 0 )
        v12 += 24 * ((-1 - v12) / 0x18u) + 24;
      qword_8BF5A0 += *(int *)(v0 + 4 * v12 + 1120);
      v13 = byte_4CE046 - v41;
      if ( v2 > 24 )
        v13 = -24 - 24 * ((v2 - 25) / 0x18u) + v2;
      if ( v13 < 0 )
        v13 += 24 * ((-1 - v13) / 0x18u) + 24;
      v14 = *(_DWORD *)(v0 + 4 * v13 + 1120);
      v15 = v2 - v42;
      qword_8BF7F8 += v14;
      if ( v45 > 24 )
        v15 = -24 - 24 * ((v45 - 25) / 0x18u) + v45;
      if ( v15 < 0 )
        v15 += 24 * ((-1 - v15) / 0x18u) + 24;
      qword_8BF758 += *(int *)(v0 + 4 * v15 + 1216);
      v16 = byte_4CE046 - v41;
      if ( v2 > 24 )
        v16 = -24 - 24 * ((v2 - 25) / 0x18u) + v2;
      if ( v16 < 0 )
        v16 += 24 * ((-1 - v16) / 0x18u) + 24;
      v17 = *(_DWORD *)(v0 + 4 * v16 + 1216);
      v18 = v2 - v42;
      qword_8BF6B0 += v17;
      if ( v45 > 24 )
        v18 = -24 - 24 * ((v45 - 25) / 0x18u) + v45;
      if ( v18 < 0 )
        v18 += 24 * ((-1 - v18) / 0x18u) + 24;
      qword_8BF598 += *(int *)(v0 + 4 * v18 + 1316);
      v19 = byte_4CE046 - v41;
      if ( v2 > 24 )
        v19 = -24 - 24 * ((v2 - 25) / 0x18u) + v2;
      if ( v19 < 0 )
        v19 += 24 * ((-1 - v19) / 0x18u) + 24;
      v20 = v2 - v42;
      qword_8BF6B8 += *(int *)(v0 + 4 * v19 + 1316);
      if ( v45 > 24 )
        v20 = -24 - 24 * ((v45 - 25) / 0x18u) + v45;
      if ( v20 < 0 )
        v20 += 24 * ((-1 - v20) / 0x18u) + 24;
      v21 = byte_4CE046 - v41;
      qword_8BF7F0 += *(int *)(v0 + 4 * v20 + 1416);
      if ( v40 > 24 )
        v21 = -24 - 24 * ((v40 - 25) / 0x18u) + v40;
      if ( v21 < 0 )
        v21 += 24 * ((-1 - v21) / 0x18u) + 24;
      qword_8BF5A8 += *(int *)(v0 + 4 * v21 + 1416);
      ++v41;
    }
    while ( v41 < v42 );
    HIDWORD(qword_8BF6C0) = v1;
  }
  qword_8BF5B8 = qword_8BF758 - qword_8BF5A0 - qword_8BF5D0 - qword_8BF5C0;
  v23 = qword_8BF6C0 - qword_8BF7F8 - qword_8BF760 - qword_8BF748;
  v22 = (__PAIR64__(v1, qword_8BF6C0) - qword_8BF7F8 - qword_8BF760 - qword_8BF748) >> 32;
  qword_8BF740 = __PAIR64__(v22, v23);
  qword_8BF738 = qword_8BF758 - qword_8BF5A0 - qword_8BF5D0 - qword_8BF5C0 - qword_8BF598 - qword_8BF758;
  qword_8BF5C8 = __PAIR64__(v22, v23) - qword_8BF6B8 - qword_8BF6B0;
  v24 = byte_4CE046;
  v25 = 0;
  qword_8BF590 = qword_8BF5C8 - qword_8BF5A8;
  qword_8BF778 = qword_8BF738 - qword_8BF7F0;
  v26 = byte_4CE046 - 25;
  v43 = 0;
  while ( 1 )
  {
    v27 = v24;
    if ( v24 > 24 )
      v27 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v27 < 0 )
      v27 += 24 * ((-1 - v27) / 0x18u) + 24;
    v28 = (double)*(int *)(v44 + 4 * v27 + 820);
    v29 = v24;
    *(double *)((char *)&dbl_8BF5D8 + v25) = v28;
    if ( v24 > 24 )
      v29 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v29 < 0 )
      v29 += 24 * ((-1 - v29) / 0x18u) + 24;
    v30 = v28 - (double)*(int *)(v44 + 4 * v29 + 920);
    v31 = v24;
    *(double *)((char *)&dbl_8BF5D8 + v25) = v30;
    if ( v24 > 24 )
      v31 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v31 < 0 )
      v31 += 24 * ((-1 - v31) / 0x18u) + 24;
    v32 = v30 - (double)*(int *)(v44 + 4 * v31 + 1020);
    v33 = v24;
    *(double *)((char *)&dbl_8BF5D8 + v25) = v32;
    if ( v24 > 24 )
      v33 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v33 < 0 )
      v33 += 24 * ((-1 - v33) / 0x18u) + 24;
    v34 = v32 - (double)*(int *)(v44 + 4 * v33 + 1120);
    v35 = v24;
    *(double *)((char *)&dbl_8BF5D8 + v43) = v34;
    if ( v24 > 24 )
      v35 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v35 < 0 )
      v35 += 24 * ((-1 - v35) / 0x18u) + 24;
    v36 = v24;
    if ( v24 > 24 )
      v36 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v36 < 0 )
      v36 += 24 * ((-1 - v36) / 0x18u) + 24;
    v37 = v34 - (double)*(int *)(v44 + 4 * v35 + 1216) - (double)*(int *)(v44 + 4 * v36 + 1316);
    v38 = v24;
    *(double *)((char *)&dbl_8BF6D0 + v43) = v37;
    if ( v24 > 24 )
      v38 = v24 - 8 * (3 * (v26 / 0x18) + 3);
    if ( v38 < 0 )
      v38 += 24 * ((-1 - v38) / 0x18u) + 24;
    result = v43 + 8;
    --v24;
    --v26;
    v43 = result;
    *(double *)((char *)&dbl_8BF780 + result) = v37 - (double)*(int *)(v44 + 4 * v38 + 1416);
    if ( result >= 104 )
      break;
    v25 = result;
  }
  return result;
}
