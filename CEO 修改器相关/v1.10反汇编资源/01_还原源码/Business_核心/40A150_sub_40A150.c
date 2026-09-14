// 函数 0x40a150  sub_40A150  size=0x395  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_40A150()
{
  int v0; // eax
  int v1; // eax
  int v2; // edi
  __int16 *v3; // esi
  int v4; // eax
  int v5; // esi
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( dword_8D6074 )
  {
    if ( dword_4B38B8 != -1 || (v0 = sub_433CD0(dword_4B1028), v0 != -1) )
    {
      sub_484120(dword_8EED88, dword_8EED8C, &v7, &v8);
      sub_433DE0(v7, v8);
      LOBYTE(v0) = sub_460070();
    }
    if ( dword_8D6074 )
    {
      dword_8D6074 = 0;
      LOBYTE(v0) = sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
    }
  }
  else
  {
    dword_4B1010 = sub_4850F0(dword_8EED88, dword_8EED8C, 10, 0, 0);
    if ( sub_483C00(dword_4B1010) )
    {
      do
      {
        if ( sub_483C00(dword_4B1010) == 1 )
        {
          v4 = sub_483C30(dword_4B1010);
          sub_4386F0(v4);
          LOBYTE(v0) = sub_40DD00(-1);
          return v0;
        }
        if ( sub_483C00(dword_4B1010) == 8 )
        {
          sub_4386F0(-1);
          v5 = sub_483C30(dword_4B1010);
          sub_40DD00(*(__int16 *)(dword_4CCA98 * *(__int16 *)(v5 * dword_87082C + dword_870840 + 4) + dword_4CCAAC + 1620));
          LOBYTE(v0) = sub_45FF20(1, v5);
          return v0;
        }
        if ( sub_483C00(dword_4B1010) == 2 || sub_483C00(dword_4B1010) == 6 )
        {
          v1 = *(_DWORD *)(dword_4C43C8 * *(__int16 *)(sub_483C30(dword_4B1010) * dword_4CCA98 + dword_4CCAAC + 1620)
                         + dword_4C43DC
                         + 80);
        }
        else
        {
          if ( sub_483C00(dword_4B1010) != 7 )
          {
            sub_40DD00(-1);
            sub_45ADA0();
            LOBYTE(v0) = sub_45B0F0();
            return v0;
          }
          v1 = *(_DWORD *)(sub_483C30(dword_4B1010) * dword_4C43C8 + dword_4C43DC + 80);
        }
        dword_4B1010 = v1;
      }
      while ( sub_483C00(v1) );
    }
    v2 = sub_483C30(dword_4B1010);
    sub_40DD00(v2);
    sub_4386F0(-1);
    if ( dword_4D0B6C )
      sub_40A050();
    v3 = (__int16 *)(dword_4C43DC + v2 * dword_4C43C8);
    sub_40D7C0(&v8, &v7);
    LOBYTE(v0) = *((_BYTE *)v3 + 3);
    if ( (_BYTE)v0 == 2 )
    {
      LOBYTE(v0) = sub_435570(*v3 + 34, 0);
      if ( dword_4D0B6C )
        LOBYTE(v0) = sub_40A0B0(v8, v7);
    }
    else if ( (_BYTE)v0 == 3 )
    {
      LOBYTE(v0) = *((_BYTE *)v3 + 7);
      switch ( (char)v0 )
      {
        case 0:
          LOBYTE(v0) = sub_435570(35, 0);
          break;
        case 1:
        case 2:
          LOBYTE(v0) = sub_435570(36, 0);
          break;
        case 3:
        case 4:
          LOBYTE(v0) = sub_435570(37, 0);
          break;
        case 5:
          LOBYTE(v0) = sub_435570(38, 0);
          break;
        default:
          return v0;
      }
    }
    else if ( (char)v0 < 4 )
    {
      if ( *((_BYTE *)v3 + 2) == 0xFF )
      {
        if ( v3[2] == -1 )
          LOBYTE(v0) = sub_435570(64, 0);
        else
          LOBYTE(v0) = sub_435570(63, 0);
      }
    }
    else
    {
      LOBYTE(v0) = sub_435570(7, 0);
    }
  }
  return v0;
}
