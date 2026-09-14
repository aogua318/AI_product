// 函数 0x495fdf  __alloc_osfhnd  size=0x199  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int _alloc_osfhnd()
{
  int v0; // edi
  unsigned int v2; // esi
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // [esp+14h] [ebp-24h]
  int v6; // [esp+1Ch] [ebp-1Ch]

  v6 = -1;
  v0 = 0;
  v5 = 0;
  if ( !_mtinitlocknum(11) )
    return -1;
  _lock(11);
  while ( v0 < 64 )
  {
    v2 = dword_8F61C0[v0];
    if ( !v2 )
    {
      v3 = _calloc_crt(32, 64);
      if ( v3 )
      {
        v4 = &dword_8F61C0[v0];
        *v4 = v3;
        uNumber += 32;
        while ( v3 < *v4 + 2048 )
        {
          *(_BYTE *)(v3 + 4) = 0;
          *(_DWORD *)v3 = -1;
          *(_BYTE *)(v3 + 5) = 10;
          *(_DWORD *)(v3 + 8) = 0;
          v3 += 64;
        }
        v6 = 32 * v0;
        *(_BYTE *)(dword_8F61C0[(32 * v0) >> 5] + 4) = 1;
        if ( !__lock_fhandle(32 * v0) )
          v6 = -1;
      }
      break;
    }
    while ( v2 < dword_8F61C0[v0] + 2048 )
    {
      if ( (*(_BYTE *)(v2 + 4) & 1) == 0 )
      {
        if ( !*(_DWORD *)(v2 + 8) )
        {
          _lock(10);
          if ( !*(_DWORD *)(v2 + 8) )
          {
            if ( InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v2 + 12), 0xFA0u) )
              ++*(_DWORD *)(v2 + 8);
            else
              v5 = 1;
          }
          _unlock(10);
        }
        if ( !v5 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 12));
          if ( (*(_BYTE *)(v2 + 4) & 1) == 0 )
          {
            *(_BYTE *)(v2 + 4) = 1;
            *(_DWORD *)v2 = -1;
            v6 = 32 * v0 + ((int)(v2 - dword_8F61C0[v0]) >> 6);
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 12));
        }
      }
      v2 += 64;
    }
    if ( v6 != -1 )
      break;
    ++v0;
  }
  _unlock(11);
  return v6;
}
