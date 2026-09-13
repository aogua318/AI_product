int __cdecl sub_401004(__int16 *a1, _BYTE *a2)
{
  __int16 *v2; // edx
  _BYTE *v3; // ecx
  int result; // eax
  unsigned int v5; // eax
  bool v6; // cf
  unsigned int v7; // eax
  __int16 v8; // ax

  v2 = a1; /*0x401004*/
  v3 = a2; /*0x401008*/
  if ( a1 ) /*0x40100e*/
  {
    if ( !a2 ) /*0x40101f*/
      return *(_BYTE *)a1 != 0; /*0x401029*/
    if ( ((unsigned __int8)a1 & 3) == 0 ) /*0x401030*/
      goto LABEL_9; /*0x401030*/
    if ( ((unsigned __int8)a1 & 1) != 0 ) /*0x40106f*/
    {
      v2 = (__int16 *)((char *)a1 + 1); /*0x401073*/
      v6 = *(_BYTE *)a1 < *a2; /*0x401074*/
      if ( *(_BYTE *)a1 != *a2 ) /*0x401076*/
        return -2 * v6 + 1; /*0x401076*/
      v3 = a2 + 1; /*0x401078*/
      if ( !*(_BYTE *)a1 ) /*0x40107b*/
        return 0; /*0x40107b*/
      if ( ((unsigned __int8)v2 & 2) == 0 ) /*0x401083*/
        goto LABEL_9; /*0x401083*/
    }
    v8 = *v2++; /*0x401085*/
    v6 = (unsigned __int8)v8 < *v3; /*0x40108b*/
    if ( (_BYTE)v8 == *v3 ) /*0x40108d*/
    {
      if ( !(_BYTE)v8 ) /*0x401091*/
        return 0; /*0x401091*/
      v6 = HIBYTE(v8) < v3[1]; /*0x401093*/
      if ( HIBYTE(v8) == v3[1] ) /*0x401096*/
      {
        if ( HIBYTE(v8) ) /*0x40109a*/
        {
          v3 += 2; /*0x40109c*/
LABEL_9:
          while ( 1 ) /*0x401032*/
          {
            v5 = *(_DWORD *)v2; /*0x401032*/
            v6 = (unsigned __int8)*(_DWORD *)v2 < *v3; /*0x401034*/
            if ( (unsigned __int8)*(_DWORD *)v2 != *v3 ) /*0x401036*/
              break; /*0x401036*/
            if ( !(_BYTE)v5 ) /*0x40103a*/
              return 0; /*0x40103a*/
            v6 = BYTE1(v5) < v3[1]; /*0x40103c*/
            if ( BYTE1(v5) != v3[1] ) /*0x40103f*/
              break; /*0x40103f*/
            if ( !BYTE1(v5) ) /*0x401043*/
              return 0; /*0x401043*/
            v7 = HIWORD(v5); /*0x401045*/
            v6 = (unsigned __int8)v7 < v3[2]; /*0x401048*/
            if ( (_BYTE)v7 != v3[2] ) /*0x40104b*/
              break; /*0x40104b*/
            if ( !(_BYTE)v7 ) /*0x40104f*/
              return 0; /*0x40104f*/
            v6 = BYTE1(v7) < v3[3]; /*0x401051*/
            if ( BYTE1(v7) != v3[3] ) /*0x401054*/
              break; /*0x401054*/
            v3 += 4; /*0x401056*/
            v2 += 2; /*0x401059*/
            if ( !BYTE1(v7) ) /*0x40105e*/
              return 0; /*0x40105e*/
          }
          return -2 * v6 + 1; /*0x401054*/
        }
        return 0; /*0x401062*/
      }
    }
    return -2 * v6 + 1; /*0x401068*/
  }
  result = 0; /*0x401010*/
  if ( a2 ) /*0x401014*/
  {
    if ( *a2 ) /*0x401016*/
      return -1; /*0x40101b*/
  }
  return result; /*0x40101c*/
}