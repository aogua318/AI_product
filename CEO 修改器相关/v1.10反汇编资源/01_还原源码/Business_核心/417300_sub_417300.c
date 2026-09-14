// 函数 0x417300  sub_417300  size=0x3F9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_417300(int this)
{
  int i; // edi
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int *v7; // edx
  int v8; // eax
  __int16 v9; // bx
  int result; // eax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned int v22; // edi
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // [esp+Ch] [ebp-28h] BYREF
  int v27; // [esp+10h] [ebp-24h]
  int v28; // [esp+14h] [ebp-20h]
  int v29; // [esp+18h] [ebp-1Ch]
  unsigned int v30; // [esp+1Ch] [ebp-18h]
  unsigned int v31; // [esp+20h] [ebp-14h]
  unsigned int v32; // [esp+24h] [ebp-10h]
  int v33; // [esp+28h] [ebp-Ch]
  int *v34; // [esp+2Ch] [ebp-8h]
  int v35; // [esp+30h] [ebp-4h]

  sub_465930(*(_DWORD *)(this + 124), -1, *(_DWORD *)(this + 200) * *(_DWORD *)(this + 196));
  for ( i = 0; i < *(_DWORD *)(this + 200); ++i )
  {
    v3 = 0;
    v4 = (i + *(_DWORD *)(this + 192)) / dword_4B1108;
    v30 = v4;
    if ( *(int *)(this + 196) > 0 )
    {
      while ( 1 )
      {
        v5 = (v3 + *(_DWORD *)(this + 188)) / dword_4B1108;
        if ( v5 < dword_4D0E80 && v4 < dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v5 + v4 * dword_4D0E80)) > 0 )
        {
          v6 = *(_DWORD *)(this + 24);
          v7 = &dword_4B32F0;
          v33 = 0;
          v35 = 1;
          v34 = &dword_4B32F0;
          do
          {
            v32 = i + v7[1];
            v31 = v3 + *v7;
            if ( v31 < v6 && v32 < *(_DWORD *)(this + 28) )
            {
              if ( *(_WORD *)(*(_DWORD *)(this + 120) + 2 * (v31 + v32 * v6)) != 0xFFFF )
                v33 |= v35;
              v7 = v34;
            }
            v35 *= 2;
            v32 = i + v7[3];
            v31 = v3 + v7[2];
            if ( v31 < v6 && v32 < *(_DWORD *)(this + 28) )
            {
              if ( *(_WORD *)(*(_DWORD *)(this + 120) + 2 * (v31 + v32 * v6)) != 0xFFFF )
                v33 |= v35;
              v7 = v34;
            }
            v35 *= 2;
            v32 = i + v7[5];
            v31 = v3 + v7[4];
            if ( v31 < v6 && v32 < *(_DWORD *)(this + 28) )
            {
              if ( *(_WORD *)(*(_DWORD *)(this + 120) + 2 * (v31 + v32 * v6)) != 0xFFFF )
                v33 |= v35;
              v7 = v34;
            }
            v35 *= 2;
            v32 = i + v7[7];
            v31 = v3 + v7[6];
            if ( v31 < v6 && v32 < *(_DWORD *)(this + 28) )
            {
              if ( *(_WORD *)(*(_DWORD *)(this + 120) + 2 * (v31 + v32 * v6)) != 0xFFFF )
                v33 |= v35;
              v7 = v34;
            }
            v7 += 8;
            v35 *= 2;
            v34 = v7;
          }
          while ( (int)v7 < (int)dword_4B3330 );
          switch ( v33 )
          {
            case 0:
              v8 = v3 + i * v6;
              v9 = 0;
              goto LABEL_46;
            case 2:
              v9 = 6;
              goto LABEL_45;
            case 3:
            case 129:
            case 131:
              v9 = 1;
              goto LABEL_45;
            case 6:
            case 12:
            case 14:
              v9 = 2;
              goto LABEL_45;
            case 8:
              v9 = 7;
              goto LABEL_45;
            case 24:
            case 48:
            case 56:
              v9 = 3;
              goto LABEL_45;
            case 32:
              v9 = 8;
              goto LABEL_45;
            case 62:
              v9 = 11;
              goto LABEL_45;
            case 96:
            case 192:
            case 224:
              v9 = 4;
              goto LABEL_45;
            case 128:
              v9 = 5;
              goto LABEL_45;
            case 143:
              v9 = 10;
              goto LABEL_45;
            case 227:
              v9 = 9;
              goto LABEL_45;
            case 248:
              v9 = 12;
LABEL_45:
              v8 = v3 + i * v6;
LABEL_46:
              *(_WORD *)(*(_DWORD *)(this + 124) + 2 * v8) = v9;
              break;
            default:
              break;
          }
        }
        else
        {
          *(_WORD *)(*(_DWORD *)(this + 124) + 2 * (v3 + i * *(_DWORD *)(this + 24))) = -1;
        }
        if ( ++v3 >= *(_DWORD *)(this + 196) )
          break;
        v4 = v30;
      }
    }
  }
  sub_464B60(&v26);
  result = *(__int16 *)(this + 1620);
  if ( result == -1 )
    return result;
  do
  {
    v11 = dword_4C43DC + result * dword_4C43C8;
    v33 = v11;
    v12 = sub_40CDD0(v11);
    sub_464CE0(v12);
    v13 = v29 + 1;
    if ( v29 + 1 < *(_DWORD *)(this + 200) )
    {
      v14 = v26;
      if ( v26 <= v28 )
      {
        v15 = *(_DWORD *)(this + 24);
        while ( v14 >= v15
             || v13 >= *(_DWORD *)(this + 28)
             || *(_WORD *)(*(_DWORD *)(this + 124) + 2 * (v14 + v13 * v15)) == 0xFFFF )
        {
          if ( (int)++v14 > v28 )
          {
            v11 = v33;
            goto LABEL_59;
          }
        }
        v11 = v33;
        *(_BYTE *)(v33 + 28) = 1;
      }
    }
LABEL_59:
    if ( v28 + 1 < *(_DWORD *)(this + 196) )
    {
      v16 = v27;
      if ( v27 <= v29 )
      {
        v17 = *(_DWORD *)(this + 24);
        v18 = v27 * v17;
        while ( v28 + 1 >= v17
             || v16 >= *(_DWORD *)(this + 28)
             || *(_WORD *)(*(_DWORD *)(this + 124) + 2 * (v18 + v28 + 1)) == 0xFFFF )
        {
          ++v16;
          v18 += v17;
          if ( (int)v16 > v29 )
          {
            v11 = v33;
            goto LABEL_68;
          }
        }
        v11 = v33;
        *(_BYTE *)(v33 + 29) = 1;
      }
    }
LABEL_68:
    v19 = v26;
    if ( v26 <= v28 )
    {
      v20 = *(_DWORD *)(this + 24);
      v21 = v27 - 1;
      while ( v19 >= v20
           || v21 >= *(_DWORD *)(this + 28)
           || *(_WORD *)(*(_DWORD *)(this + 124) + 2 * (v19 + v21 * v20)) == 0xFFFF )
      {
        if ( (int)++v19 > v28 )
        {
          v11 = v33;
          goto LABEL_76;
        }
      }
      v11 = v33;
      *(_BYTE *)(v33 + 30) = 1;
    }
LABEL_76:
    v22 = v27;
    if ( v27 > v29 )
      goto LABEL_85;
    v23 = *(_DWORD *)(this + 24);
    v24 = v26 - 1;
    v30 = v26 - 1;
    v25 = v27 * v23;
    while ( 1 )
    {
      if ( v24 >= v23 || v22 >= *(_DWORD *)(this + 28) )
        goto LABEL_82;
      if ( *(_WORD *)(*(_DWORD *)(this + 124) + 2 * (v25 + v24)) != 0xFFFF )
        break;
      v24 = v30;
LABEL_82:
      ++v22;
      v25 += v23;
      if ( (int)v22 > v29 )
      {
        v11 = v33;
        goto LABEL_85;
      }
    }
    v11 = v33;
    *(_BYTE *)(v33 + 31) = 1;
LABEL_85:
    result = *(__int16 *)(v11 + 20);
  }
  while ( result != -1 );
  return result;
}
