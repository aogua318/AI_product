// 函数 0x491a3d  __setmbcp_nolock  size=0x1E9  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _setmbcp_nolock(int a1, int a2)
{
  int SystemCP; // edi
  unsigned int i; // eax
  BYTE *v5; // esi
  BYTE v6; // cl
  unsigned int j; // eax
  _BYTE *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // edi
  _WORD *v11; // eax
  int v12; // ecx
  _WORD *v13; // ecx
  int v14; // edx
  _BYTE *v15; // eax
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // [esp+Ch] [ebp-20h]
  int v19; // [esp+10h] [ebp-1Ch]
  _BYTE *v20; // [esp+10h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+34h] [ebp+8h]

  SystemCP = getSystemCP(a1);
  v22 = SystemCP;
  if ( SystemCP )
  {
    v19 = 0;
    for ( i = 0; i < 60; i += 12 )
    {
      if ( dword_4B8CC0[i] == SystemCP )
      {
        memset((void *)(a2 + 28), 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_4B8CD0 + 48 * v19;
        v20 = v8;
        do
        {
          while ( *v8 )
          {
            LOBYTE(v9) = v8[1];
            if ( !(_BYTE)v9 )
              break;
            v10 = (unsigned __int8)*v8;
            v9 = (unsigned __int8)v9;
            while ( v10 <= v9 )
            {
              *(_BYTE *)(a2 + v10 + 29) |= byte_4B8CBC[v18];
              v9 = (unsigned __int8)v8[1];
              ++v10;
            }
            SystemCP = v22;
            v8 += 2;
          }
          ++v18;
          v8 = v20 + 8;
          v20 += 8;
        }
        while ( v18 < 4 );
        *(_DWORD *)(a2 + 4) = SystemCP;
        *(_DWORD *)(a2 + 8) = 1;
        *(_DWORD *)(a2 + 12) = CPtoLCID(SystemCP);
        v11 = (_WORD *)(a2 + 16);
        v13 = (_WORD *)((char *)&unk_4B8CC4 + v12);
        v14 = 6;
        do
        {
          *v11++ = *v13++;
          --v14;
        }
        while ( v14 );
LABEL_26:
        setSBUpLow(a2);
        return 0;
      }
      ++v19;
    }
    if ( SystemCP == 65000 || SystemCP == 65001 || !IsValidCodePage((unsigned __int16)SystemCP) )
      return -1;
    if ( GetCPInfo(SystemCP, &CPInfo) )
    {
      memset((void *)(a2 + 28), 0, 0x101u);
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_DWORD *)(a2 + 12) = 0;
      if ( CPInfo.MaxCharSize <= 1 )
      {
        *(_DWORD *)(a2 + 8) = 0;
      }
      else
      {
        if ( CPInfo.LeadByte[0] )
        {
          v5 = &CPInfo.LeadByte[1];
          do
          {
            v6 = *v5;
            if ( !*v5 )
              break;
            for ( j = *(v5 - 1); j <= v6; ++j )
              *(_BYTE *)(a2 + j + 29) |= 4u;
            v5 += 2;
          }
          while ( *(v5 - 1) );
        }
        v15 = (_BYTE *)(a2 + 30);
        v16 = 254;
        do
        {
          *v15++ |= 8u;
          --v16;
        }
        while ( v16 );
        *(_DWORD *)(a2 + 12) = CPtoLCID(*(_DWORD *)(a2 + 4));
        *(_DWORD *)(a2 + 8) = v17;
      }
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 20) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      goto LABEL_26;
    }
    if ( !dword_8F3670 )
      return -1;
  }
  setSBCS((char *)a2);
  return 0;
}
