// 函数 0x454340  sub_454340  size=0xBAD  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_454340()
{
  char *v0; // ebx
  __int64 v1; // rdi
  int v2; // ecx
  double v3; // st7
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // edi
  int v25; // esi
  double v26; // st7
  int v27; // esi
  double v28; // st7
  int v29; // esi
  double v30; // st7
  int v31; // esi
  double v32; // st7
  int v33; // esi
  double v34; // st7
  int v35; // esi
  double v36; // st7
  int v37; // esi
  double v38; // st7
  int v39; // esi
  double v40; // st7
  int v41; // esi
  double v42; // st7
  int v43; // esi
  int result; // eax
  double v45; // st7
  int v46; // [esp+4h] [ebp-10h]
  int v47; // [esp+8h] [ebp-Ch]
  int v48; // [esp+8h] [ebp-Ch]
  int v49; // [esp+Ch] [ebp-8h]
  int v50; // [esp+10h] [ebp-4h]

  if ( dword_8BF808 )
  {
    if ( dword_8BF808 == 1 )
    {
      v47 = 3;
    }
    else if ( dword_8BF808 == 2 )
    {
      v47 = 1;
    }
  }
  else
  {
    v47 = 12;
  }
  v0 = (char *)&unk_4D10B8 + 189880 * dword_8BF648[dword_8BF5B0];
  v1 = qword_8BF770;
  v46 = 0;
  if ( v47 > 0 )
  {
    do
    {
      v50 = byte_4CE046 - v46;
      v2 = v50 - v47;
      v49 = v50 - v47;
      if ( v50 - v47 > 24 )
        v2 += -24 - 24 * ((v2 - 25) / 0x18u);
      if ( v2 < 0 )
        v2 += 24 * ((-1 - v2) / 0x18u) + 24;
      v3 = *(double *)&v0[8 * v2 + 9664];
      v4 = byte_4CE046 - v46;
      v1 += (unsigned __int64)v3;
      if ( v50 > 24 )
        v4 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v4 < 0 )
        v4 += 24 * ((-1 - v4) / 0x18u) + 24;
      qword_8BF6C0 += (unsigned __int64)*(double *)&v0[8 * v4 + 9664];
      v5 = v50 - v47;
      if ( v49 > 24 )
        v5 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v5 < 0 )
        v5 += 24 * ((-1 - v5) / 0x18u) + 24;
      qword_8BF5C0 += (unsigned __int64)*(double *)&v0[8 * v5 + 9864];
      v6 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v6 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v6 < 0 )
        v6 += 24 * ((-1 - v6) / 0x18u) + 24;
      qword_8BF748 += (unsigned __int64)*(double *)&v0[8 * v6 + 9864];
      v7 = v50 - v47;
      if ( v49 > 24 )
        v7 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v7 < 0 )
        v7 += 24 * ((-1 - v7) / 0x18u) + 24;
      qword_8BF5D0 += (unsigned __int64)*(double *)&v0[8 * v7 + 10064];
      v8 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v8 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v8 < 0 )
        v8 += 24 * ((-1 - v8) / 0x18u) + 24;
      qword_8BF760 += (unsigned __int64)*(double *)&v0[8 * v8 + 10064];
      v9 = v50 - v47;
      if ( v49 > 24 )
        v9 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v9 < 0 )
        v9 += 24 * ((-1 - v9) / 0x18u) + 24;
      qword_8BF5A0 += (unsigned __int64)*(double *)&v0[8 * v9 + 10264];
      v10 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v10 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v10 < 0 )
        v10 += 24 * ((-1 - v10) / 0x18u) + 24;
      qword_8BF7F8 += (unsigned __int64)*(double *)&v0[8 * v10 + 10264];
      v11 = v50 - v47;
      if ( v49 > 24 )
        v11 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v11 < 0 )
        v11 += 24 * ((-1 - v11) / 0x18u) + 24;
      qword_8BF758 += (unsigned __int64)*(double *)&v0[8 * v11 + 10456];
      v12 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v12 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v12 < 0 )
        v12 += 24 * ((-1 - v12) / 0x18u) + 24;
      qword_8BF6B0 += (unsigned __int64)*(double *)&v0[8 * v12 + 10456];
      v13 = v50 - v47;
      if ( v49 > 24 )
        v13 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v13 < 0 )
        v13 += 24 * ((-1 - v13) / 0x18u) + 24;
      qword_8BF598 += (unsigned __int64)*(double *)&v0[8 * v13 + 10656];
      v14 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v14 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v14 < 0 )
        v14 += 24 * ((-1 - v14) / 0x18u) + 24;
      qword_8BF6B8 += (unsigned __int64)*(double *)&v0[8 * v14 + 10656];
      v15 = v50 - v47;
      if ( v49 > 24 )
        v15 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v15 < 0 )
        v15 += 24 * ((-1 - v15) / 0x18u) + 24;
      qword_8BF6C8 += (unsigned __int64)*(double *)&v0[8 * v15 + 11048];
      v16 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v16 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v16 < 0 )
        v16 += 24 * ((-1 - v16) / 0x18u) + 24;
      qword_8BF6A0 += (unsigned __int64)*(double *)&v0[8 * v16 + 11048];
      v17 = v50 - v47;
      if ( v49 > 24 )
        v17 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v17 < 0 )
        v17 += 24 * ((-1 - v17) / 0x18u) + 24;
      dbl_8BF780 += (unsigned __int64)*(double *)&v0[8 * v17 + 11248];
      v18 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v18 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v18 < 0 )
        v18 += 24 * ((-1 - v18) / 0x18u) + 24;
      qword_8BF640 += (unsigned __int64)*(double *)&v0[8 * v18 + 11248];
      v19 = v50 - v47;
      if ( v49 > 24 )
        v19 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v19 < 0 )
        v19 += 24 * ((-1 - v19) / 0x18u) + 24;
      qword_8BF800 += (unsigned __int64)*(double *)&v0[8 * v19 + 10848];
      v20 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v20 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v20 < 0 )
        v20 += 24 * ((-1 - v20) / 0x18u) + 24;
      qword_8BF698 += (unsigned __int64)*(double *)&v0[8 * v20 + 10848];
      v21 = v50 - v47;
      if ( v49 > 24 )
        v21 = -24 - 24 * ((v49 - 25) / 0x18u) + v49;
      if ( v21 < 0 )
        v21 += 24 * ((-1 - v21) / 0x18u) + 24;
      qword_8BF7F0 += (unsigned __int64)*(double *)&v0[8 * v21 + 11448];
      v22 = byte_4CE046 - v46;
      if ( v50 > 24 )
        v22 = -24 - 24 * ((v50 - 25) / 0x18u) + v50;
      if ( v22 < 0 )
        v22 += 24 * ((-1 - v22) / 0x18u) + 24;
      qword_8BF5A8 += (unsigned __int64)*(double *)&v0[8 * v22 + 11448];
      ++v46;
    }
    while ( v46 < v47 );
    qword_8BF770 = v1;
  }
  qword_8BF5B8 = v1 - qword_8BF5A0 - qword_8BF5D0 - qword_8BF5C0;
  qword_8BF740 = qword_8BF6C0 - qword_8BF7F8 - qword_8BF760 - qword_8BF748;
  qword_8BF738 = qword_8BF5B8 - qword_8BF598 - qword_8BF758;
  qword_8BF5C8 = qword_8BF6C0 - qword_8BF7F8 - qword_8BF760 - qword_8BF748 - qword_8BF6B8 - qword_8BF6B0;
  qword_8BF778 = qword_8BF6C8 + qword_8BF5B8 - qword_8BF598 - qword_8BF758 - qword_8BF7F0 - qword_8BF800 - dbl_8BF780;
  qword_8BF590 = qword_8BF6A0 + qword_8BF5C8 - qword_8BF5A8 - qword_8BF698 - qword_8BF640;
  memset(&dbl_8BF5D8, 0, 0x68u);
  memset(&dbl_8BF6D0, 0, 0x68u);
  memset(&unk_8BF788, 0, 0x68u);
  v23 = byte_4CE046;
  v24 = byte_4CE046 - 25;
  v48 = 0;
  do
  {
    v25 = v23;
    if ( v23 > 24 )
      v25 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v25 < 0 )
      v25 += 24 * ((-1 - v25) / 0x18u) + 24;
    v26 = *(double *)&v0[8 * v25 + 9664];
    v27 = v23;
    if ( v23 > 24 )
      v27 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v27 < 0 )
      v27 += 24 * ((-1 - v27) / 0x18u) + 24;
    v28 = v26 - *(double *)&v0[8 * v27 + 9864];
    v29 = v23;
    if ( v23 > 24 )
      v29 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v29 < 0 )
      v29 += 24 * ((-1 - v29) / 0x18u) + 24;
    v30 = v28 - *(double *)&v0[8 * v29 + 10064];
    v31 = v23;
    if ( v23 > 24 )
      v31 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v31 < 0 )
      v31 += 24 * ((-1 - v31) / 0x18u) + 24;
    v32 = v30 - *(double *)&v0[8 * v31 + 10264];
    v33 = v23;
    *(double *)((char *)&dbl_8BF5D8 + v48) = *(double *)((char *)&dbl_8BF5D8 + v48) + v32;
    if ( v23 > 24 )
      v33 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v33 < 0 )
      v33 += 24 * ((-1 - v33) / 0x18u) + 24;
    v34 = v32 - *(double *)&v0[8 * v33 + 10456];
    v35 = v23;
    if ( v23 > 24 )
      v35 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v35 < 0 )
      v35 += 24 * ((-1 - v35) / 0x18u) + 24;
    v36 = v34 - *(double *)&v0[8 * v35 + 10656];
    v37 = v23;
    *(double *)((char *)&dbl_8BF6D0 + v48) = *(double *)((char *)&dbl_8BF6D0 + v48) + v36;
    if ( v23 > 24 )
      v37 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v37 < 0 )
      v37 += 24 * ((-1 - v37) / 0x18u) + 24;
    v38 = v36 - *(double *)&v0[8 * v37 + 11448];
    v39 = v23;
    if ( v23 > 24 )
      v39 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v39 < 0 )
      v39 += 24 * ((-1 - v39) / 0x18u) + 24;
    v40 = v38 + *(double *)&v0[8 * v39 + 11048];
    v41 = v23;
    if ( v23 > 24 )
      v41 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v41 < 0 )
      v41 += 24 * ((-1 - v41) / 0x18u) + 24;
    v42 = v40 - *(double *)&v0[8 * v41 + 11248];
    v43 = v23;
    if ( v23 > 24 )
      v43 = v23 - 8 * (3 * (v24 / 0x18) + 3);
    if ( v43 < 0 )
      v43 += 24 * ((-1 - v43) / 0x18u) + 24;
    result = v48 + 8;
    --v23;
    v45 = v42 - *(double *)&v0[8 * v43 + 10848] + *(double *)((char *)&dbl_8BF780 + v48 + 8);
    --v24;
    v48 = result;
    *(double *)((char *)&dbl_8BF780 + result) = v45;
  }
  while ( result < 104 );
  return result;
}
