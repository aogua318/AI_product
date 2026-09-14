// 函数 0x42d230  sub_42D230  size=0xACC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __fastcall sub_42D230(int a1)
{
  int v1; // esi
  __int16 *v2; // eax
  _DWORD *v3; // ebx
  unsigned __int8 *v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  bool v10; // zf
  int v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  int i; // edi
  __int16 v16; // ax
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  __int16 v20; // ax
  int v21; // ecx
  int v22; // edi
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // edx
  int v27; // edi
  int v28; // eax
  _WORD *v29; // eax
  __int16 v30; // ax
  __int16 v31; // ax
  int v32; // edi
  int v34; // [esp-10h] [ebp-130h]
  int v35; // [esp-Ch] [ebp-12Ch]
  int v36; // [esp-8h] [ebp-128h]
  int v37; // [esp+8h] [ebp-118h] BYREF
  int v38; // [esp+Ch] [ebp-114h] BYREF
  unsigned int v39; // [esp+10h] [ebp-110h] BYREF
  unsigned int v40; // [esp+14h] [ebp-10Ch] BYREF
  int v41; // [esp+18h] [ebp-108h]
  CHAR Text[256]; // [esp+1Ch] [ebp-104h] BYREF

  v1 = dword_4D10A8 + a1 * dword_4D1094;
  LOWORD(v2) = *(char *)(v1 + 13);
  v3 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14));
  switch ( *(_BYTE *)(v1 + 13) )
  {
    case 0:
      if ( *(_BYTE *)(v1 + 12) != 3 )
        goto LABEL_34;
      v4 = (unsigned __int8 *)(dword_4D0BAC + *(__int16 *)(v1 + 20) * dword_4D0B98);
      v41 = *(__int16 *)(v1 + 20);
      switch ( v4[11] )
      {
        case 0u:
          if ( !sub_464E90(*((__int16 *)v4 + 7)) )
            goto LABEL_12;
          v5 = dword_4D0C84 + dword_4D0C70 * *((__int16 *)v4 + 7);
          v2 = (__int16 *)(dword_4CC8D0
                         + dword_4CC8BC
                         * *(__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v5 + 2) + 2 * *v4 + 240));
          --v2[15];
          LOWORD(v2) = *(_WORD *)(v5 + 2);
          if ( (_WORD)v2 == *(_WORD *)(v1 + 14) && (v2 = (__int16 *)sub_427430((double *)v5, v41)) != 0 )
          {
            LOWORD(v2) = sub_420B10(v41);
          }
          else
          {
            v4[11] = -1;
            *((_WORD *)v4 + 7) = -1;
          }
          if ( *((__int16 *)v4 + 7) == dword_4B1198 )
            LOWORD(v2) = sub_43B560();
          break;
        case 3u:
          sub_421C70(v4, 2, *(__int16 *)(dword_4C4364 * *((__int16 *)v4 + 7) + dword_4C4378 + 8));
          LOWORD(v2) = sub_42C3E0(v1, 0, 1);
          *(_BYTE *)(v1 + 13) = 0;
          break;
        case 6u:
          v2 = (__int16 *)(dword_8703D0 + dword_8703BC * *((__int16 *)v4 + 7));
          if ( v2[14] == -1 )
          {
LABEL_12:
            *((_WORD *)v4 + 7) = -1;
            goto LABEL_20;
          }
          if ( (*(_WORD *)(v1 + 18) & 0x8000) != 0 )
          {
            if ( (*(_WORD *)(v1 + 18) & 0x7FFF) != 0 )
            {
              sub_421C70(v4, 3, v2[3]);
              sub_42C3E0(v1, 0, 1);
              *(_BYTE *)(v1 + 13) = 0;
              *(_WORD *)(v1 + 18) &= ~0x8000u;
              LOWORD(v2) = sub_415060(
                             (char *)(dword_4CC8D0 + dword_4CC8BC * *((__int16 *)v3 + *v4 + 120)),
                             -*((_DWORD *)v4 + 5),
                             (char)v4[2],
                             0);
            }
          }
          else
          {
            *(_WORD *)(v1 + 18) |= 0x8000u;
          }
          break;
        case 7u:
          sub_421C70(v4, 4, *(__int16 *)(dword_870854 * *((__int16 *)v4 + 7) + dword_870868 + 6));
          sub_42C3E0(v1, 0, 1);
          v6 = *(__int16 *)(v1 + 14);
          *(_BYTE *)(v1 + 13) = 0;
          v7 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(dword_4CCAAC + dword_4CCA98 * v6 + 2 * *v4 + 240);
          --*(_WORD *)(v7 + 30);
          LOWORD(v2) = sub_415060((char *)v7, -*((_DWORD *)v4 + 5), (char)v4[2], 0);
          break;
        default:
          *((_WORD *)v4 + 7) = -1;
LABEL_20:
          v8 = *v4;
          v4[11] = -1;
          LOWORD(v2) = sub_40C730(
                         (int)v3,
                         *(__int16 *)(v1 + 16),
                         60,
                         *(unsigned __int8 *)(dword_4CC8BC * *((__int16 *)v3 + v8 + 120) + dword_4CC8D0 + 1256) + 1348,
                         0,
                         0);
          break;
      }
      return (__int16)v2;
    case 2:
      sub_42C290((__int16 *)(dword_4D10A8 + a1 * dword_4D1094), (int)&v38, (int)&v37);
      v9 = *(__int16 *)(v1 + 26);
      v10 = (*(_BYTE *)(dword_4D0C84 + dword_4D0C70 * v9 + 18) & 1) == 0;
      v41 = dword_4D0C84 + dword_4D0C70 * v9;
      if ( v10 || sub_426DD0(v9, v38, v37) )
      {
        for ( i = 0; i < 10; ++i )
        {
          v2 = (__int16 *)sub_42C590(v1);
          if ( v2 )
            break;
        }
        if ( i != 10 )
          goto LABEL_35;
        goto LABEL_34;
      }
      v11 = 0;
      while ( 1 )
      {
        v12 = v38 + dword_4B32D0[2 * v11];
        v13 = v37 + dword_4B32D4[2 * v11];
        v40 = v12;
        v39 = v13;
        v14 = v3[6];
        if ( v12 < v14 && v13 < v3[7] && *(_DWORD *)(v3[35] + 4 * (v12 + v13 * v14)) == *(__int16 *)(v41 + 16) )
          break;
        if ( ++v11 >= 4 )
        {
          LOWORD(v2) = sub_42C3E0(v1, 2, 1);
          *(_BYTE *)(v1 + 13) = 0;
          return (__int16)v2;
        }
      }
      sub_4867D0(*(__int16 *)(v1 + 16), v11);
      sub_426B30((__int16 *)v41, 0);
      LOWORD(v2) = sub_42C3E0(v1, 2, 1);
      *(_BYTE *)(v1 + 13) = 0;
      return (__int16)v2;
    case 3:
      switch ( *(_WORD *)(v1 + 22) )
      {
        case 0:
          v28 = dword_4D0C70 * *(__int16 *)(v1 + 24);
          v27 = *(__int16 *)(v28 + dword_4D0C84 + 130);
          v29 = (_WORD *)(v28 + dword_4D0C84 + 130);
          if ( v27 == -1 )
            goto LABEL_78;
          *v29 = -1;
          sub_426B30((__int16 *)(dword_4D0C84 + dword_4D0C70 * *(__int16 *)(v1 + 24)), 1);
          goto LABEL_77;
        case 3:
          v26 = dword_4C4364 * *(__int16 *)(v1 + 24);
          v27 = *(__int16 *)(v26 + dword_4C4378 + 2);
          if ( v27 == -1 )
            goto LABEL_78;
          *(_WORD *)(v26 + dword_4C4378 + 2) = -1;
          if ( *(__int16 *)(v1 + 24) == dword_4B101C )
          {
            sub_43AEE0(0);
            dword_4B101C = -1;
            dword_4B1010 = -1;
          }
          goto LABEL_77;
        case 6:
          v30 = *(_WORD *)(v1 + 18);
          if ( v30 < 0 )
          {
            v2 = (__int16 *)(v30 & 0x7FFF);
            if ( (unsigned int)v2 <= 1 )
              return (__int16)v2;
            v31 = *(_WORD *)(v1 + 20);
            if ( v31 == -1 )
            {
              v27 = v41;
              *(_WORD *)(v1 + 18) &= ~0x8000u;
            }
            else
            {
              v27 = v31;
              v41 = dword_4D0BAC + v31 * dword_4D0B98;
              if ( v31 != sub_430C00(v31) )
              {
                *(_WORD *)(v1 + 18) &= ~0x8000u;
                *(_WORD *)(v1 + 20) = -1;
                LOWORD(v2) = sub_42C3E0(v1, 0, 0);
                *(_BYTE *)(v1 + 13) = 0;
                return (__int16)v2;
              }
              sub_486260(*(__int16 *)(v27 * dword_4D0B98 + dword_4D0BAC + 6), 0, 0);
              v35 = *(char *)(v41 + 2);
              v34 = *(_DWORD *)(v41 + 20);
              v41 = dword_4CC8D0 + dword_4CC8BC * *((__int16 *)v3 + *(unsigned __int8 *)v41 + 120);
              sub_415060((char *)v41, v34, v35, 0);
              --*(_WORD *)(v41 + 34);
              *(_WORD *)(v1 + 18) &= ~0x8000u;
            }
LABEL_77:
            if ( v27 == -1 )
            {
LABEL_78:
              LOWORD(v2) = sub_42C3E0(v1, 0, 1);
            }
            else
            {
              v36 = *(__int16 *)(v1 + 16);
              v41 = dword_4D0BAC + v27 * dword_4D0B98;
              sub_421C70((unsigned __int8 *)v41, 1, v36);
              LOWORD(v2) = *(char *)(v41 + 11);
              switch ( *(_BYTE *)(v41 + 11) )
              {
                case 0:
                  v32 = v41;
                  sub_426C50((__int16 *)(dword_4D0C84 + dword_4D0C70 * *(__int16 *)(v41 + 14)), (int)&v40, (int)&v39);
                  v2 = (__int16 *)sub_42C450((__int16 *)v1, v40, v39, 0, 3);
                  if ( !v2 )
                  {
                    sprintf(
                      Text,
                      "%d %s",
                      *(__int16 *)(dword_4D0C70 * *(__int16 *)(v32 + 14) + dword_4D0C84),
                      (const char *)(388 * *(__int16 *)(dword_4D0C70 * *(__int16 *)(v32 + 14) + dword_4D0C84)
                                   + *(_DWORD *)dword_4D0C8C
                                   + 56));
                    LOWORD(v2) = MessageBoxA(hWnd, Text, aErrorMachineTy, 0);
                  }
                  break;
                case 3:
                  sub_40C3F0((__int16 *)(dword_4C4378 + dword_4C4364 * *(__int16 *)(v41 + 14)), &v40, &v39);
                  goto LABEL_85;
                case 6:
                  sub_483D50(*(__int16 *)(dword_8703BC * *(__int16 *)(v41 + 14) + dword_8703D0 + 6), 0, -1, &v40, &v39);
                  LOWORD(v2) = sub_42C450((__int16 *)v1, v40, v39, 0, 3);
                  break;
                case 7:
                  sub_434520(&v40, &v39);
LABEL_85:
                  LOWORD(v2) = sub_42C450((__int16 *)v1, v40, v39, 0, 3);
                  break;
                default:
                  return (__int16)v2;
              }
            }
          }
          else
          {
            LOWORD(v2) = v30 | 0x8000;
            *(_WORD *)(v1 + 18) = (_WORD)v2;
          }
          break;
        case 7:
          v27 = sub_434620(dword_870868 + dword_870854 * *(__int16 *)(v1 + 24));
          sub_415060(
            (char *)(dword_4CC8D0
                   + dword_4CC8BC * *((__int16 *)v3 + *(unsigned __int8 *)(dword_4D0BAC + v27 * dword_4D0B98) + 120)),
            *(_DWORD *)(dword_4D0BAC + v27 * dword_4D0B98 + 20),
            *(char *)(dword_4D0BAC + v27 * dword_4D0B98 + 2),
            0);
          goto LABEL_77;
        default:
          v27 = v41;
          goto LABEL_77;
      }
      return (__int16)v2;
    case 4:
      sub_42C290((__int16 *)(dword_4D10A8 + a1 * dword_4D1094), (int)&v38, (int)&v37);
      v22 = 0;
      v41 = dword_870868 + dword_870854 * *(__int16 *)(v1 + 30);
      if ( *(_WORD *)(v41 + 12) )
      {
        while ( 1 )
        {
          v23 = v38 + dword_4B32D0[2 * v22];
          v24 = v37 + dword_4B32D4[2 * v22];
          v40 = v23;
          v39 = v24;
          v25 = v3[6];
          if ( v23 < v25 && v24 < v3[7] && *(_DWORD *)(v3[35] + 4 * (v23 + v24 * v25)) == *(__int16 *)(v41 + 6) )
            break;
          if ( ++v22 >= 4 )
            goto LABEL_57;
        }
        sub_4867D0(*(__int16 *)(v1 + 16), v22);
LABEL_57:
        sub_42C3E0(v1, 4, 1);
        LOWORD(v2) = sub_42C3E0(dword_4D10A8 + dword_4D1094 * *(__int16 *)(v41 + 12), 0, 0);
        *(_BYTE *)(v1 + 13) = 0;
      }
      else
      {
        do
        {
          v2 = (__int16 *)sub_42C590(v1);
          if ( v2 )
            break;
          ++v22;
        }
        while ( v22 < 10 );
        *(_BYTE *)(v1 + 13) = 0;
      }
      return (__int16)v2;
    case 5:
      v16 = *(_WORD *)(v1 + 26);
      if ( v16 == -1 )
      {
        LOWORD(v2) = sub_42BF60(a1);
        return (__int16)v2;
      }
      if ( !sub_464E90(v16)
        || (v18 = dword_870868 + dword_870854 * *(__int16 *)(v1 + 26), *(_WORD *)v18 != *(_WORD *)(v1 + 14)) )
      {
        LOWORD(v2) = nullsub_2(v17);
        return (__int16)v2;
      }
      if ( (*(_BYTE *)(v18 + 14) & 4) != 0 )
        goto LABEL_49;
      sub_434580(&v40, &v39);
      sub_42C290((__int16 *)v1, (int)&v38, (int)&v37);
      if ( v38 == v40 && v37 == v39 )
      {
        if ( *(_DWORD *)(dword_4CC8BC * *((__int16 *)v3 + *(char *)(v1 + 20) + 120) + dword_4CC8D0 + 16) > *(_DWORD *)(v1 + 32) )
        {
LABEL_49:
          LOWORD(v2) = sub_42C590(v1);
        }
        else
        {
          v19 = *(unsigned __int8 *)(v3[40] * *(__int16 *)(v18 + 6) + v3[45] + 8) - 3;
          sub_4867D0(*(__int16 *)(v1 + 16), v19 + (v19 < 0 ? 4 : 0));
          sub_42C3E0(v1, 0, 1);
          *(_WORD *)(v1 + 12) = 5;
          v20 = *(_WORD *)(v18 + 12);
          *(_BYTE *)(v18 + 14) |= 4u;
          if ( v20 != -1 )
          {
            v21 = dword_4D10A8 + dword_4D1094 * v20;
            if ( *(_BYTE *)(v21 + 12) == 4 )
              sub_42C3E0(v21, 2, 0);
          }
          *(_WORD *)(v1 + 18) &= 0x8000u;
          LOWORD(v2) = 0x8000;
        }
      }
      else
      {
LABEL_34:
        LOWORD(v2) = sub_42C3E0(v1, 0, 1);
LABEL_35:
        *(_BYTE *)(v1 + 13) = 0;
      }
      return (__int16)v2;
    default:
      return (__int16)v2;
  }
}
