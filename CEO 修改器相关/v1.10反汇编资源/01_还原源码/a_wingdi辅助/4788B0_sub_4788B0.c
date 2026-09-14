// 函数 0x4788b0  sub_4788B0  size=0x5F5  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

float *__usercall sub_4788B0@<eax>(float *result@<eax>, float *a2@<edx>, float *a3@<ecx>, float *a4@<edi>, float *a5)
{
  double v6; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st3
  double v10; // st2
  double v11; // st7
  double v12; // rt1
  double v13; // st5
  double v14; // st4
  double v15; // st2
  double v16; // st5
  double v17; // st4
  double v18; // st3
  double v19; // st2
  float v20; // [esp+4h] [ebp-14h]
  float v21; // [esp+4h] [ebp-14h]
  float v22; // [esp+4h] [ebp-14h]
  float v23; // [esp+4h] [ebp-14h]
  float v24; // [esp+4h] [ebp-14h]
  float v25; // [esp+4h] [ebp-14h]
  float v26; // [esp+4h] [ebp-14h]
  float v27; // [esp+4h] [ebp-14h]
  float v28; // [esp+4h] [ebp-14h]
  float v29; // [esp+4h] [ebp-14h]
  float v30; // [esp+4h] [ebp-14h]
  float v31; // [esp+4h] [ebp-14h]
  float v32; // [esp+4h] [ebp-14h]
  float v33; // [esp+4h] [ebp-14h]
  float v34; // [esp+8h] [ebp-10h]
  float v35; // [esp+8h] [ebp-10h]
  float v36; // [esp+8h] [ebp-10h]
  float v37; // [esp+8h] [ebp-10h]
  float v38; // [esp+8h] [ebp-10h]
  float v39; // [esp+8h] [ebp-10h]
  float v40; // [esp+8h] [ebp-10h]
  float v41; // [esp+8h] [ebp-10h]
  float v42; // [esp+8h] [ebp-10h]
  float v43; // [esp+8h] [ebp-10h]
  float v44; // [esp+8h] [ebp-10h]
  float v45; // [esp+8h] [ebp-10h]
  float v46; // [esp+Ch] [ebp-Ch]
  float v47; // [esp+Ch] [ebp-Ch]
  float v48; // [esp+Ch] [ebp-Ch]
  float v49; // [esp+Ch] [ebp-Ch]
  float v50; // [esp+Ch] [ebp-Ch]
  float v51; // [esp+Ch] [ebp-Ch]
  float v52; // [esp+Ch] [ebp-Ch]
  float v53; // [esp+Ch] [ebp-Ch]
  float v54; // [esp+Ch] [ebp-Ch]
  float v55; // [esp+Ch] [ebp-Ch]
  float v56; // [esp+Ch] [ebp-Ch]
  float v57; // [esp+10h] [ebp-8h]
  float v58; // [esp+10h] [ebp-8h]
  float v59; // [esp+10h] [ebp-8h]
  float v60; // [esp+10h] [ebp-8h]
  float v61; // [esp+10h] [ebp-8h]
  float v62; // [esp+10h] [ebp-8h]
  float v63; // [esp+10h] [ebp-8h]
  float v64; // [esp+10h] [ebp-8h]
  float v65; // [esp+10h] [ebp-8h]
  float v66; // [esp+10h] [ebp-8h]
  float v67; // [esp+10h] [ebp-8h]
  float v68; // [esp+14h] [ebp-4h]
  float v69; // [esp+14h] [ebp-4h]
  float v70; // [esp+14h] [ebp-4h]
  float v71; // [esp+14h] [ebp-4h]
  float v72; // [esp+14h] [ebp-4h]
  float v73; // [esp+14h] [ebp-4h]
  float v74; // [esp+14h] [ebp-4h]
  float v75; // [esp+14h] [ebp-4h]
  float v76; // [esp+14h] [ebp-4h]
  float v77; // [esp+14h] [ebp-4h]
  float v78; // [esp+14h] [ebp-4h]
  float v79; // [esp+14h] [ebp-4h]
  float v80; // [esp+20h] [ebp+8h]
  float v81; // [esp+20h] [ebp+8h]
  float v82; // [esp+20h] [ebp+8h]
  float v83; // [esp+20h] [ebp+8h]
  float v84; // [esp+20h] [ebp+8h]
  float v85; // [esp+20h] [ebp+8h]
  float v86; // [esp+20h] [ebp+8h]
  float v87; // [esp+20h] [ebp+8h]
  float v88; // [esp+20h] [ebp+8h]
  float v89; // [esp+20h] [ebp+8h]
  float v90; // [esp+20h] [ebp+8h]
  float v91; // [esp+20h] [ebp+8h]
  float v92; // [esp+20h] [ebp+8h]
  float v93; // [esp+20h] [ebp+8h]
  float v94; // [esp+20h] [ebp+8h]
  float v95; // [esp+20h] [ebp+8h]
  float v96; // [esp+20h] [ebp+8h]
  float v97; // [esp+20h] [ebp+8h]
  float v98; // [esp+20h] [ebp+8h]
  float v99; // [esp+20h] [ebp+8h]
  float v100; // [esp+20h] [ebp+8h]

  *a3 = *a4;
  a3[32] = a4[1];
  a3[64] = a4[2];
  a3[96] = a4[3];
  a3[128] = a4[4];
  a3[160] = a4[5];
  v34 = a5[12];
  v20 = a5[15] + v34;
  v57 = a5[9];
  v35 = v34 + v57;
  v68 = a5[6];
  v58 = v57 + v68;
  v80 = a5[3];
  v69 = v68 + v80;
  v6 = *a5;
  v81 = v80 + v6;
  v21 = v58 + v20;
  v7 = flt_8EE940;
  v70 = flt_8EE940 * v69;
  v8 = v81;
  v82 = v58 + v81;
  v59 = v82 * flt_8EE940;
  v83 = v6 - v35;
  v9 = v21;
  v22 = (v8 - v21) * flt_8E90C0;
  v10 = v22;
  v23 = v22 + v83;
  v84 = v83 - v10;
  a3[512] = v23 * result[10] + a4[16];
  a3[416] = v23 * result[7] + a4[13];
  a3[224] = result[1] * v84 + a4[7];
  a3[320] = v84 * result[4] + a4[10];
  v46 = v6 + v35 * flt_8EB4AC;
  v36 = v46 + v70;
  v47 = v46 - v70;
  v11 = flt_8EB4AC;
  v12 = v7;
  v85 = v8 + v9 * flt_8EB4AC;
  v24 = (v85 + v59) * flt_8E90BC;
  v86 = (v85 - v59) * flt_8E90C4;
  v60 = v36 + v24;
  v37 = v36 - v24;
  v71 = v47 + v86;
  v48 = v47 - v86;
  a3[544] = result[11] * v71 + a4[17];
  a3[384] = v71 * result[6] + a4[12];
  a3[448] = result[8] * v60 + a4[14];
  a3[480] = v60 * result[9] + a4[15];
  a3[192] = *result * v48 + a4[6];
  a3[352] = v48 * result[5] + a4[11];
  a3[256] = v37 * result[2] + a4[8];
  a3[288] = v37 * result[3] + a4[9];
  v72 = a5[13];
  v25 = a5[16] + v72;
  v49 = a5[10];
  v73 = v72 + v49;
  v38 = a5[7];
  v50 = v49 + v38;
  v87 = a5[4];
  v39 = v38 + v87;
  v13 = a5[1];
  v88 = v87 + v13;
  v26 = v50 + v25;
  v40 = v12 * v39;
  v14 = v88;
  v89 = v50 + v88;
  v51 = v89 * v12;
  v90 = v13 - v73;
  v15 = v26;
  v27 = (v14 - v26) * flt_8E90C0;
  v61 = v27 + v90;
  v91 = v90 - v27;
  a2[4] = v61 * result[10];
  a2[1] = result[7] * v61;
  a3[416] = result[1] * v91 + a3[416];
  a3[512] = v91 * result[4] + a3[512];
  v62 = v13 + v73 * v11;
  v74 = v62 + v40;
  v63 = v62 - v40;
  v92 = v15 * v11 + v14;
  v28 = (v92 + v51) * flt_8E90BC;
  v93 = (v92 - v51) * flt_8E90C4;
  v52 = v74 + v28;
  v75 = v74 - v28;
  v41 = v63 + v93;
  v64 = v63 - v93;
  a2[5] = result[11] * v41;
  *a2 = v41 * result[6];
  a2[2] = result[8] * v52;
  a2[3] = v52 * result[9];
  a3[384] = *result * v64 + a3[384];
  a3[544] = v64 * result[5] + a3[544];
  a3[448] = v75 * result[2] + a3[448];
  a3[480] = v75 * result[3] + a3[480];
  a2[17] = 0.0;
  a2[16] = 0.0;
  a2[15] = 0.0;
  a2[14] = 0.0;
  a2[13] = 0.0;
  a2[12] = 0.0;
  v76 = a5[14];
  v29 = a5[17] + v76;
  v53 = a5[11];
  v77 = v76 + v53;
  v42 = a5[8];
  v54 = v53 + v42;
  v94 = a5[5];
  v43 = v42 + v94;
  v16 = a5[2];
  v95 = v94 + v16;
  v30 = v54 + v29;
  v44 = v12 * v43;
  v17 = v95;
  v96 = v54 + v95;
  v55 = v12 * v96;
  v97 = v16 - v77;
  v18 = v30;
  v31 = (v17 - v30) * flt_8E90C0;
  v19 = v31;
  v32 = v31 + v97;
  v98 = v97 - v19;
  a2[10] = v32 * result[10];
  a2[7] = v32 * result[7];
  a2[1] = result[1] * v98 + a2[1];
  a2[4] = v98 * result[4] + a2[4];
  v65 = v16 + v77 * v11;
  v78 = v65 + v44;
  v66 = v65 - v44;
  v99 = v11 * v18 + v17;
  v33 = (v99 + v55) * flt_8E90BC;
  v100 = (v99 - v55) * flt_8E90C4;
  v56 = v78 + v33;
  v79 = v78 - v33;
  v45 = v66 + v100;
  v67 = v66 - v100;
  a2[11] = result[11] * v45;
  a2[6] = v45 * result[6];
  a2[8] = result[8] * v56;
  a2[9] = v56 * result[9];
  *a2 = v67 * *result + *a2;
  a2[5] = v67 * result[5] + a2[5];
  a2[2] = v79 * result[2] + a2[2];
  a2[3] = v79 * result[3] + a2[3];
  return result;
}
