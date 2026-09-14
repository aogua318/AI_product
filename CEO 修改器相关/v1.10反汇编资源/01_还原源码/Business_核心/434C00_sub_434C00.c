// 函数 0x434c00  sub_434C00  size=0x40D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __cdecl sub_434C00(int a1)
{
  __int16 result; // ax
  int v2; // edi
  __int16 *v3; // esi
  char v4; // al
  __int16 v5; // si
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  char *v9; // ecx
  __int16 *v10; // ecx
  __int16 *v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // [esp+0h] [ebp-8h] BYREF
  int v15; // [esp+4h] [ebp-4h] BYREF

  if ( dword_4B1028 != -1 && !dword_4CE034 )
    return -1;
  v2 = sub_483C00(a1);
  if ( dword_8709F0
    && dword_4B1028 != -1
    && sub_483C30(a1) < dword_4C43CC
    && *(_BYTE *)(sub_483C30(a1) * dword_4C43C8 + dword_4C43DC + 2) == *(_BYTE *)(dword_4B1028 * dword_4CCA98
                                                                                + dword_4CCAAC
                                                                                + 224) )
  {
    return 0x7FFF;
  }
  switch ( dword_4CE034 )
  {
    case 0:
      if ( v2 )
      {
        if ( v2 != 1 )
          goto LABEL_70;
        result = word_87094C;
      }
      else
      {
        v3 = (__int16 *)(dword_4C43DC + sub_483C30(a1) * dword_4C43C8);
        if ( *((_BYTE *)v3 + 3) )
        {
          if ( *((_BYTE *)v3 + 3) == 2 )
          {
            result = word_8708DA[*v3];
          }
          else
          {
            sub_40D7C0(v3, (int)&v14, (int)&v15);
            v4 = *((_BYTE *)v3 + 2);
            if ( v4 == -1 )
            {
              result = 16714;
            }
            else
            {
              if ( v4 >= 7 )
                v5 = word_87095C;
              else
                v5 = word_87094E[word_4D10BA[94940 * v4]];
              sub_487270(v14, v15, v5, 2);
              result = v5;
            }
          }
        }
        else if ( v3[2] == -1 )
        {
          result = word_87098C;
        }
        else
        {
          result = word_87098E;
        }
      }
      break;
    case 1:
      if ( v2 )
        goto LABEL_70;
      v6 = dword_4C43DC + sub_483C30(a1) * dword_4C43C8;
      if ( *(_BYTE *)(v6 + 3) != 3 )
        goto LABEL_70;
      v7 = *(__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v6 + 16) + 2 * word_4CE03C + 240);
      if ( v7 == -1 )
        goto LABEL_70;
      v8 = dword_4CC8D0 + v7 * dword_4CC8BC;
      if ( sub_415AC0((__int16 *)v8) )
        return 0x7FFF;
      if ( *(_BYTE *)(v8 + 10) == 2 )
      {
        if ( *(_BYTE *)(v8 + 9) == 2 )
          goto LABEL_70;
        result = 32140;
      }
      else
      {
        result = 3042;
      }
      break;
    case 2:
      if ( v2 )
        goto LABEL_70;
      v9 = (char *)(dword_4C43DC + sub_483C30(a1) * dword_4C43C8);
      if ( v9[3] != 3 )
        goto LABEL_70;
      switch ( word_4CE03E )
      {
        case 0:
          result = word_87094E[word_4D10BA[94940 * v9[2]]];
          break;
        case 1:
          if ( v9[7] != 5 )
            goto LABEL_70;
          result = 0x7FFF;
          break;
        case 2:
          if ( v9[7] )
            goto LABEL_70;
          result = 0x7FFF;
          break;
        case 3:
          if ( v9[7] != 3 )
            goto LABEL_70;
          result = 0x7FFF;
          break;
        case 4:
          if ( v9[7] != 4 )
            goto LABEL_70;
          result = 0x7FFF;
          break;
        case 5:
          if ( v9[7] != 1 )
            goto LABEL_70;
          result = 0x7FFF;
          break;
        case 6:
          if ( v9[7] != 2 )
            goto LABEL_70;
          result = 0x7FFF;
          break;
        default:
          goto LABEL_70;
      }
      break;
    case 3:
      if ( v2 )
        goto LABEL_70;
      v10 = (__int16 *)(dword_4C43DC + sub_483C30(a1) * dword_4C43C8);
      if ( *((_BYTE *)v10 + 3) != 2 )
        goto LABEL_70;
      v11 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *v10);
      switch ( word_4CE040 )
      {
        case 0:
          v12 = v11[28] + v11[29] + v11[30] + v11[31];
          break;
        case 1:
          v12 = v11[28];
          break;
        case 2:
          v12 = v11[29];
          break;
        case 3:
          v12 = v11[30];
          break;
        case 4:
          v12 = v11[31];
          break;
        default:
          v12 = v14;
          break;
      }
      if ( v12 >= 300 )
      {
        if ( v12 >= 600 )
          result = 31744;
        else
          result = 32360;
      }
      else
      {
        result = 32736;
      }
      break;
    case 4:
      if ( v2 )
        goto LABEL_70;
      v13 = dword_4C43DC + sub_483C30(a1) * dword_4C43C8;
      if ( *(_BYTE *)(v13 + 3) || word_4CE042 && word_4CE042 != *(__int16 *)(v13 + 4) + 2 )
        goto LABEL_70;
      sub_40D7C0((_DWORD *)v13, (int)&v14, (int)&v15);
      return 0x7FFF;
    default:
LABEL_70:
      result = -1;
      break;
  }
  return result;
}
