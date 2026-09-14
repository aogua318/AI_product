// 函数 0x493d42  __openfile  size=0x297  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl _openfile(char *FileName, _BYTE *FileHandle, int ShareFlag, _DWORD *a4)
{
  unsigned int v4; // ebx
  _BYTE *v5; // esi
  char v6; // al
  _DWORD *result; // eax
  int v8; // ecx
  const unsigned __int8 *v9; // esi
  signed __int8 v10; // al
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const unsigned __int8 *i; // esi
  int v21; // [esp+8h] [ebp-10h]
  int v22; // [esp+Ch] [ebp-Ch]
  int v23; // [esp+10h] [ebp-8h]
  unsigned int v24; // [esp+14h] [ebp-4h]

  v4 = 0;
  v5 = FileHandle;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  while ( *v5 == 32 )
    ++v5;
  v6 = *v5;
  if ( *v5 == 97 )
  {
    v4 = 265;
  }
  else
  {
    if ( v6 == 114 )
    {
      v24 = dword_8F38CC | 1;
      goto LABEL_12;
    }
    if ( v6 != 119 )
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0;
    }
    v4 = 769;
  }
  v24 = dword_8F38CC | 2;
LABEL_12:
  v8 = 1;
  v9 = v5 + 1;
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_66;
  while ( v8 )
  {
    if ( v10 > 83 )
    {
      v16 = v10 - 84;
      if ( !v16 )
      {
        if ( (v4 & 0x1000) == 0 )
        {
          v4 |= 0x1000u;
          goto LABEL_48;
        }
        goto LABEL_46;
      }
      v17 = v16 - 14;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 11;
          if ( v19 )
          {
            if ( v19 != 6 )
              goto LABEL_68;
            if ( (v4 & 0xC000) != 0 )
              goto LABEL_46;
            v4 |= 0x4000u;
          }
          else
          {
            if ( v22 )
              goto LABEL_46;
            v24 &= ~0x4000u;
            v22 = 1;
          }
        }
        else
        {
          if ( v22 )
            goto LABEL_46;
          v24 |= 0x4000u;
          v22 = 1;
        }
      }
      else
      {
        if ( (v4 & 0xC000) != 0 )
          goto LABEL_46;
        v4 |= 0x8000u;
      }
    }
    else if ( v10 == 83 )
    {
      if ( v23 )
        goto LABEL_46;
      v23 = 1;
      v4 |= 0x20u;
    }
    else
    {
      v11 = v10 - 32;
      if ( v11 )
      {
        v12 = v11 - 11;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            v21 = 1;
LABEL_46:
            v8 = 0;
            goto LABEL_48;
          }
          v14 = v13 - 24;
          if ( v14 )
          {
            v15 = v14 - 10;
            if ( v15 )
            {
              if ( v15 != 4 )
                goto LABEL_68;
              if ( v23 )
                goto LABEL_46;
              v23 = 1;
              v4 |= 0x10u;
            }
            else
            {
              v4 |= 0x80u;
            }
          }
          else
          {
            if ( (v4 & 0x40) != 0 )
              goto LABEL_46;
            v4 |= 0x40u;
          }
        }
        else
        {
          if ( (v4 & 2) != 0 )
            goto LABEL_46;
          v4 = v4 & 0xFFFFFFFC | 2;
          v24 = v24 & 0xFFFFFF7C | 0x80;
        }
      }
    }
LABEL_48:
    v10 = *++v9;
    if ( !*v9 )
      break;
  }
  if ( !v21 )
    goto LABEL_66;
  while ( *v9 == 32 )
    ++v9;
  if ( _mbsnbcmp(&Str1, v9, 3u) )
    goto LABEL_68;
  for ( i = v9 + 3; *i == 32; ++i )
    ;
  if ( *i != 61 )
    goto LABEL_68;
  do
    ++i;
  while ( *i == 32 );
  if ( !_mbsnbicmp(i, "UTF-8", 5u) )
  {
    v9 = i + 5;
    v4 |= 0x40000u;
    goto LABEL_66;
  }
  if ( !_mbsnbicmp(i, "UTF-16LE", 8u) )
  {
    v9 = i + 8;
    v4 |= 0x20000u;
    goto LABEL_66;
  }
  if ( _mbsnbicmp(i, "UNICODE", 7u) )
    goto LABEL_68;
  v9 = i + 7;
  v4 |= 0x10000u;
LABEL_66:
  while ( *v9 == 32 )
    ++v9;
  if ( *v9 )
  {
LABEL_68:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  if ( _sopen_s((int *)&FileHandle, FileName, v4, ShareFlag, 384) )
    return 0;
  ++dword_8F2B94;
  result = a4;
  a4[3] = v24;
  result[1] = 0;
  *result = 0;
  result[2] = 0;
  result[7] = 0;
  result[4] = FileHandle;
  return result;
}
