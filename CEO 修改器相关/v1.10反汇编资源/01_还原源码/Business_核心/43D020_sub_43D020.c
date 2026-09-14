// 函数 0x43d020  sub_43D020  size=0x16E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_43D020()
{
  DWORD TickCount; // eax
  __int16 v1; // dx
  int v2; // ecx
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  char v6; // al
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  TickCount = GetTickCount();
  if ( (int)(TickCount - dword_8A1B08) > 100 )
  {
    dword_8A1B08 = TickCount;
    if ( dword_8A19D0 )
    {
      TickCount = dword_870868 + dword_4B32BC * dword_870854;
      v1 = *(_WORD *)(TickCount + 10);
      v2 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)TickCount;
      if ( v1 < 0 )
      {
        LOWORD(TickCount) = *(_WORD *)(TickCount + 8);
        if ( (_WORD)TickCount == 0xFFFF )
          return TickCount;
        TickCount = *(__int16 *)(v2 + 2 * (__int16)TickCount + 240);
      }
      else
      {
        TickCount = *(__int16 *)(v2 + 2 * *(unsigned __int8 *)(dword_4D0B98 * v1 + dword_4D0BAC) + 240);
      }
      if ( TickCount != -1 )
      {
        v3 = dword_4CDEB4;
        v4 = dword_4CC8D0 + TickCount * dword_4CC8BC;
        if ( dword_4CDEB4 )
        {
          v5 = dword_4CDEB4 + *(_DWORD *)(v4 + 16);
          if ( v5 <= 99999999 )
          {
            if ( v5 < 0 )
              v5 = 0;
          }
          else
          {
            v5 = 99999999;
          }
          *(_DWORD *)(v4 + 16) = v5;
          sub_43CAB0();
          v3 = dword_4CDEB4;
        }
        v6 = *(_BYTE *)(dword_8A1B00 + 7209);
        if ( (v6 & 4) != 0 && (v6 & 8) != 0 )
        {
          if ( v3 < 0 )
          {
            v3 = 0;
            dword_4CDEB4 = 0;
          }
          v7 = *(_DWORD *)(v4 + 16) / 100;
          if ( v7 <= 1 )
            v7 = 1;
          v8 = v7 + v3;
        }
        else
        {
          LOBYTE(TickCount) = *(_BYTE *)(dword_8A1B00 + 6921);
          if ( (TickCount & 4) == 0 || (TickCount & 8) == 0 )
          {
            dword_4CDEB4 = 0;
            return TickCount;
          }
          if ( v3 > 0 )
          {
            v3 = 0;
            dword_4CDEB4 = 0;
          }
          v9 = *(_DWORD *)(v4 + 16) / 100;
          if ( v9 <= 1 )
            v9 = 1;
          v8 = v3 - v9;
        }
        dword_4CDEB4 = v8;
        LOBYTE(TickCount) = sub_435570(3, 0);
      }
    }
  }
  return TickCount;
}
