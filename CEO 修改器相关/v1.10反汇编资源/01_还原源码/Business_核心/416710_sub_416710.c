// 函数 0x416710  sub_416710  size=0x465  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_416710(int a1)
{
  char v1; // al
  int v2; // eax
  _WORD *v3; // ecx
  int v4; // edx
  int v5; // esi
  _WORD *v6; // edx
  __int16 v7; // ax
  __int16 v8; // ax
  int result; // eax
  _WORD *v10; // edx
  int v11; // eax
  __int16 v12; // ax
  _WORD *v13; // edi
  bool v14; // zf
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // ax
  _WORD *v20; // edx
  __int16 v21; // ax
  __int16 v22; // di
  _WORD *v23; // edx
  __int16 v24; // ax
  __int16 v25; // ax
  _WORD *v26; // edx
  __int16 v27; // ax
  _WORD *v28; // edx
  __int16 v29; // ax
  int v30; // ecx

  v1 = *(_BYTE *)(*(_DWORD *)(dword_4CC8D8 + 180) + a1 * *(_DWORD *)(dword_4CC8D8 + 160) + 11);
  if ( v1 == 11 || v1 == 9 || v1 == 10 )
    return 0;
  v2 = sub_4165A0(a1);
  v3 = (_WORD *)dword_4CC8E0;
  v4 = *(_DWORD *)(dword_4CC8E0 + 180) + v2 * *(_DWORD *)(dword_4CC8E0 + 160);
  v5 = *(__int16 *)(v4 + 12);
  switch ( *(_BYTE *)(v4 + 11) )
  {
    case 0:
      v6 = (_WORD *)(dword_4D0C84 + v5 * dword_4D0C70);
      v6[8] = v2;
      v6[1] = dword_4CCA90;
      v6[3] = v3[376];
      v6[2] = -1;
      v3[376] = v5;
      v7 = v6[3];
      if ( v7 != -1 )
        *(_WORD *)(dword_4D0C70 * v7 + dword_4D0C84 + 4) = v5;
      v8 = v6[65];
      if ( v8 == -1 )
        return 0;
      *(_WORD *)(dword_4D0B98 * v8 + dword_4D0BAC + 4) = v6[1];
      result = 0;
      break;
    case 1:
      v10 = (_WORD *)(dword_4D10A8 + v5 * dword_4D1094);
      v10[8] = v2;
      v10[7] = dword_4CCA90;
      v10[3] = v3[382];
      v10[2] = -1;
      v11 = dword_4CC8D8;
      *v10 += *(_WORD *)(dword_4CC8D8 + 188) - v3[94];
      v10[1] += *(_WORD *)(v11 + 192) - v3[96];
      v3[382] = v5;
      v12 = v10[3];
      if ( v12 == -1 )
        return 0;
      *(_WORD *)(dword_4D1094 * v12 + dword_4D10A8 + 4) = v5;
      result = 0;
      break;
    case 2:
      v20 = (_WORD *)(dword_4CC8B0 + v5 * dword_4CC89C);
      v20[3] = v2;
      *v20 = dword_4CCA90;
      v20[2] = v3[378];
      v20[1] = -1;
      v3[378] = v5;
      v21 = v20[2];
      if ( v21 == -1 )
        return 0;
      *(_WORD *)(dword_4CC89C * v21 + dword_4CC8B0 + 2) = v5;
      result = 0;
      break;
    case 3:
      v28 = (_WORD *)(dword_4C4378 + v5 * dword_4C4364);
      v28[4] = v2;
      *v28 = dword_4CCA90;
      v28[3] = v3[377];
      v28[2] = -1;
      v3[377] = v5;
      v29 = v28[3];
      if ( v29 == -1 )
        return 0;
      *(_WORD *)(dword_4C4364 * v29 + dword_4C4378 + 4) = v5;
      result = 0;
      break;
    case 4:
      v30 = dword_4D0BAC + v5 * dword_4D0B98;
      *(_WORD *)(v30 + 6) = v2;
      *(_WORD *)(v30 + 4) = dword_4CCA90;
      result = 0;
      break;
    case 5:
      *(_WORD *)(v5 * dword_4D0B98 + dword_4D0BAC + 8) = v2;
      result = 0;
      break;
    case 6:
      v13 = (_WORD *)(dword_8703D0 + v5 * dword_8703BC);
      v14 = v13[14] == 0xFFFF;
      v13[3] = v2;
      *v13 = dword_4CCA90;
      if ( !v14 )
      {
        v15 = v13[12];
        if ( v15 != -1 )
        {
          v16 = sub_4165A0(v15);
          v3 = (_WORD *)dword_4CC8E0;
          v13[12] = v16;
        }
        v17 = v13[13];
        if ( v17 != -1 )
        {
          v18 = sub_4165A0(v17);
          v3 = (_WORD *)dword_4CC8E0;
          v13[13] = v18;
        }
      }
      v13[2] = v3[379];
      v13[1] = -1;
      v3[379] = v5;
      v19 = v13[2];
      if ( v19 == -1 )
        return 0;
      *(_WORD *)(dword_8703BC * v19 + dword_8703D0 + 2) = v5;
      result = 0;
      break;
    case 7:
      v22 = dword_4CCA90;
      v23 = (_WORD *)(dword_870868 + v5 * dword_870854);
      v23[3] = v2;
      *v23 = v22;
      v23[2] = v3[380];
      v23[1] = -1;
      v24 = v23[5];
      if ( v24 != -1 )
        *(_WORD *)(dword_4D0B98 * v24 + dword_4D0BAC + 4) = v22;
      v3[380] = v5;
      v25 = v23[2];
      if ( v25 == -1 )
        return 0;
      *(_WORD *)(dword_870854 * v25 + dword_870868 + 2) = v5;
      result = 0;
      break;
    case 8:
      v26 = (_WORD *)(dword_4D1080 + v5 * dword_4D106C);
      v26[3] = v2;
      *v26 = dword_4CCA90;
      v26[5] = v3[381];
      v26[4] = -1;
      v3[381] = v5;
      v27 = v26[5];
      if ( v27 == -1 )
        return 0;
      *(_WORD *)(dword_4D106C * v27 + dword_4D1080 + 8) = v5;
      result = 0;
      break;
    default:
      if ( a1 == dword_4B119C )
      {
        dword_4B119C = v2;
        result = 0;
      }
      else if ( a1 == dword_4B1020 )
      {
        dword_4B1020 = v2;
        result = 0;
      }
      else if ( a1 == dword_4B1104 )
      {
        dword_4B1104 = v2;
        result = 0;
      }
      else if ( a1 == dword_4B32C0 )
      {
        dword_4B32C0 = v2;
        result = 0;
      }
      else
      {
        if ( a1 != dword_4B32B8 )
        {
          if ( a1 == dword_4B32A4 )
            dword_4B32A4 = v2;
          return 0;
        }
        dword_4B32B8 = v2;
        result = 0;
      }
      break;
  }
  return result;
}
