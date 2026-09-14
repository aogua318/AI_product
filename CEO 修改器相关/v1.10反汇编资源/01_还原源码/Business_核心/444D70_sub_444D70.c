// 函数 0x444d70  sub_444D70  size=0x2AC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_444D70()
{
  _DWORD *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // cl
  int v14; // eax
  char v15; // cl
  int v16; // eax
  char v17; // cl
  int v18; // eax
  char v19; // cl
  char v20; // al

  if ( dword_8A8C18 )
  {
    v0 = (_DWORD *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98);
    if ( dword_4CDEA8 && GetTickCount() / 0x1F4 != dword_8A8C20 )
    {
      dword_8A8C20 = GetTickCount() / 0x1F4;
      v1 = sub_41BB10(v0);
      do
      {
        v2 = v0[113];
        if ( dword_4CDEA8 <= 0 )
        {
          if ( v2 < 100 )
            break;
          v3 = v2 - 100;
        }
        else
        {
          if ( v2 >= 9999999 )
            break;
          v3 = v2 + 100;
        }
        v0[113] = v3;
      }
      while ( sub_41BB10(v0) == v1 );
      sub_444AB0();
      sub_435570(3, 0);
    }
    if ( dword_4CDEAC && GetTickCount() / 0x1F4 != dword_8A8C20 )
    {
      dword_8A8C20 = GetTickCount() / 0x1F4;
      v4 = sub_41BB30(v0);
      do
      {
        v5 = v0[114];
        if ( dword_4CDEAC <= 0 )
        {
          if ( v5 < 100 )
            break;
          v6 = v5 - 100;
        }
        else
        {
          if ( v5 >= 9999999 )
            break;
          v6 = v5 + 100;
        }
        v0[114] = v6;
      }
      while ( sub_41BB30(v0) == v4 );
      sub_444AB0();
      sub_435570(3, 0);
    }
    v7 = dword_4CDEB0;
    if ( dword_4CDEB0 )
    {
      if ( GetTickCount() / 0x1F4 != dword_8A8C20 )
      {
        dword_8A8C20 = GetTickCount() / 0x1F4;
        v8 = sub_41BB50(v0);
        do
        {
          v9 = v0[115];
          if ( dword_4CDEB0 <= 0 )
          {
            if ( v9 < 100 )
              break;
            v10 = v9 - 100;
          }
          else
          {
            if ( v9 >= 9999999 )
              break;
            v10 = v9 + 100;
          }
          v0[115] = v10;
        }
        while ( sub_41BB50(v0) == v8 );
        sub_444AB0();
        sub_435570(3, 0);
      }
      v7 = dword_4CDEB0;
    }
    v11 = *(_BYTE *)(dword_8A8D50 + 4041);
    if ( (v11 & 4) != 0 && (v11 & 8) != 0 )
    {
      v12 = dword_4CDEA8;
      if ( dword_4CDEA8 < 0 )
        v12 = 0;
      dword_4CDEA8 = v12 + 1;
    }
    else
    {
      v13 = *(_BYTE *)(dword_8A8D50 + 3753);
      if ( (v13 & 4) != 0 && (v13 & 8) != 0 )
      {
        v14 = dword_4CDEA8;
        if ( dword_4CDEA8 > 0 )
          v14 = 0;
        dword_4CDEA8 = v14 - 1;
      }
      else
      {
        v15 = *(_BYTE *)(dword_8A8D50 + 6345);
        if ( (v15 & 4) != 0 && (v15 & 8) != 0 )
        {
          v16 = dword_4CDEAC;
          if ( dword_4CDEAC < 0 )
            v16 = 0;
          dword_4CDEAC = v16 + 1;
        }
        else
        {
          v17 = *(_BYTE *)(dword_8A8D50 + 5769);
          if ( (v17 & 4) != 0 && (v17 & 8) != 0 )
          {
            v18 = dword_4CDEAC;
            if ( dword_4CDEAC > 0 )
              v18 = 0;
            dword_4CDEAC = v18 - 1;
          }
          else
          {
            v19 = *(_BYTE *)(dword_8A8D50 + 6633);
            if ( (v19 & 4) != 0 && (v19 & 8) != 0 )
            {
              if ( v7 < 0 )
                v7 = 0;
              dword_4CDEB0 = v7 + 1;
            }
            else
            {
              v20 = *(_BYTE *)(dword_8A8D50 + 6057);
              if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
              {
                if ( v7 > 0 )
                  v7 = 0;
                dword_4CDEB0 = v7 - 1;
              }
              else
              {
                dword_4CDEAC = 0;
                dword_4CDEB0 = 0;
                dword_8A8C20 = 0;
                dword_4CDEA8 = 0;
              }
            }
          }
        }
      }
    }
  }
}
