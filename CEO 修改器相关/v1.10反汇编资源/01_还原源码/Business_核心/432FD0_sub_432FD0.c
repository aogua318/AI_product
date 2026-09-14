// 函数 0x432fd0  sub_432FD0  size=0xF6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_432FD0()
{
  int v0; // eax
  int v1; // edi
  int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  __int16 *v7; // edx
  int v8; // eax
  int v10; // [esp+4h] [ebp-4Ch]
  _DWORD v11[17]; // [esp+8h] [ebp-48h] BYREF

  LOBYTE(v0) = (unsigned __int8)memset(v11, 0, sizeof(v11));
  v1 = 0;
  if ( dword_4D0C90 > 0 )
  {
    v2 = *(_DWORD *)dword_4D0C8C;
    v3 = 0;
    v10 = 0;
    do
    {
      LOBYTE(v0) = *(_BYTE *)(v3 + v2 + 78);
      if ( (_BYTE)v0 != 0xFF && !v11[(char)v0] )
      {
        v0 = *(char *)(v3 + v2 + 12);
        if ( dword_4CD128 >= v0 )
        {
          v4 = 17 * *(char *)(v3 + v2 + 78);
          v11[*(char *)(v3 + v2 + 78)] = 1;
          v5 = *(_DWORD *)dword_4D0C94 + 4 * v4;
          LOBYTE(v0) = 0;
          v6 = 0;
          if ( *(__int16 *)(v5 + 64) > 0 )
          {
            v7 = (__int16 *)(v5 + 24);
            do
            {
              v8 = 112 * *(unsigned __int8 *)(116 * *v7 + *(_DWORD *)dword_87081C + 1);
              *((_BYTE *)dword_870824 + v8 + 11) = 1;
              *(_WORD *)((char *)dword_870824 + v8 + 12) = v1;
              v0 = *(__int16 *)(v5 + 64);
              ++v6;
              ++v7;
            }
            while ( v6 < v0 );
            v2 = *(_DWORD *)dword_4D0C8C;
            v3 = v10;
          }
        }
      }
      ++v1;
      v3 += 388;
      v10 = v3;
    }
    while ( v1 < dword_4D0C90 );
  }
  return v0;
}
