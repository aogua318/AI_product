int sub_40A180()
{
  int result; // eax
  int v1; // esi
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( dword_8BC594 )
  {
    dword_8BC594 = 0;
    sub_478AF0(dword_4B7038, dword_4B7038);
  }
  if ( dword_88EFDC )
  {
    if ( dword_49798C )
    {
      if ( dword_49798C == 6 )
      {
        dword_4B2D14 = 6;
        dword_4B2B58 = dword_497990;
        sub_42FE10(&v3, &v2);
        sub_4191D0(v3, v2);
      }
      else if ( dword_49798C == 7 )
      {
        dword_4B2D14 = 7;
        dword_4B2B58 = dword_497990;
        sub_433760(&v3, &v2);
LABEL_10:
        sub_4191D0(v3, v2);
      }
      dword_88EFDC = 0;
      return sub_478AF0(dword_4B7038, dword_4B7038);
    }
    dword_4B2D14 = 0;
    dword_4B2B58 = dword_497990;
    sub_4265B0(&v3, &v2);
    goto LABEL_10;
  }
  result = dword_4AA58C;
  if ( dword_4AA58C )
  {
    result = dword_497498;
    if ( dword_497498 != -1 )
    {
      if ( (int *)dword_4AA588 == dword_4B71E0 )
      {
        return sub_40E9C0(-1);
      }
      else if ( *(char *)(dword_497590 * dword_4B2B3C + dword_4B2B50 + 224) == dword_856610 )
      {
        v1 = *(unsigned __int8 *)(dword_497498 * *(_DWORD *)(dword_4AA588 + 160) + *(_DWORD *)(dword_4AA588 + 180) + 8)
           + 1;
        if ( v1 >= *(unsigned __int8 *)(*(_DWORD *)(dword_4AA588 + 148)
                                      + 10
                                      * *(__int16 *)(dword_497498 * *(_DWORD *)(dword_4AA588 + 160)
                                                   + *(_DWORD *)(dword_4AA588 + 180))
                                      + 6) )
          v1 = 0;
        sub_4804D0(dword_8D8D68, dword_8D8D6C, &v3, &v2);
        if ( dword_497D58 == -1 )
        {
          if ( dword_497588 == -1 )
          {
            if ( dword_49797C == -1 )
            {
              if ( dword_497F50 == -1 )
              {
                if ( dword_497EFC == -1 )
                {
                  if ( sub_481CE0(dword_497498) == 1 )
                  {
                    sub_481D10(dword_497498);
                    sub_42B210(v3, v2, 0, 1);
                  }
                }
                else
                {
                  sub_42F790(dword_497590, v3, v2, v1);
                }
              }
              else
              {
                sub_433060(0, v3, v2, v1);
              }
            }
            else
            {
              sub_413840(v3, v2, v1);
            }
          }
          else
          {
            sub_40BDF0(v3, v2, v1);
          }
        }
        else
        {
          sub_426210(dword_497590, dword_497D58, v3, v2, v1);
        }
        if ( sub_45DB10() )
          sub_483AB0(dword_4AA398);
        return sub_418BA0();
      }
    }
  }
  return result;
}
