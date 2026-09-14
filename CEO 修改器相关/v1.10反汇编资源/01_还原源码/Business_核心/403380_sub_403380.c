// 函数 0x403380  sub_403380  size=0x3A6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_403380(int a1)
{
  int v1; // edi
  int v2; // eax
  __int16 *v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int result; // eax
  char *v8; // esi
  int v9; // ebx
  __int16 v10; // cx
  int v11; // eax
  int v12; // ecx
  unsigned __int8 v13; // al
  int v14; // ecx
  int v15; // eax
  char v16; // cl
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  int v20; // edi
  int i; // [esp+Ch] [ebp-1B8h]
  int v22; // [esp+10h] [ebp-1B4h]
  int v23; // [esp+14h] [ebp-1B0h]
  _WORD v24[106]; // [esp+18h] [ebp-1ACh] BYREF
  _WORD v25[106]; // [esp+ECh] [ebp-D8h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v24, 0, sizeof(v24));
  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v2 = *(__int16 *)(v1 + 752);
  for ( i = v1; v2 != -1; v2 = v3[3] )
  {
    v3 = (__int16 *)(dword_4D0C84 + v2 * dword_4D0C70);
    v4 = sub_4275A0(v3);
    if ( v4 != -1 )
    {
      v5 = v3[114];
      v6 = v3[115];
      ++v25[v4];
      v24[v4] += (v3[110] + v3[111] + v3[112] + v3[113] + v5 + v6) / 6;
    }
  }
  result = *(__int16 *)(v1 + 238);
  if ( result == -1 )
    return result;
  while ( 1 )
  {
    v8 = (char *)(dword_4CC8D0 + result * dword_4CC8BC);
    v9 = *v8;
    v10 = v25[v9];
    v22 = v9;
    v23 = *(_DWORD *)dword_870814 + 72 * v9;
    if ( v10 > 0 )
    {
      v11 = (__int16)v24[v9] / v10;
      if ( v11 <= 20 )
      {
        v17 = *((__int16 *)v8 + 13);
        v18 = 2 * (*((__int16 *)v8 + 15) + *((__int16 *)v8 + 16));
        *((_WORD *)v8 + 630) = 0;
        if ( v17 > v18
          && *(_WORD *)(i + 2 * (unsigned __int8)v8[1256] + 784) == *(_WORD *)(i + 2 * (unsigned __int8)v8[1256] + 768) )
        {
          ++*((_WORD *)v8 + 631);
        }
        else
        {
          *((_WORD *)v8 + 631) = 0;
        }
        if ( !v11 && v10 >= 2 && !sub_4151B0(v8) )
        {
          v19 = *(__int16 *)(i + 752);
          if ( v19 != -1 )
          {
            while ( 1 )
            {
              v20 = dword_4D0C84 + v19 * dword_4D0C70;
              if ( v22 == sub_4275A0(v20) )
                break;
              v19 = *(__int16 *)(v20 + 6);
              if ( v19 == -1 )
                goto LABEL_43;
            }
            sub_4266F0(v19);
            *((_WORD *)v8 + 631) = 0;
          }
        }
        goto LABEL_43;
      }
      v12 = *((__int16 *)v8 + 13);
      if ( v12 - *((__int16 *)v8 + 16) == *((__int16 *)v8 + 15) )
      {
        ++*((_WORD *)v8 + 630);
        *((_WORD *)v8 + 631) = 0;
      }
      if ( v12 < *(__int16 *)(i + 2 * (unsigned __int8)v8[1256] + 768) / 2 && sub_415E80(v8) )
        break;
    }
LABEL_43:
    result = *((__int16 *)v8 + 3);
    if ( result == -1 )
      return result;
  }
  v13 = *(_BYTE *)(v23 + 12);
  v14 = *(__int16 *)(i + 1620);
  if ( v13 != 2 )
  {
    if ( v13 < 2u )
    {
      if ( v14 != -1 )
      {
        while ( 1 )
        {
          v15 = v14 * dword_4C43C8;
          v16 = *(_BYTE *)(v14 * dword_4C43C8 + dword_4C43DC + 7);
          result = dword_4C43DC + v15;
          if ( (v16 == 3 || v16 == 4) && *(_BYTE *)(result + 85) == 0xFF )
            goto LABEL_46;
          v14 = *(__int16 *)(result + 20);
          if ( v14 == -1 )
            goto LABEL_30;
        }
      }
    }
    else if ( v14 != -1 )
    {
      while ( 1 )
      {
        result = dword_4C43DC + v14 * dword_4C43C8;
        if ( !*(_BYTE *)(result + 7) && *(_BYTE *)(result + 85) == 0xFF )
          break;
        v14 = *(__int16 *)(result + 20);
        if ( v14 == -1 )
        {
          *((_WORD *)v8 + 630) = 0;
          goto LABEL_43;
        }
      }
LABEL_46:
      *(_BYTE *)(result + 85) = v9;
      goto LABEL_47;
    }
    goto LABEL_30;
  }
  if ( v14 == -1 )
  {
LABEL_30:
    *((_WORD *)v8 + 630) = 0;
    goto LABEL_43;
  }
  while ( 1 )
  {
    result = dword_4C43DC + v14 * dword_4C43C8;
    if ( *(_BYTE *)(result + 7) == 5 && *(__int16 *)(result + 4) == v9 && *(_BYTE *)(result + 85) == 0xFF )
      break;
    v14 = *(__int16 *)(result + 20);
    if ( v14 == -1 )
    {
      *((_WORD *)v8 + 630) = 0;
      goto LABEL_43;
    }
  }
  *(_BYTE *)(result + 85) = v9;
LABEL_47:
  *(_WORD *)(result + 86) = *(_WORD *)(v23 + 16);
  return result;
}
