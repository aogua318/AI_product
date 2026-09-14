// 函数 0x452130  sub_452130  size=0x33E  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_452130()
{
  int v0; // edx
  int v1; // ebx
  double *v2; // esi
  int *v3; // ecx
  double v4; // st6
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v12; // [esp+Ch] [ebp-FCh]
  int v13; // [esp+10h] [ebp-F8h]
  int v14; // [esp+10h] [ebp-F8h]
  int v15; // [esp+10h] [ebp-F8h]
  int v16; // [esp+10h] [ebp-F8h]
  int v17; // [esp+10h] [ebp-F8h]
  int v18; // [esp+10h] [ebp-F8h]
  _BYTE v19[160]; // [esp+14h] [ebp-F4h] BYREF
  _BYTE v20[80]; // [esp+B4h] [ebp-54h] BYREF

  v0 = dword_8BE038;
  v1 = dword_8BE040;
  v2 = (double *)v19;
  v12 = v20;
  v3 = (int *)&unk_4D10B8;
  do
  {
    *v12 = (unsigned __int16)word_87094E[*((__int16 *)v3 + 1)];
    if ( dword_4B3828 )
    {
      if ( dword_4B3828 == 1 )
      {
        switch ( v1 )
        {
          case 0:
          case 1:
            v4 = (double)v3[106 * byte_4CE047 + 6362 + v0];
            goto LABEL_39;
          case 2:
            v4 = (double)v3[106 * byte_4CE047 + 10602 + v0];
            goto LABEL_39;
          case 3:
            v4 = (double)v3[106 * byte_4CE047 + 23322 + v0];
            goto LABEL_39;
          case 4:
            v7 = v0 + 106 * byte_4CE047;
            v15 = v3[v7 + 23322];
            if ( v15 <= 0 )
              goto LABEL_36;
            v4 = *(double *)&v3[2 * v7 + 16220] / (double)v15;
            goto LABEL_39;
          case 5:
            v4 = (double)v3[106 * byte_4CE047 + 27562 + v0];
            goto LABEL_39;
          case 6:
            v8 = v0 + 106 * byte_4CE047;
            v16 = v3[v8 + 27562];
            if ( v16 <= 0 )
              goto LABEL_36;
            v4 = *(double *)&v3[2 * v8 + 33180] / (double)v16;
            goto LABEL_39;
          case 7:
            v4 = (double)v3[106 * byte_4CE047 + 40282 + v0];
            goto LABEL_39;
          case 8:
            v4 = (double)v3[106 * byte_4CE047 + 44522 + v0];
            goto LABEL_39;
          default:
            goto LABEL_40;
        }
      }
      if ( dword_4B3828 == 2 )
      {
        switch ( v1 )
        {
          case 0:
          case 1:
            v4 = (double)v3[106 * byte_4CE045 + 7740 + v0];
            goto LABEL_39;
          case 2:
            v4 = (double)v3[106 * byte_4CE045 + 11980 + v0];
            goto LABEL_39;
          case 3:
            v4 = (double)v3[106 * byte_4CE045 + 24700 + v0];
            goto LABEL_39;
          case 4:
            v5 = v0 + 106 * byte_4CE045;
            v13 = v3[v5 + 24700];
            if ( v13 <= 0 )
              goto LABEL_36;
            v4 = *(double *)&v3[2 * v5 + 18976] / (double)v13;
            goto LABEL_39;
          case 5:
            v4 = (double)v3[106 * byte_4CE045 + 28940 + v0];
            goto LABEL_39;
          case 6:
            v6 = v0 + 106 * byte_4CE045;
            v14 = v3[v6 + 28940];
            if ( v14 <= 0 )
              goto LABEL_36;
            v4 = *(double *)&v3[2 * v6 + 35936] / (double)v14;
            goto LABEL_39;
          case 7:
            v4 = (double)v3[106 * byte_4CE045 + 41660 + v0];
            goto LABEL_39;
          case 8:
            v4 = (double)v3[106 * byte_4CE045 + 45900 + v0];
            goto LABEL_39;
          default:
            break;
        }
      }
    }
    else
    {
      switch ( v1 )
      {
        case 0:
        case 1:
          v4 = (double)v3[106 * byte_4CE048 + 4984 + v0];
          goto LABEL_39;
        case 2:
          v4 = (double)v3[106 * byte_4CE048 + 9224 + v0];
          goto LABEL_39;
        case 3:
          v4 = (double)v3[106 * byte_4CE048 + 21944 + v0];
          goto LABEL_39;
        case 4:
          v9 = v0 + 106 * byte_4CE048;
          v17 = v3[v9 + 21944];
          if ( v17 <= 0 )
            goto LABEL_36;
          v4 = *(double *)&v3[2 * v9 + 13464] / (double)v17;
          goto LABEL_39;
        case 5:
          v4 = (double)v3[106 * byte_4CE048 + 26184 + v0];
          goto LABEL_39;
        case 6:
          v10 = v0 + 106 * byte_4CE048;
          v18 = v3[v10 + 26184];
          if ( v18 <= 0 )
          {
LABEL_36:
            *v2 = 0.0;
          }
          else
          {
            v4 = *(double *)&v3[2 * v10 + 30424] / (double)v18;
LABEL_39:
            *v2 = v4;
          }
          break;
        case 7:
          v4 = (double)v3[106 * byte_4CE048 + 38904 + v0];
          goto LABEL_39;
        case 8:
          v4 = (double)v3[106 * byte_4CE048 + 43144 + v0];
          goto LABEL_39;
        default:
          break;
      }
    }
LABEL_40:
    ++v12;
    v3 += 47470;
    ++v2;
  }
  while ( (int)v3 < (int)&dbl_870318 );
  sub_45D9F0(633, 486, 34, 20, v19, v20);
  sub_467680(59);
  return sub_466CA0(&dword_8EEDEC, 0, 0);
}
