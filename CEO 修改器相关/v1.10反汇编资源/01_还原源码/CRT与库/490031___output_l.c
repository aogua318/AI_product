// 函数 0x490031  __output_l  size=0xB89  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _output_l(FILE *Stream, _BYTE *a2, struct localeinfo_struct *a3, int *a4)
{
  int *v4; // ebx
  _BYTE *v5; // edi
  int v7; // eax
  _BYTE *v8; // ecx
  char *v9; // eax
  unsigned __int8 v10; // dl
  int v11; // ecx
  _BYTE *v12; // edi
  int v13; // eax
  char v14; // al
  bool v15; // zf
  int v16; // eax
  char *v17; // edi
  int v18; // ecx
  char *v19; // ebx
  char *v20; // eax
  _DWORD *v21; // ebx
  __int16 *v22; // eax
  char *v23; // ecx
  int v24; // eax
  _WORD *v25; // esi
  __int64 v26; // rax
  _DWORD *v27; // ebx
  int v28; // esi
  void *v29; // eax
  int v30; // eax
  _DWORD *v31; // ebx
  void (__cdecl *v32)(_DWORD *, char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v33; // ebx
  void (__cdecl *v34)(char *, __crt_locale_pointers *); // eax
  void (__cdecl *v35)(char *, __crt_locale_pointers *); // eax
  unsigned int v36; // ebx
  unsigned int v37; // edi
  char *j; // esi
  int v39; // eax
  unsigned __int64 v40; // rcx
  int v41; // ecx
  char *v42; // eax
  char *v43; // esi
  char *i; // eax
  int v45; // eax
  int v46; // ebx
  int v47; // edi
  FILE *v48; // edi
  int *v49; // eax
  int v50; // ebx
  wchar_t *v51; // esi
  int *v52; // eax
  int v53; // ebx
  unsigned __int8 v54; // al
  int v55; // [esp-14h] [ebp-298h]
  int v56; // [esp-10h] [ebp-294h]
  unsigned __int64 v57; // [esp-10h] [ebp-294h]
  int v58; // [esp-Ch] [ebp-290h]
  int v59; // [esp-8h] [ebp-28Ch]
  wchar_t v60; // [esp-4h] [ebp-288h]
  _DWORD v61[2]; // [esp+Ch] [ebp-278h] BYREF
  int v62; // [esp+14h] [ebp-270h] BYREF
  int v63; // [esp+18h] [ebp-26Ch]
  int v64; // [esp+20h] [ebp-264h]
  int v65; // [esp+24h] [ebp-260h]
  __crt_locale_pointers Locale; // [esp+28h] [ebp-25Ch] BYREF
  int v67; // [esp+30h] [ebp-254h]
  char v68; // [esp+34h] [ebp-250h]
  void *Block; // [esp+38h] [ebp-24Ch]
  int v70; // [esp+3Ch] [ebp-248h]
  int v71; // [esp+40h] [ebp-244h]
  FILE *File; // [esp+44h] [ebp-240h]
  _BYTE *v73; // [esp+48h] [ebp-23Ch]
  int v74; // [esp+4Ch] [ebp-238h]
  int v75; // [esp+50h] [ebp-234h]
  int v76; // [esp+54h] [ebp-230h]
  _BYTE v77[4]; // [esp+58h] [ebp-22Ch] BYREF
  int v78; // [esp+5Ch] [ebp-228h]
  int v79; // [esp+60h] [ebp-224h] BYREF
  int SizeConverted; // [esp+64h] [ebp-220h] BYREF
  char *v81; // [esp+68h] [ebp-21Ch]
  int v82; // [esp+6Ch] [ebp-218h]
  unsigned __int8 v83; // [esp+73h] [ebp-211h]
  int v84; // [esp+74h] [ebp-210h]
  char MbCh[511]; // [esp+78h] [ebp-20Ch] BYREF
  char v86; // [esp+277h] [ebp-Dh] BYREF
  char v87[8]; // [esp+278h] [ebp-Ch] BYREF

  v4 = a4;
  v5 = a2;
  File = Stream;
  v78 = (int)a4;
  v70 = 0;
  v84 = 0;
  v75 = 0;
  v82 = 0;
  v76 = 0;
  v71 = 0;
  v74 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( Stream
    && ((Stream->_flag & 0x40) != 0
     || ((v7 = _fileno(Stream), v7 == -1) || v7 == -2
       ? (v8 = &unk_4B9020)
       : (v8 = (_BYTE *)(dword_8F61C0[v7 >> 5] + ((v7 & 0x1F) << 6))),
         (v8[36] & 0x7F) == 0
      && (v7 == -1 || v7 == -2
        ? (v9 = (char *)&unk_4B9020)
        : (v9 = (char *)(dword_8F61C0[v7 >> 5] + ((v7 & 0x1F) << 6))),
          v9[36] >= 0)))
    && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v79 = 0;
    SizeConverted = 0;
    Block = 0;
    v83 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = v5 + 1;
        v73 = v12;
        if ( v79 < 0 )
          break;
        if ( (unsigned __int8)(v10 - 32) > 0x58u )
          v13 = 0;
        else
          v13 = *((_BYTE *)&dbl_4A9DEC + (char)v10 + 4) & 0xF;
        v65 = byte_4A9E10[8 * v13 + v11] >> 4;
        switch ( v65 )
        {
          case 0:
            goto $NORMAL_STATE$29162;
          case 1:
            v82 = -1;
            v63 = 0;
            v71 = 0;
            v75 = 0;
            v76 = 0;
            v84 = 0;
            v74 = 0;
            goto LABEL_224;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v84 |= 2u;
                break;
              case '#':
                v84 |= 0x80u;
                break;
              case '+':
                v84 |= 1u;
                break;
              case '-':
                v84 |= 4u;
                break;
              case '0':
                v84 |= 8u;
                break;
            }
            goto LABEL_224;
          case 3:
            if ( v10 == 42 )
            {
              v78 = (int)(v4 + 1);
              v75 = *v4;
              if ( v75 < 0 )
              {
                v84 |= 4u;
                v75 = -v75;
              }
            }
            else
            {
              v75 = 10 * v75 + (char)v10 - 48;
            }
            goto LABEL_224;
          case 4:
            v82 = 0;
            goto LABEL_224;
          case 5:
            if ( v10 == 42 )
            {
              v78 = (int)(v4 + 1);
              v82 = *v4;
              if ( v82 < 0 )
                v82 = -1;
            }
            else
            {
              v82 = 10 * v82 + (char)v10 - 48;
            }
            goto LABEL_224;
          case 6:
            switch ( v10 )
            {
              case 'I':
                v14 = *v12;
                if ( *v12 == 54 && v12[1] == 52 )
                {
                  v84 |= 0x8000u;
                  v73 = v12 + 2;
                }
                else if ( v14 == 51 && v12[1] == 50 )
                {
                  v84 &= ~0x8000u;
                  v73 = v12 + 2;
                }
                else if ( v14 != 100 && v14 != 105 && v14 != 111 && v14 != 117 && v14 != 120 && v14 != 88 )
                {
                  v65 = 0;
$NORMAL_STATE$29162:
                  v74 = 0;
                  v16 = _isleadbyte_l(v10, &Locale);
                  v15 = v16 == 0;
                  LOBYTE(v16) = v83;
                  if ( !v15 )
                  {
                    v16 = write_char(File, v16, &v79);
                    LOBYTE(v16) = *v12;
                    v73 = v12 + 1;
                    if ( !(_BYTE)v16 )
                      goto LABEL_2;
                  }
                  write_char(File, v16, &v79);
                }
                break;
              case 'h':
                v84 |= 0x20u;
                break;
              case 'l':
                if ( *v12 == 108 )
                {
                  v84 |= 0x1000u;
                  v73 = v12 + 1;
                }
                else
                {
                  v84 |= 0x10u;
                }
                break;
              case 'w':
                v84 |= 0x800u;
                break;
            }
            goto LABEL_224;
          case 7:
            if ( (char)v10 <= 100 )
            {
              if ( v10 == 100 )
              {
LABEL_118:
                v84 |= 0x40u;
                goto LABEL_119;
              }
              if ( (char)v10 > 83 )
              {
                if ( v10 == 88 )
                  goto LABEL_140;
                if ( v10 == 90 )
                {
                  v22 = (__int16 *)*v4;
                  v78 = (int)(v4 + 1);
                  if ( v22 && (v23 = (char *)*((_DWORD *)v22 + 1)) != 0 )
                  {
                    v24 = *v22;
                    v81 = v23;
                    if ( (v84 & 0x800) != 0 )
                    {
                      v24 /= 2;
                      v74 = 1;
                    }
                    else
                    {
                      v74 = 0;
                    }
                  }
                  else
                  {
                    v81 = Str;
                    v24 = strlen(Str);
                  }
                  goto LABEL_189;
                }
                if ( v10 != 97 )
                {
                  if ( v10 != 99 )
                    goto LABEL_190;
                  goto LABEL_93;
                }
              }
              else
              {
                if ( v10 == 83 )
                {
                  if ( (v84 & 0x830) == 0 )
                    v84 |= 0x800u;
                  goto LABEL_83;
                }
                if ( v10 != 65 )
                {
                  if ( v10 != 67 )
                  {
                    if ( v10 != 69 && v10 != 71 )
                      goto LABEL_190;
                    goto LABEL_76;
                  }
                  if ( (v84 & 0x830) == 0 )
                    v84 |= 0x800u;
LABEL_93:
                  v21 = v4 + 1;
                  v78 = (int)v21;
                  if ( (v84 & 0x810) != 0 )
                  {
                    if ( wctomb_s(&SizeConverted, MbCh, 0x200u, *((_WORD *)v21 - 2)) )
                      v71 = 1;
                  }
                  else
                  {
                    MbCh[0] = *((_BYTE *)v21 - 4);
                    SizeConverted = 1;
                  }
                  v81 = MbCh;
                  goto LABEL_190;
                }
LABEL_76:
                v10 += 32;
                v63 = 1;
                v83 = v10;
              }
LABEL_77:
              v84 |= 0x40u;
              v17 = MbCh;
              v81 = MbCh;
              v64 = 512;
              if ( v82 >= 0 )
              {
                if ( v82 )
                {
                  if ( v82 > 512 )
                    v82 = 512;
                  if ( v82 > 163 )
                  {
                    v28 = v82 + 349;
                    v29 = (void *)_malloc_crt(v82 + 349);
                    v10 = v83;
                    Block = v29;
                    if ( v29 )
                    {
                      v81 = (char *)v29;
                      v64 = v28;
                      v17 = (char *)v29;
                    }
                    else
                    {
                      v82 = 163;
                    }
                  }
                }
                else
                {
                  v82 = v10 == 103;
                }
              }
              else
              {
                v82 = 6;
              }
              v30 = *v4;
              v31 = v4 + 2;
              v61[0] = v30;
              v61[1] = *(v31 - 1);
              v59 = v63;
              v58 = v82;
              v78 = (int)v31;
              v56 = (char)v10;
              v55 = v64;
              v32 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, __crt_locale_pointers *))DecodePointer(off_4B85B0);
              v32(v61, v17, v55, v56, v58, v59, &Locale);
              v33 = v84 & 0x80;
              if ( (v84 & 0x80) != 0 && !v82 )
              {
                v34 = (void (__cdecl *)(char *, __crt_locale_pointers *))DecodePointer(off_4B85BC);
                v34(v17, &Locale);
              }
              if ( v83 == 103 && !v33 )
              {
                v35 = (void (__cdecl *)(char *, __crt_locale_pointers *))DecodePointer(off_4B85B8);
                v35(v17, &Locale);
              }
              if ( *v17 == 45 )
              {
                v84 |= 0x100u;
                v81 = ++v17;
              }
              v24 = strlen(v17);
              goto LABEL_189;
            }
            if ( (char)v10 > 112 )
            {
              if ( v10 != 115 )
              {
                if ( v10 != 117 )
                {
                  if ( v10 != 120 )
                    goto LABEL_190;
                  v70 = 39;
                  goto $COMMON_HEX$29323;
                }
LABEL_119:
                SizeConverted = 10;
                goto $COMMON_INT$29316;
              }
LABEL_83:
              v18 = v82;
              if ( v82 == -1 )
                v18 = 0x7FFFFFFF;
              v78 = (int)(v4 + 1);
              v19 = (char *)*v4;
              v81 = v19;
              if ( (v84 & 0x810) != 0 )
              {
                if ( !v19 )
                  v81 = (char *)off_4B8764;
                v20 = v81;
                v74 = 1;
                while ( v18 )
                {
                  --v18;
                  if ( !*(_WORD *)v20 )
                    break;
                  v20 += 2;
                }
                v24 = (v20 - v81) >> 1;
              }
              else
              {
                if ( !v19 )
                  v81 = Str;
                for ( i = v81; v18; ++i )
                {
                  --v18;
                  if ( !*i )
                    break;
                }
                v24 = i - v81;
              }
LABEL_189:
              SizeConverted = v24;
              goto LABEL_190;
            }
            if ( v10 == 112 )
            {
              v82 = 8;
LABEL_140:
              v70 = 7;
$COMMON_HEX$29323:
              SizeConverted = 16;
              if ( (v84 & 0x80u) != 0 )
              {
                v77[0] = 48;
                v77[1] = v70 + 81;
                v76 = 2;
              }
              goto $COMMON_INT$29316;
            }
            if ( (char)v10 < 101 )
              goto LABEL_190;
            if ( (char)v10 <= 103 )
              goto LABEL_77;
            if ( v10 == 105 )
              goto LABEL_118;
            if ( v10 != 110 )
            {
              if ( v10 != 111 )
                goto LABEL_190;
              SizeConverted = 8;
              if ( (v84 & 0x80u) != 0 )
                v84 |= 0x200u;
$COMMON_INT$29316:
              if ( (v84 & 0x8000) != 0 || (v84 & 0x1000) != 0 )
              {
                v26 = *(_QWORD *)v4;
                v27 = v4 + 2;
              }
              else
              {
                v27 = v4 + 1;
                if ( (v84 & 0x20) != 0 )
                {
                  v78 = (int)v27;
                  if ( (v84 & 0x40) != 0 )
                    LODWORD(v26) = *((__int16 *)v27 - 2);
                  else
                    LODWORD(v26) = *((unsigned __int16 *)v27 - 2);
                  v26 = (int)v26;
LABEL_157:
                  if ( (v84 & 0x40) != 0 && v26 < 0 )
                  {
                    v26 = -v26;
                    v84 |= 0x100u;
                  }
                  v36 = HIDWORD(v26);
                  v37 = v26;
                  if ( (v84 & 0x9000) == 0 )
                    v36 = 0;
                  if ( v82 >= 0 )
                  {
                    v84 &= ~8u;
                    if ( v82 > 512 )
                      v82 = 512;
                  }
                  else
                  {
                    v82 = 1;
                  }
                  if ( !(v36 | (unsigned int)v26) )
                    v76 = 0;
                  for ( j = &v86; ; --j )
                  {
                    v39 = v82--;
                    if ( v39 <= 0 && !(v36 | v37) )
                      break;
                    v57 = __PAIR64__(v36, v37);
                    v40 = __PAIR64__(v36, v37) % SizeConverted;
                    v41 = v40 + 48;
                    v64 = HIDWORD(v40);
                    v36 = (v57 / SizeConverted) >> 32;
                    v37 = v57 / SizeConverted;
                    if ( v41 > 57 )
                      LOBYTE(v41) = v70 + v41;
                    *j = v41;
                  }
                  v42 = (char *)(&v86 - j);
                  v43 = j + 1;
                  SizeConverted = (int)v42;
                  v81 = v43;
                  if ( (v84 & 0x200) != 0 && (!v42 || *v43 != 48) )
                  {
                    *--v81 = 48;
                    v24 = (int)(v42 + 1);
                    goto LABEL_189;
                  }
LABEL_190:
                  if ( v71 )
                    goto LABEL_222;
                  v45 = v84;
                  if ( (v84 & 0x40) != 0 )
                  {
                    if ( (v84 & 0x100) != 0 )
                    {
                      v77[0] = 45;
                      goto LABEL_198;
                    }
                    if ( (v84 & 1) != 0 )
                    {
                      v77[0] = 43;
                      goto LABEL_198;
                    }
                    if ( (v84 & 2) != 0 )
                    {
                      v77[0] = 32;
LABEL_198:
                      v76 = 1;
                    }
                  }
                  v46 = v75 - SizeConverted - v76;
                  v64 = v46;
                  if ( (v84 & 0xC) == 0 )
                  {
                    v47 = v75 - SizeConverted - v76;
                    if ( v46 > 0 )
                    {
                      do
                      {
                        LOBYTE(v45) = 32;
                        --v47;
                        v45 = write_char(File, v45, &v79);
                      }
                      while ( v79 != -1 && v47 > 0 );
                    }
                  }
                  v48 = File;
                  v49 = write_string(&v79, v76, (int)File, v77);
                  if ( (v84 & 8) != 0 && (v84 & 4) == 0 )
                  {
                    do
                    {
                      if ( v46 <= 0 )
                        break;
                      LOBYTE(v49) = 48;
                      --v46;
                      v49 = (int *)write_char(v48, (int)v49, &v79);
                    }
                    while ( v79 != -1 );
                  }
                  v50 = SizeConverted;
                  if ( v74 && SizeConverted > 0 )
                  {
                    v51 = (wchar_t *)v81;
                    while ( 1 )
                    {
                      v60 = *v51;
                      --v50;
                      ++v51;
                      v52 = (int *)wctomb_s(&v62, v87, 6u, v60);
                      if ( v52 || !v62 )
                        break;
                      v52 = write_string(&v79, v62, (int)v48, v87);
                      if ( !v50 )
                        goto LABEL_217;
                    }
                    v79 = -1;
                  }
                  else
                  {
                    v52 = write_string(&v79, SizeConverted, (int)v48, v81);
                  }
LABEL_217:
                  if ( v79 >= 0 && (v84 & 4) != 0 )
                  {
                    v53 = v64;
                    do
                    {
                      if ( v53 <= 0 )
                        break;
                      LOBYTE(v52) = 32;
                      --v53;
                      v52 = (int *)write_char(v48, (int)v52, &v79);
                    }
                    while ( v79 != -1 );
                  }
                  goto LABEL_222;
                }
                LODWORD(v26) = *(v27 - 1);
                if ( (v84 & 0x40) != 0 )
                  v26 = (int)v26;
                else
                  HIDWORD(v26) = 0;
              }
              v78 = (int)v27;
              goto LABEL_157;
            }
            v25 = (_WORD *)*v4;
            v78 = (int)(v4 + 1);
            if ( !_get_printf_count_output() )
              goto LABEL_2;
            if ( (v84 & 0x20) != 0 )
              *v25 = v79;
            else
              *(_DWORD *)v25 = v79;
            v71 = 1;
LABEL_222:
            if ( Block )
            {
              free(Block);
              Block = 0;
            }
LABEL_224:
            v5 = v73;
            v54 = *v73;
            v83 = v54;
            if ( !v54 )
              goto LABEL_226;
            v11 = v65;
            v4 = (int *)v78;
            v10 = v54;
            break;
          default:
            goto LABEL_224;
        }
      }
    }
LABEL_226:
    if ( v68 )
      *(_DWORD *)(v67 + 112) &= ~2u;
    return v79;
  }
  else
  {
LABEL_2:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v68 )
      *(_DWORD *)(v67 + 112) &= ~2u;
    return -1;
  }
}
