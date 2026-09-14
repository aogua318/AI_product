// 函数 0x4943b2  __input_l  size=0x1004  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _input_l(FILE *Stream, unsigned __int8 *a2, struct localeinfo_struct *a3, _WORD **a4)
{
  int result; // eax
  int v5; // eax
  _BYTE *v6; // ecx
  char *v7; // eax
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned __int8 *v14; // eax
  _WORD *v15; // esi
  unsigned __int8 v16; // al
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  int v22; // ebx
  int i; // eax
  int v25; // ecx
  int j; // eax
  int v29; // ecx
  int v31; // ecx
  int v32; // ecx
  int k; // eax
  int v36; // ecx
  void (__cdecl *v37)(int, _WORD *, void *, __crt_locale_pointers *); // eax
  _WORD *v38; // edi
  int v40; // eax
  unsigned __int8 *v41; // esi
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // cl
  unsigned int v44; // edi
  int v45; // edx
  unsigned __int8 v46; // al
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  __int64 v51; // kr00_8
  unsigned int v52; // edi
  unsigned int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // edi
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  bool v61; // zf
  int v62; // [esp-14h] [ebp-21Ch]
  _WORD *v63; // [esp-10h] [ebp-218h]
  void *v64; // [esp-Ch] [ebp-214h]
  int v65; // [esp-8h] [ebp-210h]
  int v66; // [esp-8h] [ebp-210h]
  int v67; // [esp-8h] [ebp-210h]
  int v68; // [esp-8h] [ebp-210h]
  int v69; // [esp-8h] [ebp-210h]
  int v70; // [esp-8h] [ebp-210h]
  int v71; // [esp-8h] [ebp-210h]
  int v72; // [esp-8h] [ebp-210h]
  int v73; // [esp-8h] [ebp-210h]
  int v74; // [esp-8h] [ebp-210h]
  _WORD **v75; // [esp+8h] [ebp-200h]
  __crt_locale_pointers Locale; // [esp+Ch] [ebp-1FCh] BYREF
  int v77; // [esp+14h] [ebp-1F4h]
  char v78; // [esp+18h] [ebp-1F0h]
  wchar_t DstCh[2]; // [esp+1Ch] [ebp-1ECh] BYREF
  _WORD **v80; // [esp+20h] [ebp-1E8h]
  int v81; // [esp+24h] [ebp-1E4h]
  char SrcCh[4]; // [esp+28h] [ebp-1E0h] BYREF
  size_t v83; // [esp+2Ch] [ebp-1DCh] BYREF
  int v84; // [esp+30h] [ebp-1D8h]
  unsigned __int8 v85; // [esp+37h] [ebp-1D1h]
  int v86; // [esp+38h] [ebp-1D0h] BYREF
  int v87; // [esp+3Ch] [ebp-1CCh]
  unsigned __int64 v88; // [esp+40h] [ebp-1C8h]
  _WORD *v89; // [esp+48h] [ebp-1C0h]
  unsigned __int8 *v90; // [esp+4Ch] [ebp-1BCh]
  int v91; // [esp+50h] [ebp-1B8h]
  int v92; // [esp+54h] [ebp-1B4h]
  void *Block; // [esp+58h] [ebp-1B0h] BYREF
  int v94; // [esp+5Ch] [ebp-1ACh]
  char v95; // [esp+60h] [ebp-1A8h]
  char v96; // [esp+61h] [ebp-1A7h]
  char v97; // [esp+62h] [ebp-1A6h]
  char v98; // [esp+63h] [ebp-1A5h]
  FILE *v99; // [esp+64h] [ebp-1A4h]
  char v100; // [esp+6Bh] [ebp-19Dh]
  int v101; // [esp+6Ch] [ebp-19Ch]
  char v102; // [esp+73h] [ebp-195h]
  int Character; // [esp+74h] [ebp-194h]
  char v104; // [esp+7Bh] [ebp-18Dh]
  int v105; // [esp+7Ch] [ebp-18Ch] BYREF
  unsigned __int8 v106; // [esp+83h] [ebp-185h]
  _BYTE Src[352]; // [esp+84h] [ebp-184h] BYREF
  _BYTE v108[32]; // [esp+1E4h] [ebp-24h] BYREF

  v80 = a4;
  v99 = Stream;
  Block = Src;
  v83 = 350;
  v86 = 0;
  *(_DWORD *)DstCh = 0;
  Character = 0;
  if ( !a2
    || !Stream
    || (Stream->_flag & 0x40) == 0
    && ((v5 = _fileno(Stream), v5 == -1) || v5 == -2
      ? (v6 = &unk_4B9020)
      : (v6 = (_BYTE *)(dword_8F61C0[v5 >> 5] + ((v5 & 0x1F) << 6))),
        (v6[36] & 0x7F) != 0
     || (v5 == -1 || v5 == -2 ? (v7 = (char *)&unk_4B9020) : (v7 = (char *)(dword_8F61C0[v5 >> 5] + ((v5 & 0x1F) << 6))),
         v7[36] < 0)) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  v8 = *a2;
  v98 = 0;
  v105 = 0;
  v87 = 0;
  if ( !v8 )
    goto LABEL_288;
  v9 = a2;
  while ( 2 )
  {
    if ( isspace(v8) )
    {
      --v105;
      v10 = _whiteout(v65, &v105, v99);
      if ( v10 != -1 )
        _ungetc_nolock(v10, v99);
      do
        ++v9;
      while ( isspace(*v9) );
      goto LABEL_272;
    }
    if ( *v9 != 37 )
      goto LABEL_264;
    if ( v9[1] == 37 )
    {
      ++v9;
LABEL_264:
      ++v105;
      v57 = _inc(v65, v99);
      v58 = *v9++;
      Character = v57;
      v90 = v9;
      if ( v58 == v57 )
      {
        if ( !isleadbyte((unsigned __int8)v57) )
          goto LABEL_268;
        ++v105;
        v59 = _inc(v74, v99);
        v60 = *v9++;
        v90 = v9;
        if ( v60 == v59 )
        {
          --v105;
          goto LABEL_268;
        }
        if ( v59 != -1 )
          _ungetc_nolock(v59, v99);
      }
      v61 = v57 == -1;
      goto LABEL_278;
    }
    v81 = 0;
    v85 = 0;
    v94 = 0;
    v91 = 0;
    v101 = 0;
    v95 = 0;
    v96 = 0;
    v100 = 0;
    v104 = 0;
    v97 = 0;
    v102 = 0;
    v106 = 1;
    v84 = 0;
    do
    {
      v11 = *++v9;
      v12 = isdigit((unsigned __int8)v11);
      v13 = v66;
      if ( v12 )
      {
        ++v91;
        v101 = 10 * v101 + v11 - 48;
        continue;
      }
      if ( v11 > 78 )
      {
        if ( v11 == 104 )
        {
          --v106;
          --v102;
        }
        else
        {
          if ( v11 == 108 )
          {
            v14 = v9 + 1;
            if ( v9[1] == 108 )
              goto LABEL_37;
            ++v106;
          }
          else if ( v11 != 119 )
          {
            goto $DEFAULT_LABEL$29279;
          }
          ++v102;
        }
      }
      else
      {
        switch ( v11 )
        {
          case 'N':
            continue;
          case '*':
            ++v100;
            continue;
          case 'F':
            continue;
        }
        if ( v11 != 73 )
        {
          if ( v11 == 76 )
          {
            ++v106;
            continue;
          }
$DEFAULT_LABEL$29279:
          ++v104;
          continue;
        }
        LOBYTE(v13) = v9[1];
        if ( (_BYTE)v13 == 54 )
        {
          v14 = v9 + 2;
          if ( v9[2] == 52 )
          {
LABEL_37:
            ++v84;
            v9 = v14;
            v88 = 0;
            continue;
          }
        }
        if ( (_BYTE)v13 == 51 && v9[2] == 50 )
        {
          v9 += 2;
          continue;
        }
        if ( (_BYTE)v13 != 100 && (_BYTE)v13 != 105 && (_BYTE)v13 != 111 && (_BYTE)v13 != 120 && (_BYTE)v13 != 88 )
          goto $DEFAULT_LABEL$29279;
      }
    }
    while ( !v104 );
    v90 = v9;
    if ( v100 )
    {
      v15 = 0;
    }
    else
    {
      v15 = *v80;
      v75 = v80++;
    }
    v89 = v15;
    v104 = 0;
    if ( !v102 )
    {
      v16 = *v9;
      if ( *v9 == 83 || (v102 = -1, v16 == 67) )
        v102 = 1;
    }
    v17 = *v9 | 0x20;
    v92 = v17;
    if ( v17 != 110 )
    {
      if ( v17 == 99 || v17 == 123 )
      {
        ++v105;
        v18 = _inc(v13, v99);
      }
      else
      {
        v18 = _whiteout(v13, &v105, v99);
      }
      Character = v18;
      if ( v18 == -1 )
        goto $error_return$29306;
      v15 = v89;
      v9 = v90;
    }
    v19 = v91;
    if ( v91 && !v101 )
      goto LABEL_274;
    if ( v17 > 111 )
    {
      switch ( v17 )
      {
        case 'p':
          v106 = 1;
          break;
        case 's':
LABEL_129:
          if ( v102 > 0 )
            v97 = 1;
          goto $scanit$29317;
        case 'u':
          break;
        case 'x':
          goto LABEL_84;
        case '{':
          if ( v102 > 0 )
            v97 = 1;
          v41 = v9 + 1;
          if ( v9[1] == 94 )
          {
            v41 = v9 + 2;
            v95 = -1;
          }
          memset(v108, 0, sizeof(v108));
          if ( *v41 == 93 )
          {
            v42 = 93;
            ++v41;
            v108[11] = 32;
          }
          else
          {
            v42 = v85;
          }
          while ( 1 )
          {
            v46 = *v41;
            if ( *v41 == 93 )
              break;
            ++v41;
            if ( v46 == 45 && v42 && (v43 = *v41, *v41 != 93) )
            {
              ++v41;
              if ( v42 >= v43 )
              {
                v106 = v42;
                v42 = v43;
              }
              else
              {
                v106 = v43;
              }
              if ( v42 < v106 )
              {
                v44 = v42;
                v45 = (unsigned __int8)(v106 - v42);
                do
                {
                  v108[v44 >> 3] |= 1 << (v44 & 7);
                  ++v44;
                  --v45;
                }
                while ( v45 );
                v17 = v92;
              }
              v19 = v106 & 7;
              v108[v106 >> 3] |= 1 << v19;
              v42 = 0;
            }
            else
            {
              v42 = v46;
              v19 = v46 & 7;
              v108[v46 >> 3] |= 1 << (v46 & 7);
              v17 = v92;
            }
          }
          v90 = v41;
          v15 = v89;
$scanit$29317:
          --v105;
          v38 = v15;
          if ( Character != -1 )
          {
            _ungetc_nolock(Character, v99);
            v19 = v68;
          }
          while ( 1 )
          {
            if ( v91 )
            {
              if ( !v101-- )
                goto LABEL_202;
            }
            ++v105;
            v40 = _inc(v19, v99);
            Character = v40;
            if ( v40 == -1 )
              goto LABEL_200;
            if ( v17 != 99 )
            {
              if ( v17 != 115 )
                goto LABEL_293;
              if ( v40 >= 9 && v40 <= 13 )
              {
LABEL_200:
                --v105;
                if ( v40 != -1 )
                  _ungetc_nolock(v40, v99);
LABEL_202:
                if ( v38 != v15 )
                {
                  if ( !v100 )
                  {
                    ++v87;
                    if ( v17 != 99 )
                    {
                      if ( v97 )
                        *v89 = 0;
                      else
                        *(_BYTE *)v89 = 0;
                    }
                  }
                  goto LABEL_262;
                }
                goto $error_return$29306;
              }
              if ( v40 == 32 )
              {
LABEL_293:
                if ( v17 != 123 )
                  goto LABEL_200;
                v19 = v95 ^ (char)v108[v40 >> 3];
                v17 = v92;
                if ( ((1 << (v40 & 7)) & v19) == 0 )
                  goto LABEL_200;
              }
            }
            if ( v100 )
            {
              v38 = (_WORD *)((char *)v38 + 1);
            }
            else
            {
              if ( v97 )
              {
                SrcCh[0] = v40;
                if ( isleadbyte((unsigned __int8)v40) )
                {
                  ++v105;
                  SrcCh[1] = _inc(v69, v99);
                }
                wcscpy(DstCh, L"?");
                _mbtowc_l(DstCh, SrcCh, *((_DWORD *)Locale.locinfo + 43), &Locale);
                *v15++ = DstCh[0];
              }
              else
              {
                *(_BYTE *)v15 = v40;
                v15 = (_WORD *)((char *)v15 + 1);
              }
              v89 = v15;
            }
          }
        default:
          goto LABEL_153;
      }
LABEL_209:
      v21 = Character;
      if ( Character == 45 )
      {
        v96 = 1;
      }
      else if ( Character != 43 )
      {
        goto $getnum$29397;
      }
      if ( !--v101 && v91 )
      {
        v104 = 1;
        goto $getnum$29397;
      }
      ++v105;
      v21 = _inc(v91, v99);
      goto LABEL_216;
    }
    switch ( v17 )
    {
      case 'o':
        goto LABEL_209;
      case 'c':
        if ( !v91 )
        {
          ++v101;
          v91 = 1;
        }
        goto LABEL_129;
      case 'd':
        goto LABEL_209;
    }
    if ( v17 <= 100 )
      goto LABEL_153;
    if ( v17 <= 103 )
    {
      v22 = 0;
      if ( Character == 45 )
      {
        *(_BYTE *)Block = 45;
        v22 = 1;
        goto $f_incwidth$29477;
      }
      if ( Character == 43 )
      {
$f_incwidth$29477:
        --v101;
        ++v105;
        Character = _inc(v19, v99);
      }
      if ( !v91 )
        v101 = -1;
      for ( i = (unsigned __int8)Character; isdigit(i); i = (unsigned __int8)Character )
      {
        if ( !v101-- )
          break;
        ++v94;
        *((_BYTE *)Block + v22) = Character;
        if ( !__check_float_string(&Block, &v83, ++v22, Src, &v86) )
          goto $error_return$29306;
        ++v105;
        Character = _inc(v25, v99);
      }
      v95 = ***((_BYTE ***)Locale.locinfo + 47);
      if ( v95 == (_BYTE)Character )
      {
        if ( v101-- )
        {
          ++v105;
          Character = _inc(v67, v99);
          *((_BYTE *)Block + v22) = v95;
          if ( !__check_float_string(&Block, &v83, ++v22, Src, &v86) )
            goto $error_return$29306;
          for ( j = (unsigned __int8)Character; isdigit(j); j = (unsigned __int8)Character )
          {
            if ( !v101-- )
              break;
            ++v94;
            *((_BYTE *)Block + v22) = Character;
            if ( !__check_float_string(&Block, &v83, ++v22, Src, &v86) )
              goto $error_return$29306;
            ++v105;
            Character = _inc(v29, v99);
          }
        }
      }
      if ( v94 && (Character == 101 || Character == 69) )
      {
        if ( v101-- )
        {
          *((_BYTE *)Block + v22) = 101;
          if ( !__check_float_string(&Block, &v83, ++v22, Src, &v86) )
            goto $error_return$29306;
          ++v105;
          Character = _inc(v31, v99);
          if ( Character == 45 )
          {
            *((_BYTE *)Block + v22) = 45;
            if ( !__check_float_string(&Block, &v83, ++v22, Src, &v86) )
              goto $error_return$29306;
$f_incwidth2$29507:
            if ( v101-- )
            {
              ++v105;
              Character = _inc(v32, v99);
            }
            else
            {
              v101 = 0;
            }
          }
          else if ( Character == 43 )
          {
            goto $f_incwidth2$29507;
          }
          for ( k = (unsigned __int8)Character; isdigit(k); k = (unsigned __int8)Character )
          {
            if ( !v101-- )
              break;
            ++v94;
            *((_BYTE *)Block + v22) = Character;
            if ( !__check_float_string(&Block, &v83, ++v22, Src, &v86) )
              goto $error_return$29306;
            ++v105;
            Character = _inc(v36, v99);
          }
        }
      }
      --v105;
      if ( Character != -1 )
        _ungetc_nolock(Character, v99);
      if ( v94 )
      {
        if ( !v100 )
        {
          ++v87;
          v64 = Block;
          v63 = v89;
          *((_BYTE *)Block + v22) = 0;
          v62 = (char)v106 - 1;
          v37 = (void (__cdecl *)(int, _WORD *, void *, __crt_locale_pointers *))DecodePointer(off_4B85B4);
          v37(v62, v63, v64, &Locale);
        }
        goto LABEL_262;
      }
      goto $error_return$29306;
    }
    if ( v17 != 105 )
    {
      if ( v17 == 110 )
      {
        v20 = v105;
        if ( !v100 )
        {
$assign_num$29459:
          if ( v84 )
          {
            *(_QWORD *)v15 = v88;
          }
          else if ( v106 )
          {
            *(_DWORD *)v15 = v20;
          }
          else
          {
            *v15 = v20;
          }
        }
        goto LABEL_262;
      }
LABEL_153:
      if ( *v9 == Character )
      {
        --v98;
        if ( !v100 )
          v80 = v75;
        goto LABEL_262;
      }
LABEL_274:
      v61 = Character == -1;
LABEL_278:
      if ( !v61 )
        _ungetc_nolock(Character, v99);
      goto $error_return$29306;
    }
    v92 = 100;
LABEL_84:
    v21 = Character;
    if ( Character == 45 )
    {
      v96 = 1;
      goto $x_incwidth$29380;
    }
    if ( Character == 43 )
    {
$x_incwidth$29380:
      if ( --v101 || !v91 )
      {
        ++v105;
        v21 = _inc(v91, v99);
        Character = v21;
      }
      else
      {
        v104 = 1;
      }
    }
    if ( v21 == 48 )
    {
      ++v105;
      v47 = _inc(v19, v99);
      v21 = v47;
      Character = v47;
      if ( (_BYTE)v47 != 120 && (_BYTE)v47 != 88 )
      {
        v94 = 1;
        if ( v92 != 120 )
        {
          if ( v91 )
          {
            if ( !--v101 )
              ++v104;
          }
          v92 = 111;
          goto $getnum$29397;
        }
        --v105;
        if ( v47 != -1 )
          _ungetc_nolock(v47, v99);
        v21 = 48;
LABEL_216:
        Character = v21;
        goto $getnum$29397;
      }
      ++v105;
      v21 = _inc(v48, v99);
      Character = v21;
      if ( v91 )
      {
        v101 -= 2;
        if ( v101 < 1 )
          ++v104;
      }
      v92 = 120;
    }
$getnum$29397:
    if ( !v84 )
    {
      v20 = v81;
      if ( !v104 )
      {
        while ( 1 )
        {
          if ( v92 == 120 || v92 == 112 )
          {
            if ( !isxdigit((unsigned __int8)v21) )
            {
LABEL_248:
              --v105;
              if ( v21 != -1 )
                _ungetc_nolock(v21, v99);
              break;
            }
            v56 = 16 * v20;
            v21 = _hextodec(v21);
            v55 = v73;
            Character = v21;
          }
          else
          {
            v54 = isdigit((unsigned __int8)v21);
            v55 = v72;
            if ( !v54 )
              goto LABEL_248;
            if ( v92 == 111 )
            {
              if ( v21 >= 56 )
                goto LABEL_248;
              v56 = 8 * v20;
            }
            else
            {
              v56 = 10 * v20;
            }
          }
          ++v94;
          v20 = v56 + v21 - 48;
          if ( v91 )
          {
            if ( !--v101 )
              break;
          }
          ++v105;
          v21 = _inc(v55, v99);
          Character = v21;
        }
      }
      if ( v96 )
        v20 = -v20;
      goto LABEL_252;
    }
    if ( v104 )
      goto LABEL_233;
    while ( 2 )
    {
      if ( v92 != 120 && v92 != 112 )
      {
        v49 = isdigit((unsigned __int8)v21);
        v50 = v70;
        if ( !v49 )
          break;
        if ( v92 == 111 )
        {
          if ( v21 >= 56 )
            break;
          v51 = 8 * v88;
        }
        else
        {
          v51 = 10 * v88;
        }
        goto LABEL_228;
      }
      if ( isxdigit((unsigned __int8)v21) )
      {
        v52 = v88 >> 28;
        v53 = 16 * v88;
        v21 = _hextodec(v21);
        v50 = v71;
        Character = v21;
        v51 = __PAIR64__(v52, v53);
LABEL_228:
        ++v94;
        v88 = v21 - 48 + v51;
        if ( v91 )
        {
          if ( !--v101 )
            goto LABEL_233;
        }
        ++v105;
        v21 = _inc(v50, v99);
        Character = v21;
        continue;
      }
      break;
    }
    --v105;
    if ( v21 != -1 )
      _ungetc_nolock(v21, v99);
LABEL_233:
    v20 = v81;
    if ( v96 )
      v88 = -(__int64)v88;
LABEL_252:
    if ( v92 == 70 )
      v94 = 0;
    if ( !v94 )
      goto $error_return$29306;
    if ( !v100 )
    {
      ++v87;
      v15 = v89;
      goto $assign_num$29459;
    }
LABEL_262:
    ++v98;
    v9 = ++v90;
LABEL_268:
    if ( Character != -1 )
    {
LABEL_272:
      v8 = *v9;
      if ( !*v9 )
        goto $error_return$29306;
      continue;
    }
    break;
  }
  if ( *v9 == 37 && v90[1] == 110 )
  {
    v9 = v90;
    goto LABEL_272;
  }
$error_return$29306:
  if ( v86 == 1 )
    free(Block);
  if ( Character == -1 )
  {
    result = v87;
    if ( !v87 && !v98 )
      result = -1;
    if ( v78 )
      *(_DWORD *)(v77 + 112) &= ~2u;
    return result;
  }
LABEL_288:
  if ( v78 )
    *(_DWORD *)(v77 + 112) &= ~2u;
  return v87;
}
