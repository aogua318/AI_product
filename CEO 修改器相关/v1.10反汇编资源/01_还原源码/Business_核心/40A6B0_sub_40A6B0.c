// 函数 0x40a6b0  sub_40A6B0  size=0x2DD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_40A6B0()
{
  int v0; // esi
  int v1; // [esp+0h] [ebp-8h] BYREF
  int v2; // [esp+4h] [ebp-4h] BYREF

  if ( dword_8D6074 )
  {
    dword_8D6074 = 0;
    sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
  }
  if ( dword_8A8C24 )
  {
    if ( dword_4B1114 )
    {
      if ( dword_4B1114 == 6 )
      {
        dword_4CC8DC = 6;
        dword_4CCA7C = dword_4B1118;
        sub_430CA0(&v1, &v2);
        sub_418880(v1, v2);
      }
      else if ( dword_4B1114 == 7 )
      {
        dword_4CC8DC = 7;
        dword_4CCA7C = dword_4B1118;
        sub_434550(&v1, &v2);
LABEL_10:
        sub_418880(v1, v2);
      }
      dword_8A8C24 = 0;
      sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
      return;
    }
    dword_4CC8DC = 0;
    dword_4CCA7C = dword_4B1118;
    sub_426BF0(&v1, &v2);
    goto LABEL_10;
  }
  if ( dword_4C2D3C && dword_4B1010 != -1 )
  {
    if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
    {
      sub_40DD00(-1);
    }
    else if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
    {
      v0 = *(unsigned __int8 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8)
         + 1;
      if ( v0 >= *(unsigned __int8 *)(*(_DWORD *)(dword_4C2D38 + 148)
                                    + 10
                                    * *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160)
                                                 + *(_DWORD *)(dword_4C2D38 + 180))
                                    + 6) )
        v0 = 0;
      sub_484120(dword_8EED88, dword_8EED8C, &v1, &v2);
      if ( dword_4B119C == -1 )
      {
        if ( dword_4B1020 == -1 )
        {
          if ( dword_4B1104 == -1 )
          {
            if ( dword_4B32C0 == -1 )
            {
              if ( dword_4B32B8 == -1 )
              {
                if ( sub_483C00(dword_4B1010) == 1 )
                {
                  sub_483C30(dword_4B1010);
                  sub_42C450(v1, v2, 0, 1);
                }
              }
              else
              {
                sub_4307E0(dword_4B1028, v1, v2, v0);
              }
            }
            else
            {
              sub_434280(0, v1, v2, v0);
            }
          }
          else
          {
            sub_413C50(v1, v2, v0);
          }
        }
        else
        {
          sub_40C120(v1, v2, v0);
        }
      }
      else
      {
        sub_4268F0(dword_4B1028, dword_4B119C, v1, v2, v0);
      }
      if ( sub_461900() )
        sub_487220(&unk_4C42A0);
      sub_418250();
    }
  }
}
