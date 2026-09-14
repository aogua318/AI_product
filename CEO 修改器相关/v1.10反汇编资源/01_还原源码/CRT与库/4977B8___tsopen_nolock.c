// 函数 0x4977b8  __tsopen_nolock  size=0x733  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall _tsopen_nolock@<eax>(int *a1@<eax>, _DWORD *a2, LPCSTR lpFileName, int a4, int a5, char a6)
{
  unsigned int v7; // eax
  int v9; // eax
  _BYTE *v10; // eax
  DWORD v11; // eax
  DWORD FileType; // eax
  _BYTE *v13; // eax
  DWORD LastError; // esi
  char v15; // cl
  _BYTE *v16; // eax
  signed int v17; // edi
  int v18; // eax
  DWORD v19; // eax
  DWORD v20; // eax
  int v21; // edi
  __int64 v22; // rax
  unsigned int nolock; // eax
  __int64 v24; // rax
  DWORD v25; // eax
  int v26; // ebx
  int v27; // eax
  _BYTE *v28; // eax
  _BYTE *v29; // eax
  bool v30; // zf
  _BYTE *v31; // eax
  HANDLE v32; // eax
  DWORD v33; // eax
  _BYTE *v34; // eax
  int v35; // [esp-10h] [ebp-48h]
  DWORD v36; // [esp-Ch] [ebp-44h]
  int v37; // [esp-8h] [ebp-40h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+8h] [ebp-30h] BYREF
  int v39; // [esp+14h] [ebp-24h] BYREF
  HANDLE hFile; // [esp+18h] [ebp-20h]
  int Buf; // [esp+1Ch] [ebp-1Ch] BYREF
  DWORD dwCreationDisposition; // [esp+20h] [ebp-18h]
  DWORD dwShareMode; // [esp+24h] [ebp-14h]
  DWORD dwFlagsAndAttributes; // [esp+28h] [ebp-10h]
  DWORD dwDesiredAccess; // [esp+2Ch] [ebp-Ch]
  int v46; // [esp+30h] [ebp-8h]
  CHAR Buffer; // [esp+34h] [ebp-4h] BYREF
  char v48; // [esp+35h] [ebp-3h]
  char v49; // [esp+36h] [ebp-2h]
  char v50; // [esp+37h] [ebp-1h]

  v39 = 0;
  v49 = 0;
  v46 = 0;
  SecurityAttributes.nLength = 12;
  SecurityAttributes.lpSecurityDescriptor = 0;
  if ( (a4 & 0x80u) == 0 )
  {
    SecurityAttributes.bInheritHandle = 1;
    v50 = 0;
  }
  else
  {
    SecurityAttributes.bInheritHandle = 0;
    v50 = 16;
  }
  if ( sub_496233(&v39) )
    _invoke_watson(0, 0, 0, 0, 0);
  if ( (a4 & 0x8000) == 0 && ((a4 & 0x74000) != 0 || v39 != 0x8000) )
    v50 |= 0x80u;
  if ( (a4 & 3) != 0 )
  {
    if ( (a4 & 3) != 1 )
    {
      if ( (a4 & 3) != 2 )
        goto LABEL_40;
      goto LABEL_13;
    }
    if ( (a4 & 8) != 0 && (a4 & 0x70000) != 0 )
    {
LABEL_13:
      dwDesiredAccess = -1073741824;
      goto LABEL_18;
    }
    dwDesiredAccess = 0x40000000;
  }
  else
  {
    dwDesiredAccess = 0x80000000;
  }
LABEL_18:
  switch ( a5 )
  {
    case 16:
      dwShareMode = 0;
      break;
    case 32:
      dwShareMode = 1;
      break;
    case 48:
      dwShareMode = 2;
      break;
    case 64:
      dwShareMode = 3;
      break;
    case 128:
      dwShareMode = dwDesiredAccess == 0x80000000;
      break;
    default:
      goto LABEL_40;
  }
  v7 = a4 & 0x700;
  if ( v7 > 0x400 )
  {
    if ( v7 != 1280 )
    {
      if ( v7 == 1536 )
        goto LABEL_41;
      if ( v7 != 1792 )
        goto LABEL_40;
    }
    dwCreationDisposition = 1;
    goto LABEL_43;
  }
  if ( (a4 & 0x700) == 0x400 || (a4 & 0x700) == 0 )
  {
    dwCreationDisposition = 3;
    goto LABEL_43;
  }
  if ( v7 == 256 )
  {
    dwCreationDisposition = 4;
    goto LABEL_43;
  }
  if ( v7 == 512 )
  {
LABEL_41:
    dwCreationDisposition = 5;
    goto LABEL_43;
  }
  if ( v7 != 768 )
  {
LABEL_40:
    *__doserrno() = 0;
    *a1 = -1;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  dwCreationDisposition = 2;
LABEL_43:
  dwFlagsAndAttributes = 128;
  if ( (a4 & 0x100) != 0 && (a6 & ~(_BYTE)dword_8F2B40 & 0x80u) == 0 )
    dwFlagsAndAttributes = 1;
  if ( (a4 & 0x40) != 0 )
  {
    dwFlagsAndAttributes |= 0x4000000u;
    dwDesiredAccess |= 0x10000u;
    dwShareMode |= 4u;
  }
  if ( (a4 & 0x1000) != 0 )
    dwFlagsAndAttributes |= 0x100u;
  if ( (a4 & 0x20) != 0 )
  {
    dwFlagsAndAttributes |= 0x8000000u;
  }
  else if ( (a4 & 0x10) != 0 )
  {
    dwFlagsAndAttributes |= 0x10000000u;
  }
  v9 = _alloc_osfhnd();
  *a1 = v9;
  if ( v9 == -1 )
  {
    *__doserrno() = 0;
    *a1 = -1;
    *_errno() = 24;
    return *_errno();
  }
  v36 = dwFlagsAndAttributes;
  *a2 = 1;
  hFile = CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, &SecurityAttributes, dwCreationDisposition, v36, 0);
  if ( hFile != (HANDLE)-1
    || (dwDesiredAccess & 0xC0000000) == 0xC0000000
    && (a4 & 1) != 0
    && (dwDesiredAccess &= ~0x80000000,
        hFile = CreateFileA(
                  lpFileName,
                  dwDesiredAccess,
                  dwShareMode,
                  &SecurityAttributes,
                  dwCreationDisposition,
                  dwFlagsAndAttributes,
                  0),
        hFile != (HANDLE)-1) )
  {
    FileType = GetFileType(hFile);
    switch ( FileType )
    {
      case 0u:
        v13 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
        *v13 &= ~1u;
        LastError = GetLastError();
        _dosmaperr(LastError);
        CloseHandle(hFile);
        if ( !LastError )
          *_errno() = 13;
        return *_errno();
      case 2u:
        v50 |= 0x40u;
        break;
      case 3u:
        v50 |= 8u;
        break;
    }
    _set_osfhnd(*a1, hFile);
    v15 = v50 | 1;
    *(_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4) = v50 | 1;
    v16 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 36);
    *v16 &= 0x80u;
    v48 = v15 & 0x48;
    v50 = v15;
    if ( (v15 & 0x48) == 0 )
    {
      if ( v15 >= 0 )
        goto LABEL_131;
      if ( (a4 & 2) != 0 )
      {
        v17 = _lseek_nolock(*a1, -1, 2u);
        if ( v17 == -1 )
        {
          if ( *__doserrno() != 131 )
          {
LABEL_74:
            _close_nolock(*a1);
            return *_errno();
          }
        }
        else
        {
          v35 = *a1;
          Buffer = 0;
          if ( !_read_nolock(v35, &Buffer, 1u) && Buffer == 26 && _chsize_nolock(*a1, v17) == -1
            || _lseek_nolock(*a1, 0, 0) == -1 )
          {
            goto LABEL_74;
          }
        }
      }
    }
    if ( v50 >= 0 )
    {
LABEL_131:
      v28 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 36);
      *v28 ^= (v49 ^ *v28) & 0x7F;
      v29 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 36);
      v30 = v48 == 0;
      *v29 = *v29 & 0x7F | (BYTE2(a4) << 7);
      if ( v30 && (a4 & 8) != 0 )
      {
        v31 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
        *v31 |= 0x20u;
      }
      if ( (dwDesiredAccess & 0xC0000000) != 0xC0000000 || (a4 & 1) == 0 )
        return v46;
      CloseHandle(hFile);
      v32 = CreateFileA(
              lpFileName,
              dwDesiredAccess & 0x7FFFFFFF,
              dwShareMode,
              &SecurityAttributes,
              3u,
              dwFlagsAndAttributes,
              0);
      if ( v32 != (HANDLE)-1 )
      {
        *(_DWORD *)(((*a1 & 0x1F) << 6) + dword_8F61C0[*a1 >> 5]) = v32;
        return v46;
      }
      v33 = GetLastError();
      _dosmaperr(v33);
      v34 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
      *v34 &= ~1u;
      _free_osfhnd(*a1);
      return *_errno();
    }
    if ( (a4 & 0x74000) == 0 )
    {
      if ( (v39 & 0x74000) != 0 )
        a4 |= v39 & 0x74000;
      else
        a4 |= 0x4000u;
    }
    v18 = a4 & 0x74000;
    if ( (a4 & 0x74000) == 0x4000 )
    {
      v49 = 0;
      goto LABEL_95;
    }
    if ( v18 == 0x10000 || v18 == 81920 )
    {
      if ( (a4 & 0x301) != 0x301 )
        goto LABEL_95;
    }
    else if ( v18 != 0x20000 && v18 != 147456 )
    {
      if ( v18 == 0x40000 || v18 == 278528 )
        v49 = 1;
LABEL_95:
      if ( (a4 & 0x70000) == 0 )
        goto LABEL_131;
      Buf = 0;
      if ( (v50 & 0x40) != 0 )
        goto LABEL_131;
      v19 = dwDesiredAccess & 0xC0000000;
      if ( (dwDesiredAccess & 0xC0000000) == 0x40000000 )
      {
        v20 = dwCreationDisposition;
        if ( !dwCreationDisposition )
          goto LABEL_131;
        if ( dwCreationDisposition <= 2 )
          goto LABEL_104;
        if ( dwCreationDisposition > 4 )
          goto LABEL_103;
        if ( _lseeki64_nolock(*a1, 0, 0, 2u) )
        {
          v24 = _lseeki64_nolock(*a1, 0, 0, 0);
          v25 = HIDWORD(v24) & v24;
          goto LABEL_119;
        }
      }
      else
      {
        if ( v19 == 0x80000000 )
          goto LABEL_109;
        if ( v19 != -1073741824 )
          goto LABEL_131;
        v20 = dwCreationDisposition;
        if ( !dwCreationDisposition )
          goto LABEL_131;
        if ( dwCreationDisposition > 2 )
        {
          if ( dwCreationDisposition > 4 )
          {
LABEL_103:
            if ( v20 != 5 )
              goto LABEL_131;
            goto LABEL_104;
          }
          if ( _lseeki64_nolock(*a1, 0, 0, 2u) )
          {
            v22 = _lseeki64_nolock(*a1, 0, 0, 0);
            if ( (HIDWORD(v22) & (unsigned int)v22) == 0xFFFFFFFF )
              goto LABEL_74;
LABEL_109:
            nolock = _read_nolock(*a1, (CHAR *)&Buf, 3u);
            if ( nolock == -1 )
              goto LABEL_74;
            if ( nolock != 2 )
            {
              if ( nolock != 3 )
              {
LABEL_126:
                v25 = _lseek_nolock(*a1, 0, 0);
LABEL_119:
                if ( v25 == -1 )
                  goto LABEL_74;
                goto LABEL_131;
              }
              if ( Buf == 12565487 )
              {
                v49 = 1;
                goto LABEL_131;
              }
            }
            if ( (unsigned __int16)Buf == 65534 )
            {
              _close_nolock(*a1);
              *_errno() = 22;
              return 22;
            }
            if ( (unsigned __int16)Buf == 65279 )
            {
              if ( _lseek_nolock(*a1, 2, 0) == -1 )
                goto LABEL_74;
              v49 = 2;
              goto LABEL_131;
            }
            goto LABEL_126;
          }
        }
      }
LABEL_104:
      v21 = 0;
      if ( v49 == 1 )
      {
        Buf = 12565487;
        v37 = 3;
LABEL_128:
        v26 = v37;
        while ( 1 )
        {
          v27 = _write(*a1, (char *)&Buf + v21, v26 - v21);
          if ( v27 == -1 )
            goto LABEL_74;
          v21 += v27;
          if ( v26 <= v21 )
            goto LABEL_131;
        }
      }
      if ( v49 == 2 )
      {
        Buf = 65279;
        v37 = 2;
        goto LABEL_128;
      }
      goto LABEL_131;
    }
    v49 = 2;
    goto LABEL_95;
  }
  v10 = (_BYTE *)(dword_8F61C0[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
  *v10 &= ~1u;
  v11 = GetLastError();
  _dosmaperr(v11);
  return *_errno();
}
