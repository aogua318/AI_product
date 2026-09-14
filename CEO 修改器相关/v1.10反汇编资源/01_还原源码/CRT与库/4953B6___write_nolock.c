// 函数 0x4953b6  __write_nolock  size=0x6FD  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _write_nolock(int FileHandle, const void *a2, DWORD nNumberOfBytesToWrite)
{
  int *v4; // ebx
  int v5; // eax
  int v6; // edi
  char v7; // cl
  BOOL v8; // esi
  UINT ConsoleCP; // eax
  const char *v10; // ebx
  CHAR v11; // cl
  int *v12; // esi
  int v13; // eax
  int v14; // eax
  DWORD v15; // eax
  signed int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  char v20; // dl
  CHAR *v21; // ebx
  unsigned int v22; // esi
  DWORD v23; // ecx
  CHAR *v24; // eax
  CHAR v25; // dl
  signed int v26; // esi
  char *v27; // ebx
  DWORD v28; // ecx
  CHAR *v29; // eax
  int v30; // edx
  signed int v31; // esi
  DWORD v32; // ecx
  WCHAR *v33; // eax
  int v34; // edx
  int v35; // esi
  int v36; // ebx
  BOOL v37; // [esp+8h] [ebp-1AE4h]
  DWORD Mode; // [esp+Ch] [ebp-1AE0h] BYREF
  int *v39; // [esp+10h] [ebp-1ADCh]
  DWORD v40; // [esp+14h] [ebp-1AD8h] BYREF
  DWORD NumberOfBytesWritten; // [esp+18h] [ebp-1AD4h] BYREF
  int v42; // [esp+1Ch] [ebp-1AD0h]
  LPCVOID lpBuffer; // [esp+20h] [ebp-1ACCh]
  DWORD v44; // [esp+24h] [ebp-1AC8h]
  char v45; // [esp+2Bh] [ebp-1AC1h]
  DWORD v46; // [esp+2Ch] [ebp-1AC0h]
  WCHAR WideCharStr[2]; // [esp+30h] [ebp-1ABCh] BYREF
  CHAR Buffer[1704]; // [esp+34h] [ebp-1AB8h] BYREF
  CHAR v49[3416]; // [esp+6DCh] [ebp-1410h] BYREF
  WCHAR v50[854]; // [esp+1434h] [ebp-6B8h] BYREF
  CHAR MultiByteStr[8]; // [esp+1AE0h] [ebp-Ch] BYREF

  lpBuffer = a2;
  v44 = 0;
  v42 = 0;
  if ( !nNumberOfBytesToWrite )
    return 0;
  if ( !a2 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v4 = &dword_8F61C0[FileHandle >> 5];
  v5 = *v4;
  v6 = (FileHandle & 0x1F) << 6;
  v7 = (char)(2 * *(_BYTE *)(*v4 + v6 + 36)) >> 1;
  v39 = v4;
  v45 = v7;
  if ( (v7 == 2 || v7 == 1) && (nNumberOfBytesToWrite & 1) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( (*(_BYTE *)(v5 + v6 + 4) & 0x20) != 0 )
    _lseeki64_nolock(FileHandle, 0, 0, 2u);
  if ( _isatty(FileHandle) )
  {
    if ( *(char *)(v6 + *v4 + 4) < 0 )
    {
      v8 = *(_DWORD *)(_getptd()[27] + 20) == 0;
      if ( GetConsoleMode(*(HANDLE *)(v6 + *v4), &Mode) )
      {
        if ( !v8 || v45 )
        {
          ConsoleCP = GetConsoleCP();
          v10 = (const char *)lpBuffer;
          Mode = ConsoleCP;
          NumberOfBytesWritten = 0;
          v46 = 0;
          while ( 1 )
          {
            if ( v45 )
            {
              if ( v45 == 1 || v45 == 2 )
              {
                v18 = *(unsigned __int16 *)v10;
                v10 += 2;
                v46 += 2;
                *(_DWORD *)WideCharStr = v18;
                v37 = v18 == 10;
              }
              if ( v45 == 1 || v45 == 2 )
              {
                if ( _putwch_nolock(WideCharStr[0]) != WideCharStr[0] )
                  goto LABEL_85;
                v44 += 2;
                if ( v37 )
                {
                  wcscpy(WideCharStr, L"\r");
                  if ( _putwch_nolock(0xDu) != WideCharStr[0] )
                    goto LABEL_85;
                  ++v44;
                  ++v42;
                }
              }
              goto LABEL_43;
            }
            v11 = *v10;
            v12 = v39;
            v37 = *v10 == 10;
            v13 = v6 + *v39;
            if ( *(_DWORD *)(v13 + 56) )
            {
              MultiByteStr[0] = *(_BYTE *)(v13 + 52);
              MultiByteStr[1] = v11;
              *(_DWORD *)(v13 + 56) = 0;
              v14 = mbtowc(WideCharStr, MultiByteStr, 2u);
            }
            else
            {
              if ( isleadbyte(v11) )
              {
                if ( nNumberOfBytesToWrite + (_BYTE *)lpBuffer - v10 <= 1 )
                {
                  v19 = *v12;
                  v20 = *v10;
                  ++v44;
                  *(_BYTE *)(v6 + v19 + 52) = v20;
                  *(_DWORD *)(v6 + *v12 + 56) = 1;
                  goto LABEL_86;
                }
                if ( mbtowc(WideCharStr, v10, 2u) == -1 )
                  goto LABEL_86;
                ++v10;
                ++v46;
                goto LABEL_27;
              }
              v14 = mbtowc(WideCharStr, v10, 1u);
            }
            if ( v14 == -1 )
              goto LABEL_86;
LABEL_27:
            ++v10;
            ++v46;
            v15 = WideCharToMultiByte(Mode, 0, WideCharStr, 1, MultiByteStr, 5, 0, 0);
            v16 = v15;
            if ( !v15 )
              goto LABEL_86;
            if ( !WriteFile(*(HANDLE *)(v6 + *v39), MultiByteStr, v15, &NumberOfBytesWritten, 0) )
              goto LABEL_85;
            v44 = v42 + v46;
            if ( (int)NumberOfBytesWritten < v16 )
              goto LABEL_86;
            if ( v37 )
            {
              v17 = *v39;
              MultiByteStr[0] = 13;
              if ( !WriteFile(*(HANDLE *)(v6 + v17), MultiByteStr, 1u, &NumberOfBytesWritten, 0) )
                goto LABEL_85;
              if ( (int)NumberOfBytesWritten < 1 )
                goto LABEL_86;
              ++v42;
              ++v44;
            }
LABEL_43:
            if ( v46 >= nNumberOfBytesToWrite )
              goto LABEL_86;
          }
        }
      }
    }
  }
  if ( *(char *)(*v4 + v6 + 4) >= 0 )
  {
    if ( WriteFile(*(HANDLE *)(*v4 + ((FileHandle & 0x1F) << 6)), lpBuffer, nNumberOfBytesToWrite, &v40, 0) )
    {
      *(_DWORD *)WideCharStr = 0;
      v44 = v40;
      goto LABEL_86;
    }
  }
  else
  {
    *(_DWORD *)WideCharStr = 0;
    if ( v45 )
    {
      if ( v45 == 2 )
      {
        v27 = (char *)lpBuffer;
        while ( 1 )
        {
          v46 = 0;
          v28 = v27 - (_BYTE *)lpBuffer;
          v29 = Buffer;
          do
          {
            if ( v28 >= nNumberOfBytesToWrite )
              break;
            v30 = *(unsigned __int16 *)v27;
            v27 += 2;
            v28 += 2;
            Mode = (DWORD)v27;
            if ( v30 == 10 )
            {
              v42 += 2;
              *(_WORD *)v29 = 13;
              v27 = (char *)Mode;
              v29 += 2;
              v46 += 2;
            }
            v46 += 2;
            *(_WORD *)v29 = v30;
            v29 += 2;
          }
          while ( v46 < 0x13FE );
          v31 = v29 - Buffer;
          if ( !WriteFile(*(HANDLE *)(v6 + *v39), Buffer, v29 - Buffer, &v40, 0) )
            break;
          v44 += v40;
          if ( (int)v40 < v31 || v27 - (_BYTE *)lpBuffer >= nNumberOfBytesToWrite )
            goto LABEL_86;
        }
      }
      else
      {
        NumberOfBytesWritten = (DWORD)lpBuffer;
        while ( 1 )
        {
          v46 = 0;
          v32 = NumberOfBytesWritten - (_DWORD)lpBuffer;
          v33 = v50;
          do
          {
            if ( v32 >= nNumberOfBytesToWrite )
              break;
            v34 = *(unsigned __int16 *)NumberOfBytesWritten;
            NumberOfBytesWritten += 2;
            v32 += 2;
            if ( v34 == 10 )
            {
              *v33++ = 13;
              v46 += 2;
            }
            v46 += 2;
            *v33++ = v34;
          }
          while ( v46 < 0x6A8 );
          v35 = 0;
          v36 = WideCharToMultiByte(0xFDE9u, 0, v50, v33 - v50, v49, 3413, 0, 0);
          if ( !v36 )
            break;
          while ( WriteFile(*(HANDLE *)(v6 + *v39), &v49[v35], v36 - v35, &v40, 0) )
          {
            v35 += v40;
            if ( v36 <= v35 )
              goto LABEL_80;
          }
          *(_DWORD *)WideCharStr = GetLastError();
LABEL_80:
          if ( v36 <= v35 )
          {
            v44 = NumberOfBytesWritten - (_DWORD)lpBuffer;
            if ( NumberOfBytesWritten - (unsigned int)lpBuffer < nNumberOfBytesToWrite )
              continue;
          }
          goto LABEL_86;
        }
      }
    }
    else
    {
      v21 = (CHAR *)lpBuffer;
      while ( 1 )
      {
        v22 = 0;
        v23 = v21 - (_BYTE *)lpBuffer;
        v24 = Buffer;
        do
        {
          if ( v23 >= nNumberOfBytesToWrite )
            break;
          v25 = *v21++;
          ++v23;
          Mode = (DWORD)v21;
          if ( v25 == 10 )
          {
            ++v42;
            *v24++ = 13;
            ++v22;
          }
          *v24++ = v25;
          ++v22;
        }
        while ( v22 < 0x13FF );
        v26 = v24 - Buffer;
        if ( !WriteFile(*(HANDLE *)(v6 + *v39), Buffer, v24 - Buffer, &v40, 0) )
          break;
        v44 += v40;
        if ( (int)v40 < v26 || v21 - (_BYTE *)lpBuffer >= nNumberOfBytesToWrite )
          goto LABEL_86;
      }
    }
  }
LABEL_85:
  *(_DWORD *)WideCharStr = GetLastError();
LABEL_86:
  if ( !v44 )
  {
    if ( *(_DWORD *)WideCharStr )
    {
      if ( *(_DWORD *)WideCharStr == 5 )
      {
        *_errno() = 9;
        *__doserrno() = 5;
      }
      else
      {
        _dosmaperr(*(unsigned int *)WideCharStr);
      }
    }
    else
    {
      if ( (*(_BYTE *)(v6 + *v39 + 4) & 0x40) != 0 && *(_BYTE *)lpBuffer == 26 )
        return 0;
      *_errno() = 28;
      *__doserrno() = 0;
    }
    return -1;
  }
  return v44 - v42;
}
