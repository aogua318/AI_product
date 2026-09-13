char sub_409C00()
{
  char result; // al
  int v1; // eax
  int v2; // edi
  __int16 *v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  if ( dword_8BC594 )
  {
    if ( dword_49917C != -1 || sub_432BE0(dword_497590) != -1 )
    {
      sub_4804D0(dword_8D8D68, dword_8D8D6C, &v7, &v6);
      sub_4321E0(v7, v6);
      sub_45C230();
    }
    result = dword_8BC594;
    if ( dword_8BC594 )
    {
      dword_8BC594 = 0;
      return sub_478AF0(dword_4B7038, dword_4B7038);
    }
  }
  else
  {
    dword_497498 = sub_4818B0(dword_8D8D68, dword_8D8D6C, 10, 0, 0);
    if ( sub_481CE0(dword_497498) )
    {
      do
      {
        if ( sub_481CE0(dword_497498) == 1 )
        {
          v4 = sub_481D10(dword_497498);
          sub_437500(v4);
          return sub_40E9C0(-1);
        }
        if ( sub_481CE0(dword_497498) == 8 )
        {
          sub_437500(-1);
          v5 = sub_481D10(dword_497498);
          sub_40E9C0(*(__int16 *)(dword_4B2B3C * *(__int16 *)(v5 * dword_856AA4 + dword_856AB8 + 4) + dword_4B2B50 + 1620));
          return sub_45CCC0(1, v5);
        }
        if ( sub_481CE0(dword_497498) == 2 || sub_481CE0(dword_497498) == 6 )
        {
          v1 = *(_DWORD *)(dword_4AA5F4 * *(__int16 *)(sub_481D10(dword_497498) * dword_4B2B3C + dword_4B2B50 + 1620)
                         + dword_4AA608
                         + 80);
        }
        else
        {
          if ( sub_481CE0(dword_497498) != 7 )
          {
            sub_40E9C0(-1);
            sub_457610();
            return sub_457990();
          }
          v1 = *(_DWORD *)(sub_481D10(dword_497498) * dword_4AA5F4 + dword_4AA608 + 80);
        }
        dword_497498 = v1;
      }
      while ( sub_481CE0(v1) );
    }
    v2 = sub_481D10(dword_497498);
    sub_40E9C0(v2);
    sub_437500(-1);
    if ( dword_4B6DE8 )
      sub_409AE0();
    v3 = (__int16 *)(dword_4AA608 + v2 * dword_4AA5F4);
    sub_40D8B0(&v6, &v7);
    result = *((_BYTE *)v3 + 3);
    if ( result == 2 )
    {
      Sound_PlayEventWav(*v3 + 34, 0);
      result = dword_4B6DE8;
      if ( dword_4B6DE8 )
        return sub_409B40(v6, v7);
    }
    else if ( result == 3 )
    {
      result = *((_BYTE *)v3 + 7);
      switch ( result )
      {
        case 0:
          result = Sound_PlayEventWav(35, 0);
          break;
        case 1:
        case 2:
          result = Sound_PlayEventWav(36, 0);
          break;
        case 3:
        case 4:
          result = Sound_PlayEventWav(37, 0);
          break;
        case 5:
          result = Sound_PlayEventWav(38, 0);
          break;
        default:
          return result;
      }
    }
    else if ( result < 4 )
    {
      if ( *((_BYTE *)v3 + 2) == 0xFF )
      {
        if ( v3[2] == -1 )
          return Sound_PlayEventWav(64, 0);
        else
          return Sound_PlayEventWav(63, 0);
      }
    }
    else
    {
      return Sound_PlayEventWav(7, 0);
    }
  }
  return result;
}
