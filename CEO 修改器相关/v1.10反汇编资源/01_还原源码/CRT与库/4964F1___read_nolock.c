// 函数 0x4964f1  __read_nolock  size=0x5B7  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl _read_nolock(int FileHandle, CHAR *lpBuffer, DWORD nNumberOfBytesToRead)
{
  DWORD v3; // edx
  unsigned int result; // eax
  int *v5; // edi
  int v6; // eax
  int v7; // esi
  char v8; // cl
  CHAR *v9; // ebx
  int v10; // ecx
  CHAR *v11; // eax
  CHAR v12; // cl
  bool v13; // zf
  int v14; // ecx
  CHAR v15; // cl
  int v16; // ecx
  CHAR v17; // cl
  int v18; // ecx
  int v19; // eax
  char *v20; // eax
  CHAR *v21; // ebx
  CHAR v22; // al
  _BYTE *v23; // eax
  _BYTE *v24; // ebx
  int v25; // ecx
  int v26; // eax
  char v27; // dl
  _BYTE *v28; // ebx
  int v29; // ebx
  DWORD LastError; // eax
  int v31; // edx
  BOOL v32; // ecx
  CHAR *v33; // ebx
  int v34; // ecx
  _BYTE *v35; // esi
  __int16 v36; // [esp-Ch] [ebp-2Ch]
  DWORD v37; // [esp+4h] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-18h] BYREF
  int v39; // [esp+Ch] [ebp-14h]
  LPCCH lpMultiByteStr; // [esp+10h] [ebp-10h]
  unsigned int v41; // [esp+14h] [ebp-Ch]
  __int16 v42; // [esp+18h] [ebp-8h] BYREF
  char v43; // [esp+1Eh] [ebp-2h]
  char Buffer; // [esp+1Fh] [ebp-1h] BYREF
  LPCCH nNumberOfBytesToReada; // [esp+30h] [ebp+10h]
  LPCCH nNumberOfBytesToReadb; // [esp+30h] [ebp+10h]

  v3 = nNumberOfBytesToRead;
  v39 = -2;
  v37 = nNumberOfBytesToRead;
  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0 || FileHandle >= uNumber )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  v5 = &dword_8F61C0[FileHandle >> 5];
  v6 = *v5;
  v7 = (FileHandle & 0x1F) << 6;
  v8 = *(_BYTE *)(*v5 + v7 + 4);
  if ( (v8 & 1) == 0 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
LABEL_19:
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( nNumberOfBytesToRead > 0x7FFFFFFF )
    goto LABEL_18;
  v41 = 0;
  if ( !nNumberOfBytesToRead || (v8 & 2) != 0 )
    return 0;
  if ( !lpBuffer )
    goto LABEL_18;
  v43 = (char)(2 * *(_BYTE *)(v6 + v7 + 36)) >> 1;
  if ( v43 != 1 )
  {
    if ( v43 != 2 )
    {
LABEL_16:
      v9 = lpBuffer;
      lpMultiByteStr = lpBuffer;
      goto LABEL_26;
    }
    if ( (nNumberOfBytesToRead & 1) == 0 )
    {
      nNumberOfBytesToRead &= ~1u;
      goto LABEL_16;
    }
LABEL_18:
    *__doserrno() = 0;
    *_errno() = 22;
    goto LABEL_19;
  }
  if ( (nNumberOfBytesToRead & 1) != 0 )
    goto LABEL_18;
  nNumberOfBytesToRead = 4;
  if ( v3 >> 1 >= 4 )
    nNumberOfBytesToRead = v3 >> 1;
  v9 = (CHAR *)_malloc_crt(nNumberOfBytesToRead);
  lpMultiByteStr = v9;
  if ( !v9 )
  {
    *_errno() = 12;
    *__doserrno() = 8;
    return -1;
  }
  *(_QWORD *)(v7 + *v5 + 40) = _lseeki64_nolock(FileHandle, 0, 0, 1u);
LABEL_26:
  v10 = v7 + *v5;
  v11 = v9;
  if ( (*(_BYTE *)(v10 + 4) & 0x48) != 0 )
  {
    v12 = *(_BYTE *)(v10 + 5);
    if ( v12 != 10 )
    {
      if ( nNumberOfBytesToRead )
      {
        --nNumberOfBytesToRead;
        v13 = v43 == 0;
        *v9 = v12;
        v14 = *v5;
        v11 = v9 + 1;
        v41 = 1;
        *(_BYTE *)(v7 + v14 + 5) = 10;
        if ( !v13 )
        {
          v15 = *(_BYTE *)(v7 + *v5 + 37);
          if ( v15 != 10 )
          {
            if ( nNumberOfBytesToRead )
            {
              *v11 = v15;
              v16 = *v5;
              v11 = v9 + 2;
              --nNumberOfBytesToRead;
              v13 = v43 == 1;
              v41 = 2;
              *(_BYTE *)(v7 + v16 + 37) = 10;
              if ( v13 )
              {
                v17 = *(_BYTE *)(v7 + *v5 + 38);
                if ( v17 != 10 )
                {
                  if ( nNumberOfBytesToRead )
                  {
                    *v11 = v17;
                    v18 = *v5;
                    v11 = v9 + 3;
                    --nNumberOfBytesToRead;
                    v41 = 3;
                    *(_BYTE *)(v7 + v18 + 38) = 10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( !ReadFile(*(HANDLE *)(v7 + *v5), v11, nNumberOfBytesToRead, &NumberOfBytesRead, 0)
    || (NumberOfBytesRead & 0x80000000) != 0
    || NumberOfBytesRead > nNumberOfBytesToRead )
  {
    LastError = GetLastError();
    if ( LastError == 5 )
    {
      *_errno() = 9;
      *__doserrno() = 5;
      goto LABEL_93;
    }
    if ( LastError == 109 )
    {
      v39 = 0;
      goto $error_return$29001;
    }
    goto LABEL_92;
  }
  v19 = *v5;
  v41 += NumberOfBytesRead;
  v20 = (char *)(v7 + v19 + 4);
  if ( *v20 < 0 )
  {
    if ( v43 != 2 )
    {
      if ( NumberOfBytesRead && *v9 == 10 )
        *v20 |= 4u;
      else
        *v20 &= ~4u;
      v21 = (CHAR *)lpMultiByteStr;
      nNumberOfBytesToReada = lpMultiByteStr;
      v41 += (unsigned int)lpMultiByteStr;
      if ( (unsigned int)lpMultiByteStr < v41 )
      {
        do
        {
          v22 = *nNumberOfBytesToReada;
          if ( *nNumberOfBytesToReada == 26 )
          {
            v23 = (_BYTE *)(v7 + *v5 + 4);
            if ( (*v23 & 0x40) != 0 )
              *v21++ = *nNumberOfBytesToReada;
            else
              *v23 |= 2u;
            break;
          }
          if ( v22 == 13 )
          {
            if ( (unsigned int)nNumberOfBytesToReada < v41 - 1 )
            {
              if ( nNumberOfBytesToReada[1] == 10 )
              {
                nNumberOfBytesToReada += 2;
                goto LABEL_52;
              }
              ++nNumberOfBytesToReada;
LABEL_63:
              *v21 = 13;
LABEL_64:
              ++v21;
              continue;
            }
            ++nNumberOfBytesToReada;
            if ( !ReadFile(*(HANDLE *)(v7 + *v5), &Buffer, 1u, &NumberOfBytesRead, 0) && GetLastError()
              || !NumberOfBytesRead )
            {
              goto LABEL_63;
            }
            if ( (*(_BYTE *)(v7 + *v5 + 4) & 0x48) != 0 )
            {
              if ( Buffer != 10 )
              {
                *v21 = 13;
                *(_BYTE *)(v7 + *v5 + 5) = Buffer;
                goto LABEL_64;
              }
LABEL_52:
              *v21 = 10;
              goto LABEL_64;
            }
            if ( v21 == lpMultiByteStr && Buffer == 10 )
              goto LABEL_52;
            _lseeki64_nolock(FileHandle, -1, -1, 1u);
            if ( Buffer != 10 )
              goto LABEL_63;
          }
          else
          {
            *v21++ = v22;
            ++nNumberOfBytesToReada;
          }
        }
        while ( (unsigned int)nNumberOfBytesToReada < v41 );
      }
      v41 = v21 - lpMultiByteStr;
      if ( v43 != 1 || v21 == lpMultiByteStr )
        goto $error_return$29001;
      v24 = v21 - 1;
      LOBYTE(v25) = *v24;
      if ( (char)*v24 < 0 )
      {
        v26 = 1;
        v25 = (unsigned __int8)v25;
        while ( !byte_4B9060[v25] && v26 <= 4 && v24 >= lpMultiByteStr )
        {
          v25 = (unsigned __int8)*--v24;
          ++v26;
        }
        v27 = *v24;
        if ( !byte_4B9060[(unsigned __int8)*v24] )
        {
          *_errno() = 42;
LABEL_93:
          v39 = -1;
          goto $error_return$29001;
        }
        if ( byte_4B9060[(unsigned __int8)*v24] + 1 == v26 )
        {
          v24 += v26;
        }
        else if ( (*(_BYTE *)(*v5 + v7 + 4) & 0x48) != 0 )
        {
          v28 = v24 + 1;
          *(_BYTE *)(*v5 + v7 + 5) = v27;
          if ( v26 >= 2 )
            *(_BYTE *)(v7 + *v5 + 37) = *v28++;
          if ( v26 == 3 )
            *(_BYTE *)(v7 + *v5 + 38) = *v28++;
          v24 = &v28[-v26];
        }
        else
        {
          _lseeki64_nolock(FileHandle, -v26, -v26 >> 31, 1u);
        }
      }
      else
      {
        ++v24;
      }
      v29 = v24 - lpMultiByteStr;
      v41 = MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, v29, (LPWSTR)lpBuffer, v37 >> 1);
      if ( v41 )
      {
        v31 = *v5;
        v32 = v41 != v29;
        v41 *= 2;
        *(_DWORD *)(v7 + v31 + 48) = v32;
        goto $error_return$29001;
      }
      LastError = GetLastError();
LABEL_92:
      _dosmaperr(LastError);
      goto LABEL_93;
    }
    if ( NumberOfBytesRead && *(_WORD *)v9 == 10 )
      *v20 |= 4u;
    else
      *v20 &= ~4u;
    v33 = (CHAR *)lpMultiByteStr;
    nNumberOfBytesToReadb = lpMultiByteStr;
    v41 += (unsigned int)lpMultiByteStr;
    if ( (unsigned int)lpMultiByteStr >= v41 )
    {
LABEL_129:
      v41 = v33 - lpMultiByteStr;
      goto $error_return$29001;
    }
    while ( 1 )
    {
      v34 = *(unsigned __int16 *)nNumberOfBytesToReadb;
      if ( v34 == 26 )
      {
        v35 = (_BYTE *)(v7 + *v5 + 4);
        if ( (*v35 & 0x40) != 0 )
        {
          *(_WORD *)v33 = *(_WORD *)nNumberOfBytesToReadb;
          v33 += 2;
        }
        else
        {
          *v35 |= 2u;
        }
        goto LABEL_129;
      }
      if ( v34 == 13 )
      {
        if ( (unsigned int)nNumberOfBytesToReadb < v41 - 2 )
        {
          if ( *((_WORD *)nNumberOfBytesToReadb + 1) == 10 )
          {
            nNumberOfBytesToReadb += 4;
            goto LABEL_110;
          }
          nNumberOfBytesToReadb += 2;
LABEL_121:
          v36 = 13;
LABEL_122:
          *(_WORD *)v33 = v36;
          goto LABEL_123;
        }
        nNumberOfBytesToReadb += 2;
        if ( !ReadFile(*(HANDLE *)(v7 + *v5), &v42, 2u, &NumberOfBytesRead, 0) && GetLastError() || !NumberOfBytesRead )
          goto LABEL_121;
        if ( (*(_BYTE *)(v7 + *v5 + 4) & 0x48) != 0 )
        {
          if ( v42 != 10 )
          {
            *(_WORD *)v33 = 13;
            *(_BYTE *)(v7 + *v5 + 5) = v42;
            *(_BYTE *)(v7 + *v5 + 37) = HIBYTE(v42);
            *(_BYTE *)(v7 + *v5 + 38) = 10;
LABEL_123:
            v33 += 2;
            goto LABEL_124;
          }
LABEL_110:
          v36 = 10;
          goto LABEL_122;
        }
        if ( v33 == lpMultiByteStr && v42 == 10 )
          goto LABEL_110;
        _lseeki64_nolock(FileHandle, -2, -1, 1u);
        if ( v42 != 10 )
          goto LABEL_121;
      }
      else
      {
        *(_WORD *)v33 = v34;
        v33 += 2;
        nNumberOfBytesToReadb += 2;
      }
LABEL_124:
      if ( (unsigned int)nNumberOfBytesToReadb >= v41 )
        goto LABEL_129;
    }
  }
$error_return$29001:
  if ( lpMultiByteStr != lpBuffer )
    free((void *)lpMultiByteStr);
  result = v39;
  if ( v39 == -2 )
    return v41;
  return result;
}
