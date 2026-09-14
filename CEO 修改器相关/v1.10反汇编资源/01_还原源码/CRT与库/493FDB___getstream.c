// 函数 0x493fdb  __getstream  size=0x133  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *_getstream()
{
  _DWORD *v0; // edi
  int i; // esi
  char *v2; // eax
  int v3; // eax
  void *v4; // eax

  v0 = 0;
  _lock(1);
  for ( i = 0; i < dword_8F72E0; ++i )
  {
    v2 = (char *)dword_8F62C8 + 4 * i;
    if ( !*(_DWORD *)v2 )
    {
      v4 = _malloc_crt(0x38u);
      *((_DWORD *)dword_8F62C8 + i) = v4;
      if ( v4 )
      {
        if ( InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(*((_DWORD *)dword_8F62C8 + i) + 32), 0xFA0u) )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)dword_8F62C8 + i) + 32));
          v0 = (_DWORD *)*((_DWORD *)dword_8F62C8 + i);
          v0[3] = 0;
        }
        else
        {
          free(*((void **)dword_8F62C8 + i));
          *((_DWORD *)dword_8F62C8 + i) = 0;
        }
      }
      break;
    }
    v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    if ( (v3 & 0x83) == 0 && (v3 & 0x8000) == 0 )
    {
      if ( (unsigned int)(i - 3) <= 0x10 && !_mtinitlocknum(i + 16) )
        break;
      _lock_file2(i, *((_DWORD *)dword_8F62C8 + i));
      if ( (*(_BYTE *)(*((_DWORD *)dword_8F62C8 + i) + 12) & 0x83) == 0 )
      {
        v0 = (_DWORD *)*((_DWORD *)dword_8F62C8 + i);
        break;
      }
      _unlock_file2(i, *((_DWORD *)dword_8F62C8 + i));
    }
  }
  if ( v0 )
  {
    v0[3] &= 0x8000u;
    v0[1] = 0;
    v0[2] = 0;
    *v0 = 0;
    v0[7] = 0;
    v0[4] = -1;
  }
  _unlock(1);
  return v0;
}
