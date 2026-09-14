// 函数 0x416ba0  sub_416BA0  size=0x71E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_416BA0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  int result; // eax
  int v5; // edi
  char *v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // edi
  int v18; // ebx
  int v19; // edx
  int v20; // edi
  int v21; // ebx
  int v22; // edx
  int v23; // edi
  int v24; // ebx
  int v25; // edx
  _DWORD *v26; // edx
  _DWORD *v27; // eax
  char *v28; // edi
  _DWORD *v29; // edx
  _DWORD *v30; // eax
  __int16 v31; // ax
  int v32; // edi
  int v33; // [esp+0h] [ebp-Ch]
  int v34; // [esp+4h] [ebp-8h]
  int v35; // [esp+8h] [ebp-4h]
  int v36; // [esp+14h] [ebp+8h]
  int v37; // [esp+14h] [ebp+8h]
  int v38; // [esp+14h] [ebp+8h]

  v2 = dword_4CCAAC + a1 * dword_4CCA98;
  v3 = dword_4CCAAC + a2 * dword_4CCA98;
  result = *(__int16 *)(v2 + 238);
  v34 = v2;
  v33 = v3;
  v36 = result;
  if ( result != -1 )
  {
    while ( 1 )
    {
      v5 = dword_4CC8BC;
      v6 = (char *)(dword_4CC8D0 + result * dword_4CC8BC);
      v7 = *(__int16 *)(v3 + 238);
      v8 = *((__int16 *)v6 + 3);
      v35 = v8;
      if ( v7 == -1 )
      {
LABEL_8:
        v10 = *((__int16 *)v6 + 2);
        if ( v8 != -1 )
        {
          *(_WORD *)(v8 * dword_4CC8BC + dword_4CC8D0 + 4) = v10;
          v5 = dword_4CC8BC;
          v8 = v35;
        }
        if ( v10 == -1 )
          *(_WORD *)(v2 + 238) = v8;
        else
          *(_WORD *)(v10 * v5 + dword_4CC8D0 + 6) = v8;
        --*(_WORD *)(v2 + 236);
        *(_WORD *)(v2 + 2 * *v6 + 240) = -1;
        *((_WORD *)v6 + 2) = -1;
        v31 = *(_WORD *)(v3 + 238);
        if ( v31 == -1 )
        {
          result = v36;
        }
        else
        {
          v32 = dword_4CC8BC * v31;
          result = v36;
          *(_WORD *)(v32 + dword_4CC8D0 + 4) = v36;
          v8 = v35;
        }
        *((_WORD *)v6 + 3) = *(_WORD *)(v3 + 238);
        *((_WORD *)v6 + 1) = a2;
        ++*(_WORD *)(v3 + 236);
        *(_WORD *)(v3 + 238) = result;
        *(_WORD *)(v3 + 2 * *v6 + 240) = result;
      }
      else
      {
        while ( 1 )
        {
          v9 = dword_4CC8D0 + v7 * dword_4CC8BC;
          v7 = *(__int16 *)(v9 + 6);
          if ( *v6 == *(_BYTE *)v9 )
            break;
          if ( v7 == -1 )
          {
            v2 = v34;
            v8 = *((__int16 *)v6 + 3);
            goto LABEL_8;
          }
        }
        *(_DWORD *)(v9 + 20) += *((_DWORD *)v6 + 5);
        *(_WORD *)(v9 + 24) += *((_WORD *)v6 + 12);
        *(_WORD *)(v9 + 26) += *((_WORD *)v6 + 13);
        *(_WORD *)(v9 + 28) += *((_WORD *)v6 + 14);
        *(_WORD *)(v9 + 30) += *((_WORD *)v6 + 15);
        *(_WORD *)(v9 + 32) += *((_WORD *)v6 + 16);
        *(_WORD *)(v9 + 34) += *((_WORD *)v6 + 17);
        *(_DWORD *)(v9 + 40) += *((_DWORD *)v6 + 10);
        *(_DWORD *)(v9 + 44) += *((_DWORD *)v6 + 11);
        *(_DWORD *)(v9 + 48) += *((_DWORD *)v6 + 12);
        *(_DWORD *)(v9 + 52) += *((_DWORD *)v6 + 13);
        *(_DWORD *)(v9 + 56) += *((_DWORD *)v6 + 14);
        *(_DWORD *)(v9 + 60) += *((_DWORD *)v6 + 15);
        *(_DWORD *)(v9 + 64) = *((_DWORD *)v6 + 16);
        *(_DWORD *)(v9 + 68) += *((_DWORD *)v6 + 17);
        v11 = *(_DWORD *)(v9 + 72);
        v12 = *((_DWORD *)v6 + 18);
        if ( v12 + v11 > 0 )
        {
          v13 = v12 * *((_DWORD *)v6 + 19);
          *(_DWORD *)(v9 + 72) = v11 + v12;
          *(_DWORD *)(v9 + 76) = (v13 + v11 * *(_DWORD *)(v9 + 76)) / (v12 + v11);
        }
        v14 = *(_DWORD *)(v9 + 80);
        v15 = *((_DWORD *)v6 + 20);
        if ( v15 + v14 > 0 )
        {
          v16 = v15 * *((_DWORD *)v6 + 21);
          *(_DWORD *)(v9 + 80) = v14 + v15;
          *(_DWORD *)(v9 + 84) = (v16 + v14 * *(_DWORD *)(v9 + 84)) / (v15 + v14);
        }
        v17 = *(_DWORD *)(v9 + 88);
        v18 = *((_DWORD *)v6 + 22);
        if ( v18 + v17 > 0 )
        {
          v19 = v18 * *((_DWORD *)v6 + 23);
          *(_DWORD *)(v9 + 88) = v17 + v18;
          *(_DWORD *)(v9 + 92) = (v19 + v17 * *(_DWORD *)(v9 + 92)) / (v18 + v17);
        }
        v20 = *(_DWORD *)(v9 + 96);
        v21 = *((_DWORD *)v6 + 24);
        if ( v21 + v20 > 0 )
        {
          v22 = v21 * *((_DWORD *)v6 + 25);
          *(_DWORD *)(v9 + 96) = v20 + v21;
          *(_DWORD *)(v9 + 100) = (v22 + v20 * *(_DWORD *)(v9 + 100)) / (v21 + v20);
        }
        v23 = *(_DWORD *)(v9 + 104);
        v24 = *((_DWORD *)v6 + 26);
        if ( v24 + v23 > 0 )
        {
          v25 = v24 * *((_DWORD *)v6 + 27);
          *(_DWORD *)(v9 + 104) = v23 + v24;
          *(_DWORD *)(v9 + 108) = (v25 + v23 * *(_DWORD *)(v9 + 108)) / (v24 + v23);
        }
        *(_DWORD *)(v9 + 112) += *((_DWORD *)v6 + 28);
        *(_DWORD *)(v9 + 136) += *((_DWORD *)v6 + 34);
        *(_DWORD *)(v9 + 116) += *((_DWORD *)v6 + 29);
        *(_DWORD *)(v9 + 140) += *((_DWORD *)v6 + 35);
        *(_DWORD *)(v9 + 120) += *((_DWORD *)v6 + 30);
        *(_DWORD *)(v9 + 144) += *((_DWORD *)v6 + 36);
        *(_DWORD *)(v9 + 124) += *((_DWORD *)v6 + 31);
        *(_DWORD *)(v9 + 148) += *((_DWORD *)v6 + 37);
        *(_DWORD *)(v9 + 128) += *((_DWORD *)v6 + 32);
        *(_DWORD *)(v9 + 152) += *((_DWORD *)v6 + 38);
        *(_DWORD *)(v9 + 132) += *((_DWORD *)v6 + 33);
        *(_DWORD *)(v9 + 156) += *((_DWORD *)v6 + 39);
        *(_DWORD *)(v9 + 256) += *((_DWORD *)v6 + 64);
        *(_DWORD *)(v9 + 308) += *((_DWORD *)v6 + 77);
        *(_DWORD *)(v9 + 360) += *((_DWORD *)v6 + 90);
        v26 = v6 + 260;
        v27 = (_DWORD *)(v9 + 160);
        v28 = &v6[-v9];
        v37 = 3;
        do
        {
          *v27 += *(_DWORD *)((char *)v27 + (_DWORD)v28);
          v27[12] += *(v26 - 13);
          v27[25] += *v26;
          v27[38] += v26[13];
          v27[51] += v26[26];
          v27[1] += *(v26 - 24);
          v27[13] += *(v26 - 12);
          v27[26] += v26[1];
          v27[39] += v26[14];
          v27[52] += v26[27];
          v27[2] += *(v26 - 23);
          v27[14] += *(v26 - 11);
          v27[27] += v26[2];
          v27[40] += v26[15];
          v27[53] += v26[28];
          v27[3] += *(v26 - 22);
          v27[15] += *(v26 - 10);
          v27[28] += v26[3];
          v27[41] += v26[16];
          v27[54] += v26[29];
          v27 += 4;
          v26 += 4;
          --v37;
        }
        while ( v37 );
        *(_DWORD *)(v9 + 508) += *((_DWORD *)v6 + 127);
        *(_DWORD *)(v9 + 608) += *((_DWORD *)v6 + 152);
        *(_DWORD *)(v9 + 708) += *((_DWORD *)v6 + 177);
        *(_DWORD *)(v9 + 808) += *((_DWORD *)v6 + 202);
        *(_DWORD *)(v9 + 908) += *((_DWORD *)v6 + 227);
        *(_DWORD *)(v9 + 1008) += *((_DWORD *)v6 + 252);
        v29 = v6 + 612;
        v30 = (_DWORD *)(v9 + 412);
        v38 = 6;
        do
        {
          *v30 += *(_DWORD *)((char *)v30 + (_DWORD)v28);
          v30[25] += *(v29 - 25);
          v30[50] += *v29;
          v30[75] += v29[25];
          v30[100] += v29[50];
          v30[125] += v29[75];
          v30[150] += v29[100];
          v30[1] += *(v29 - 49);
          v30[26] += *(v29 - 24);
          v30[51] += v29[1];
          v30[76] += v29[26];
          v30[101] += v29[51];
          v30[126] += v29[76];
          v30[151] += v29[101];
          v30[2] += *(v29 - 48);
          v30[27] += *(v29 - 23);
          v30[52] += v29[2];
          v30[77] += v29[27];
          v30[102] += v29[52];
          v30[127] += v29[77];
          v30[152] += v29[102];
          v30[3] += *(v29 - 47);
          v30[28] += *(v29 - 22);
          v30[53] += v29[3];
          v30[78] += v29[28];
          v30[103] += v29[53];
          v30[128] += v29[78];
          v30[153] += v29[103];
          v30 += 4;
          v29 += 4;
          --v38;
        }
        while ( v38 );
        *(_DWORD *)(v9 + 1108) += *((_DWORD *)v6 + 277);
        *(_DWORD *)(v9 + 1176) += *((_DWORD *)v6 + 294);
        *(_DWORD *)(v9 + 1112) += *((_DWORD *)v6 + 278);
        *(_DWORD *)(v9 + 1180) += *((_DWORD *)v6 + 295);
        *(_DWORD *)(v9 + 1116) += *((_DWORD *)v6 + 279);
        *(_DWORD *)(v9 + 1184) += *((_DWORD *)v6 + 296);
        *(_DWORD *)(v9 + 1120) += *((_DWORD *)v6 + 280);
        *(_DWORD *)(v9 + 1188) += *((_DWORD *)v6 + 297);
        *(_DWORD *)(v9 + 1124) += *((_DWORD *)v6 + 281);
        *(_DWORD *)(v9 + 1192) += *((_DWORD *)v6 + 298);
        *(_DWORD *)(v9 + 1128) += *((_DWORD *)v6 + 282);
        *(_DWORD *)(v9 + 1196) += *((_DWORD *)v6 + 299);
        *(_DWORD *)(v9 + 1132) += *((_DWORD *)v6 + 283);
        *(_DWORD *)(v9 + 1200) += *((_DWORD *)v6 + 300);
        *(_DWORD *)(v9 + 1136) += *((_DWORD *)v6 + 284);
        *(_DWORD *)(v9 + 1204) += *((_DWORD *)v6 + 301);
        *(_DWORD *)(v9 + 1140) += *((_DWORD *)v6 + 285);
        *(_DWORD *)(v9 + 1208) += *((_DWORD *)v6 + 302);
        *(_DWORD *)(v9 + 1144) += *((_DWORD *)v6 + 286);
        *(_DWORD *)(v9 + 1212) += *((_DWORD *)v6 + 303);
        *(_DWORD *)(v9 + 1148) += *((_DWORD *)v6 + 287);
        *(_DWORD *)(v9 + 1216) += *((_DWORD *)v6 + 304);
        *(_DWORD *)(v9 + 1152) += *((_DWORD *)v6 + 288);
        *(_DWORD *)(v9 + 1220) += *((_DWORD *)v6 + 305);
        *(_DWORD *)(v9 + 1156) += *((_DWORD *)v6 + 289);
        *(_DWORD *)(v9 + 1224) += *((_DWORD *)v6 + 306);
        *(_DWORD *)(v9 + 1160) += *((_DWORD *)v6 + 290);
        *(_DWORD *)(v9 + 1228) += *((_DWORD *)v6 + 307);
        *(_DWORD *)(v9 + 1164) += *((_DWORD *)v6 + 291);
        *(_DWORD *)(v9 + 1232) += *((_DWORD *)v6 + 308);
        *(_DWORD *)(v9 + 1168) += *((_DWORD *)v6 + 292);
        *(_DWORD *)(v9 + 1236) += *((_DWORD *)v6 + 309);
        *(_DWORD *)(v9 + 1172) += *((_DWORD *)v6 + 293);
        *(_DWORD *)(v9 + 1240) += *((_DWORD *)v6 + 310);
        result = *((_DWORD *)v6 + 311);
        *(_DWORD *)(v9 + 1244) += result;
        *(_DWORD *)(v9 + 1248) += *((_DWORD *)v6 + 312);
        v8 = v35;
        v3 = v33;
        v2 = v34;
      }
      v36 = v8;
      if ( v8 == -1 )
        break;
      result = v8;
    }
  }
  return result;
}
