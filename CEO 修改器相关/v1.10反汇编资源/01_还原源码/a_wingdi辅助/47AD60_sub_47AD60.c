// 函数 0x47ad60  sub_47AD60  size=0x975  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

float *__usercall sub_47AD60@<eax>(float *result@<eax>, float *a2@<edx>, float *a3@<ecx>, float *a4@<esi>, float *a5)
{
  float *v5; // edi
  float *v7; // edx
  float *v8; // edx
  double v9; // st7
  float v10; // [esp+8h] [ebp-4h]
  float v11; // [esp+14h] [ebp+8h]
  float v12; // [esp+14h] [ebp+8h]
  float v13; // [esp+14h] [ebp+8h]
  float v14; // [esp+14h] [ebp+8h]
  float v15; // [esp+14h] [ebp+8h]
  float v16; // [esp+14h] [ebp+8h]
  float v17; // [esp+14h] [ebp+8h]
  float v18; // [esp+14h] [ebp+8h]
  float v19; // [esp+14h] [ebp+8h]
  float v20; // [esp+14h] [ebp+8h]
  float v21; // [esp+14h] [ebp+8h]
  float v22; // [esp+14h] [ebp+8h]
  float v23; // [esp+14h] [ebp+8h]
  float v24; // [esp+14h] [ebp+8h]
  float v25; // [esp+14h] [ebp+8h]
  float v26; // [esp+14h] [ebp+8h]
  float v27; // [esp+14h] [ebp+8h]
  float v28; // [esp+14h] [ebp+8h]
  float v29; // [esp+14h] [ebp+8h]
  float v30; // [esp+14h] [ebp+8h]
  float v31; // [esp+14h] [ebp+8h]
  float v32; // [esp+14h] [ebp+8h]
  float v33; // [esp+14h] [ebp+8h]
  float v34; // [esp+14h] [ebp+8h]
  float v35; // [esp+14h] [ebp+8h]
  float v36; // [esp+14h] [ebp+8h]
  float v37; // [esp+14h] [ebp+8h]
  float v38; // [esp+14h] [ebp+8h]

  v5 = (float *)off_4B7DC8;
  *result = *a2 + a2[31];
  result[31] = (*a2 - a2[31]) * *v5;
  result[1] = a2[30] + a2[1];
  result[30] = (a2[1] - a2[30]) * v5[1];
  result[2] = a2[29] + a2[2];
  result[29] = (a2[2] - a2[29]) * v5[2];
  result[3] = a2[28] + a2[3];
  result[28] = (a2[3] - a2[28]) * v5[3];
  result[4] = a2[27] + a2[4];
  result[27] = (a2[4] - a2[27]) * v5[4];
  result[5] = a2[26] + a2[5];
  result[26] = (a2[5] - a2[26]) * v5[5];
  result[6] = a2[25] + a2[6];
  result[25] = (a2[6] - a2[25]) * v5[6];
  result[7] = a2[24] + a2[7];
  result[24] = (a2[7] - a2[24]) * v5[7];
  result[8] = a2[23] + a2[8];
  result[23] = (a2[8] - a2[23]) * v5[8];
  result[9] = a2[22] + a2[9];
  result[22] = (a2[9] - a2[22]) * v5[9];
  result[10] = a2[21] + a2[10];
  result[21] = (a2[10] - a2[21]) * v5[10];
  result[11] = a2[20] + a2[11];
  result[20] = (a2[11] - a2[20]) * v5[11];
  result[12] = a2[19] + a2[12];
  result[19] = (a2[12] - a2[19]) * v5[12];
  result[13] = a2[18] + a2[13];
  result[18] = (a2[13] - a2[18]) * v5[13];
  result[14] = a2[17] + a2[14];
  result[17] = (a2[14] - a2[17]) * v5[14];
  result[15] = a2[16] + a2[15];
  result[16] = (a2[15] - a2[16]) * v5[15];
  v7 = (float *)off_4B7DCC;
  *a3 = *result + result[15];
  a3[15] = (*result - result[15]) * *v7;
  a3[1] = result[14] + result[1];
  a3[14] = (result[1] - result[14]) * v7[1];
  a3[2] = result[2] + result[13];
  a3[13] = (result[2] - result[13]) * v7[2];
  a3[3] = result[12] + result[3];
  a3[12] = (result[3] - result[12]) * v7[3];
  a3[4] = result[4] + result[11];
  a3[11] = (result[4] - result[11]) * v7[4];
  a3[5] = result[10] + result[5];
  a3[10] = (result[5] - result[10]) * v7[5];
  a3[6] = result[6] + result[9];
  a3[9] = (result[6] - result[9]) * v7[6];
  a3[7] = result[8] + result[7];
  a3[8] = (result[7] - result[8]) * v7[7];
  a3[16] = result[16] + result[31];
  a3[31] = (result[31] - result[16]) * *v7;
  a3[17] = result[30] + result[17];
  a3[30] = (result[30] - result[17]) * v7[1];
  a3[18] = result[18] + result[29];
  a3[29] = (result[29] - result[18]) * v7[2];
  a3[19] = result[28] + result[19];
  a3[28] = (result[28] - result[19]) * v7[3];
  a3[20] = result[20] + result[27];
  a3[27] = (result[27] - result[20]) * v7[4];
  a3[21] = result[26] + result[21];
  a3[26] = (result[26] - result[21]) * v7[5];
  a3[22] = result[22] + result[25];
  a3[25] = (result[25] - result[22]) * v7[6];
  a3[23] = result[24] + result[23];
  a3[24] = (result[24] - result[23]) * v7[7];
  v8 = (float *)off_4B7DD0;
  *result = a3[7] + *a3;
  result[7] = (*a3 - a3[7]) * *v8;
  result[1] = a3[1] + a3[6];
  result[6] = (a3[1] - a3[6]) * v8[1];
  result[2] = a3[5] + a3[2];
  result[5] = (a3[2] - a3[5]) * v8[2];
  result[3] = a3[3] + a3[4];
  result[4] = (a3[3] - a3[4]) * v8[3];
  result[8] = a3[15] + a3[8];
  result[15] = (a3[15] - a3[8]) * *v8;
  result[9] = a3[9] + a3[14];
  result[14] = (a3[14] - a3[9]) * v8[1];
  result[10] = a3[13] + a3[10];
  result[13] = (a3[13] - a3[10]) * v8[2];
  result[11] = a3[11] + a3[12];
  result[12] = (a3[12] - a3[11]) * v8[3];
  result[16] = a3[23] + a3[16];
  result[23] = (a3[16] - a3[23]) * *v8;
  result[17] = a3[17] + a3[22];
  result[22] = (a3[17] - a3[22]) * v8[1];
  result[18] = a3[21] + a3[18];
  result[21] = (a3[18] - a3[21]) * v8[2];
  result[19] = a3[19] + a3[20];
  result[20] = (a3[19] - a3[20]) * v8[3];
  result[24] = a3[31] + a3[24];
  result[31] = (a3[31] - a3[24]) * *v8;
  result[25] = a3[25] + a3[30];
  result[30] = (a3[30] - a3[25]) * v8[1];
  result[26] = a3[29] + a3[26];
  result[29] = (a3[29] - a3[26]) * v8[2];
  result[27] = a3[27] + a3[28];
  result[28] = (a3[28] - a3[27]) * v8[3];
  v11 = *(float *)off_4B7DD4;
  v10 = *((float *)off_4B7DD4 + 1);
  *a3 = *result + result[3];
  a3[3] = (*result - result[3]) * v11;
  a3[1] = result[2] + result[1];
  a3[2] = (result[1] - result[2]) * v10;
  a3[4] = result[4] + result[7];
  a3[7] = (result[7] - result[4]) * v11;
  a3[5] = result[6] + result[5];
  a3[6] = (result[6] - result[5]) * v10;
  a3[8] = result[8] + result[11];
  a3[11] = (result[8] - result[11]) * v11;
  a3[9] = result[10] + result[9];
  a3[10] = (result[9] - result[10]) * v10;
  a3[12] = result[12] + result[15];
  a3[15] = (result[15] - result[12]) * v11;
  a3[13] = result[14] + result[13];
  a3[14] = (result[14] - result[13]) * v10;
  a3[16] = result[16] + result[19];
  a3[19] = (result[16] - result[19]) * v11;
  a3[17] = result[18] + result[17];
  a3[18] = (result[17] - result[18]) * v10;
  a3[20] = result[20] + result[23];
  a3[23] = (result[23] - result[20]) * v11;
  a3[21] = result[22] + result[21];
  a3[22] = (result[22] - result[21]) * v10;
  a3[24] = result[24] + result[27];
  a3[27] = (result[24] - result[27]) * v11;
  a3[25] = result[26] + result[25];
  a3[26] = (result[25] - result[26]) * v10;
  a3[28] = result[28] + result[31];
  a3[31] = v11 * (result[31] - result[28]);
  a3[29] = result[30] + result[29];
  a3[30] = v10 * (result[30] - result[29]);
  v12 = *(float *)off_4B7DD8;
  *result = a3[1] + *a3;
  v9 = v12;
  result[1] = (*a3 - a3[1]) * v12;
  result[2] = a3[3] + a3[2];
  v13 = (a3[3] - a3[2]) * v12;
  result[3] = v13;
  result[2] = v13 + result[2];
  result[4] = a3[5] + a3[4];
  result[5] = (a3[4] - a3[5]) * v9;
  result[6] = a3[7] + a3[6];
  v14 = (a3[7] - a3[6]) * v9;
  result[7] = v14;
  v15 = v14 + result[6];
  result[6] = v15;
  result[4] = v15 + result[4];
  result[6] = result[6] + result[5];
  result[5] = result[7] + result[5];
  result[8] = a3[9] + a3[8];
  result[9] = (a3[8] - a3[9]) * v9;
  result[10] = a3[11] + a3[10];
  v16 = (a3[11] - a3[10]) * v9;
  result[11] = v16;
  result[10] = v16 + result[10];
  result[12] = a3[13] + a3[12];
  result[13] = (a3[12] - a3[13]) * v9;
  result[14] = a3[15] + a3[14];
  v17 = (a3[15] - a3[14]) * v9;
  result[15] = v17;
  v18 = v17 + result[14];
  result[14] = v18;
  result[12] = v18 + result[12];
  result[14] = result[14] + result[13];
  result[13] = result[15] + result[13];
  result[16] = a3[17] + a3[16];
  result[17] = (a3[16] - a3[17]) * v9;
  result[18] = a3[19] + a3[18];
  v19 = (a3[19] - a3[18]) * v9;
  result[19] = v19;
  result[18] = v19 + result[18];
  result[20] = a3[21] + a3[20];
  result[21] = (a3[20] - a3[21]) * v9;
  result[22] = a3[23] + a3[22];
  v20 = (a3[23] - a3[22]) * v9;
  result[23] = v20;
  v21 = v20 + result[22];
  result[22] = v21;
  result[20] = v21 + result[20];
  result[22] = result[22] + result[21];
  result[21] = result[23] + result[21];
  result[24] = a3[25] + a3[24];
  result[25] = (a3[24] - a3[25]) * v9;
  result[26] = a3[27] + a3[26];
  v22 = (a3[27] - a3[26]) * v9;
  result[27] = v22;
  result[26] = v22 + result[26];
  result[28] = a3[29] + a3[28];
  result[29] = (a3[28] - a3[29]) * v9;
  result[30] = a3[31] + a3[30];
  v23 = v9 * (a3[31] - a3[30]);
  result[31] = v23;
  v24 = v23 + result[30];
  result[30] = v24;
  result[28] = v24 + result[28];
  result[30] = result[30] + result[29];
  result[29] = result[31] + result[29];
  a4[256] = *result;
  a4[192] = result[4];
  a4[128] = result[2];
  a4[64] = result[6];
  *a4 = result[1];
  *a5 = result[1];
  a5[64] = result[5];
  a5[128] = result[3];
  a5[192] = result[7];
  v25 = result[12] + result[8];
  result[8] = v25;
  a4[224] = v25;
  v26 = result[12] + result[10];
  result[12] = v26;
  a4[160] = v26;
  v27 = result[14] + result[10];
  result[10] = v27;
  a4[96] = v27;
  v28 = result[14] + result[9];
  result[14] = v28;
  a4[32] = v28;
  v29 = result[13] + result[9];
  result[9] = v29;
  a5[32] = v29;
  v30 = result[13] + result[11];
  result[13] = v30;
  a5[96] = v30;
  v31 = result[15] + result[11];
  result[11] = v31;
  a5[160] = v31;
  a5[224] = result[15];
  v32 = result[28] + result[24];
  result[24] = v32;
  a4[240] = v32 + result[16];
  a4[208] = result[24] + result[20];
  v33 = result[28] + result[26];
  result[28] = v33;
  a4[176] = v33 + result[20];
  a4[144] = result[28] + result[18];
  v34 = result[30] + result[26];
  result[26] = v34;
  a4[112] = v34 + result[18];
  a4[80] = result[26] + result[22];
  v35 = result[30] + result[25];
  result[30] = v35;
  a4[48] = v35 + result[22];
  a4[16] = result[30] + result[17];
  v36 = result[29] + result[25];
  result[25] = v36;
  a5[16] = v36 + result[17];
  a5[48] = result[25] + result[21];
  v37 = result[29] + result[27];
  result[29] = v37;
  a5[80] = v37 + result[21];
  a5[112] = result[29] + result[19];
  v38 = result[31] + result[27];
  result[27] = v38;
  a5[144] = v38 + result[19];
  a5[176] = result[27] + result[23];
  a5[208] = result[31] + result[23];
  a5[240] = result[31];
  return result;
}
