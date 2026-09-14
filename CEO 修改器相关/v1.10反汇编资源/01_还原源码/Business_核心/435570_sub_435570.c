// 函数 0x435570  sub_435570  size=0x24F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_435570(int a1, int a2)
{
  const char *v2; // eax
  const CHAR *v3; // eax
  char *v4; // eax
  char *v5; // eax
  int v6; // esi
  void *v7; // edi
  char *v8; // eax
  const CHAR *v9; // eax
  DWORD TickCount; // eax
  int v11; // ecx
  int v12; // edx
  char v14[8]; // [esp+Ch] [ebp-118h] BYREF
  char Buffer[256]; // [esp+14h] [ebp-110h] BYREF
  int v16; // [esp+120h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v14);
  v16 = 0;
  if ( dword_870A0C && dword_4B32C8 )
  {
    v2 = (const char *)sub_464140(a1, 3, 1);
    sprintf(Buffer, "sound\\e%s.wav", v2);
    v3 = (const CHAR *)sub_47C740(Buffer);
    if ( !sub_469DB0(v3) )
    {
      v4 = (char *)sub_47C740(Buffer);
      if ( sub_46A540(v4) )
      {
        v5 = (char *)sub_47C740(Buffer);
        if ( sub_46A040(v5) )
        {
          v6 = sub_46A270(v14);
          v7 = (void *)sub_465E40(v6, (int)"sounds.cpp", 83);
          sub_46A2E0(0);
          sub_46A320(v7, v6);
          sub_46A1F0(v14);
          v8 = (char *)sub_47C740(Buffer);
          if ( sub_469F90(v8) )
          {
            sub_46A360(v7, v6);
            sub_46A1F0(v14);
          }
          sub_465FE0((char)v7, (int)"sounds.cpp", 94);
        }
      }
    }
    v9 = (const CHAR *)sub_47C740(Buffer);
    if ( sub_469DB0(v9) )
    {
      TickCount = GetTickCount();
      v11 = -1;
      v12 = -1;
      if ( (int)(TickCount - dword_8709F8[0]) > -1 )
      {
        v11 = TickCount - dword_8709F8[0];
        v12 = 0;
      }
      if ( (int)(TickCount - dword_8709FC) > v11 )
      {
        v11 = TickCount - dword_8709FC;
        v12 = 1;
      }
      if ( (int)(TickCount - dword_870A00) > v11 )
      {
        v11 = TickCount - dword_870A00;
        v12 = 2;
      }
      if ( (int)(TickCount - dword_870A04) > v11 )
      {
        v11 = TickCount - dword_870A04;
        v12 = 3;
      }
      if ( (int)(TickCount - dword_870A08) > v11 )
        v12 = 4;
      dword_8709F8[v12] = TickCount;
      sub_46C550((char *)&unk_89D1DC + 8 * v12);
      sub_46C250(Buffer, 0);
      sub_46C5D0(dword_4B32C8);
      sub_46C580(1, a2);
    }
  }
  v16 = -1;
  return nullsub_2(v14);
}
