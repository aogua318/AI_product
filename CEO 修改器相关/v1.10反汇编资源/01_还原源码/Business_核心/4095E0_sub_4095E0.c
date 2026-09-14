// 函数 0x4095e0  sub_4095E0  size=0x97F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4095E0(int a1)
{
  int v1; // ebx
  int v2; // edx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  char v6; // al
  int v7; // edi
  int v8; // eax
  int i; // ebx
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int j; // ebx
  char v14; // al
  int v15; // eax
  int k; // ebx
  int v17; // eax
  char v18; // al
  int v19; // eax
  __int16 v20; // ax
  bool v21; // zf
  int v22; // eax
  int v23; // [esp+4h] [ebp-28h] BYREF
  int v24; // [esp+8h] [ebp-24h] BYREF
  _DWORD v25[7]; // [esp+Ch] [ebp-20h]

  v1 = 0;
  if ( !dword_8CAF74 )
  {
    switch ( a1 )
    {
      case 13:
        sub_47C950(0);
        return;
      case 27:
        sub_44B960();
        return;
      case 66:
        if ( dword_4C2D3C
          && (_DWORD *)dword_4C2D38 == dword_4D0E68
          && !sub_483C00(dword_4B1010)
          && !*(_BYTE *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 3) )
        {
          sub_40F9F0(dword_4B1024, dword_8703A0);
        }
        return;
      case 67:
        if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
        {
          v3 = dword_4B1024 + 1;
          if ( dword_4B1024 == -1 || (v25[0] = *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 2), v25[0] == -1) )
            v25[0] = dword_8703A0;
          v4 = dword_4C43CC;
          if ( dword_4C43CC > 0 )
          {
            while ( 1 )
            {
              if ( v3 >= v4 )
                v3 = 0;
              if ( sub_464E90(v3) )
              {
                v5 = dword_4C43DC + v3 * dword_4C43C8;
                if ( *(char *)(v5 + 2) == v25[0] )
                {
                  v6 = *(_BYTE *)(v5 + 3);
                  if ( v6 == 1 || v6 >= 4 )
                    break;
                }
              }
              v4 = dword_4C43CC;
              ++v1;
              ++v3;
              if ( v1 >= dword_4C43CC )
                return;
            }
            sub_40DD00(v3);
            sub_4012A0(dword_4D0E68, *(_DWORD *)(v5 + 80), (int)&v23, (int)&v24);
            sub_485F80(v23, v24);
          }
        }
        return;
      case 68:
      case 100:
        if ( dword_4C2D3C )
        {
          if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
          {
            if ( dword_4B1028 == -1 )
            {
              if ( dword_4B1024 != -1 && *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 2) == dword_8703A0 )
              {
                sub_40F920(dword_4B1024);
                dword_4B1024 = -1;
              }
            }
            else if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
            {
              sub_417F10(dword_4B1028);
            }
            dword_4B1010 = -1;
            sub_40DD00(-1);
            sub_4386F0(-1);
          }
          else if ( dword_4B1010 != -1 && *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
          {
            if ( dword_4B1100 != -1 )
            {
              sub_413B60(dword_4B1100);
              dword_4B1100 = -1;
            }
            if ( dword_4B32BC != -1 )
            {
              sub_434090(dword_4B32BC);
              dword_4B32BC = -1;
            }
            if ( dword_4B101C != -1 )
            {
              sub_40BF60(dword_4B101C);
              dword_4B101C = -1;
            }
            if ( dword_4B32B4 != -1 )
            {
              sub_4321D0(dword_4B32B4);
              dword_4B32B4 = -1;
            }
            sub_4095B0();
            dword_4B1010 = -1;
          }
          if ( sub_461900() )
            sub_487220(&unk_4C42A0);
        }
        return;
      case 70:
        v7 = dword_4B1024 + 1;
        if ( dword_4B1024 == -1 || (v25[0] = *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 2), v25[0] == -1) )
          v25[0] = dword_8703A0;
        v8 = dword_4C43CC;
        for ( i = 0; i < dword_4C43CC; ++v7 )
        {
          if ( v7 >= v8 )
            v7 = 0;
          if ( sub_464E90(v7) )
          {
            v10 = dword_4C43DC + v7 * dword_4C43C8;
            if ( *(char *)(v10 + 2) == v25[0] && !*(_BYTE *)(v10 + 7) )
            {
              if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
                goto LABEL_131;
              goto LABEL_99;
            }
          }
          v8 = dword_4C43CC;
          ++i;
        }
        return;
      case 77:
        v11 = dword_4B1024 + 1;
        if ( dword_4B1024 == -1 || (v25[0] = *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 2), v25[0] == -1) )
          v25[0] = dword_8703A0;
        v12 = dword_4C43CC;
        for ( j = 0; j < dword_4C43CC; ++v11 )
        {
          if ( v11 >= v12 )
            v11 = 0;
          if ( sub_464E90(v11) )
          {
            v10 = dword_4C43DC + v11 * dword_4C43C8;
            if ( *(char *)(v10 + 2) == v25[0] )
            {
              v14 = *(_BYTE *)(v10 + 7);
              if ( v14 == 1 || v14 == 2 )
              {
                if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
                  goto LABEL_114;
                goto LABEL_99;
              }
            }
          }
          v12 = dword_4C43CC;
          ++j;
        }
        return;
      case 80:
        v11 = dword_4B1024 + 1;
        if ( dword_4B1024 == -1 )
        {
          v25[0] = dword_8703A0;
        }
        else
        {
          v25[0] = *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 2);
          if ( v25[0] == -1 )
            v25[0] = dword_8703A0;
        }
        v15 = dword_4C43CC;
        for ( k = 0; k < dword_4C43CC; ++v11 )
        {
          if ( v11 >= v15 )
            v11 = 0;
          if ( sub_464E90(v11) )
          {
            v10 = dword_4C43DC + v11 * dword_4C43C8;
            if ( *(char *)(v10 + 2) == v25[0] && *(_BYTE *)(v10 + 7) == 5 )
            {
              if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
                goto LABEL_114;
              goto LABEL_99;
            }
          }
          v15 = dword_4C43CC;
          ++k;
        }
        return;
      case 81:
        if ( dword_4C2D3C )
        {
          sub_485E60(dword_4C2D38);
          if ( sub_461900() )
          {
            sub_486D40(0, 0);
            sub_486D40(1, 1);
            sub_487220(&unk_4C42A0);
          }
        }
        return;
      case 82:
        v11 = dword_4B1024 + 1;
        if ( dword_4B1024 == -1 )
        {
          v25[0] = dword_8703A0;
        }
        else
        {
          v25[0] = *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 2);
          if ( v25[0] == -1 )
            v25[0] = dword_8703A0;
        }
        v17 = dword_4C43CC;
        if ( dword_4C43CC > 0 )
        {
          while ( 1 )
          {
            if ( v11 >= v17 )
              v11 = 0;
            if ( sub_464E90(v11) )
            {
              v10 = dword_4C43DC + v11 * dword_4C43C8;
              if ( *(char *)(v10 + 2) == v25[0] )
              {
                v18 = *(_BYTE *)(v10 + 7);
                if ( v18 == 3 || v18 == 4 )
                  break;
              }
            }
            v17 = dword_4C43CC;
            ++v1;
            ++v11;
            if ( v1 >= dword_4C43CC )
              return;
          }
          if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
          {
LABEL_114:
            sub_40DD00(v11);
            sub_4012A0(dword_4D0E68, *(_DWORD *)(v10 + 80), (int)&v24, (int)&v23);
            sub_485F80(v24, v23);
          }
          else
          {
LABEL_99:
            sub_443B90(*(__int16 *)(v10 + 16));
          }
        }
        return;
      case 83:
        if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
          return;
        v7 = dword_4B1024 + 1;
        if ( dword_4B1024 == -2 )
          v7 = 0;
        v19 = dword_4C43CC;
        v25[0] = 0;
        if ( dword_4C43CC <= 0 )
          return;
        break;
      case 107:
      case 187:
        if ( dword_4B113C[0] < 5 )
        {
          dword_4B1124 = dword_4B1140[++dword_4B113C[0]];
          sub_435570(1, 0);
        }
        sub_409220();
        if ( GetKeyState(162) < 0 )
          dword_4CD12C = 1;
        return;
      case 109:
      case 189:
        if ( dword_4B113C[0] > 0 )
        {
          v2 = dword_4B113C[dword_4B113C[0]--];
          dword_4B1124 = v2;
          sub_435570(1, 0);
        }
        if ( GetKeyState(162) < 0 )
          dword_4CD12C = 0;
        sub_409220();
        return;
      case 116:
        if ( GetAsyncKeyState(162) < 0 )
          sub_45AC20(1);
        return;
      default:
        return;
    }
    while ( 1 )
    {
      if ( v7 >= v19 )
        v7 = 0;
      if ( !sub_464E90(v7) )
        goto LABEL_144;
      v10 = dword_4C43DC + v7 * dword_4C43C8;
      if ( dword_4CE034 == 1 )
        break;
      if ( dword_4CE034 == 2 )
      {
        if ( word_4CE03E )
        {
          v21 = *(_BYTE *)(v10 + 3) == 3;
          v25[1] = 5;
          v25[2] = 0;
          v25[3] = 3;
          v25[4] = 4;
          v25[5] = 1;
          v25[6] = 2;
          if ( v21 && *(char *)(v10 + 7) == v25[word_4CE03E] )
          {
LABEL_131:
            sub_40DD00(v7);
            sub_4012A0(dword_4D0E68, *(_DWORD *)(v10 + 80), (int)&v24, (int)&v23);
            sub_485F80(v24, v23);
            return;
          }
        }
        else if ( *(_BYTE *)(v10 + 3) == 3 )
        {
          goto LABEL_131;
        }
      }
      else
      {
        if ( dword_4CE034 != 4 || *(_BYTE *)(v10 + 2) != 0xFF )
          goto LABEL_144;
        if ( !word_4CE042 )
        {
          v21 = *(_WORD *)(v10 + 4) == 0xFFFF;
LABEL_143:
          if ( !v21 )
            goto LABEL_131;
          goto LABEL_144;
        }
        v20 = *(_WORD *)(v10 + 4);
        if ( word_4CE042 == v20 + 2 && (v20 != -1 || !*(_BYTE *)(v10 + 3)) )
          goto LABEL_131;
      }
LABEL_144:
      v19 = dword_4C43CC;
      ++v7;
      if ( ++v25[0] >= dword_4C43CC )
        return;
    }
    if ( word_4CE03C == -1 )
      goto LABEL_144;
    if ( *(_BYTE *)(v10 + 3) != 3 )
      goto LABEL_144;
    v22 = *(__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v10 + 16) + 2 * word_4CE03C + 240);
    if ( v22 == -1 )
      goto LABEL_144;
    v21 = *(_BYTE *)(v22 * dword_4CC8BC + dword_4CC8D0 + 10) == 2;
    goto LABEL_143;
  }
}
