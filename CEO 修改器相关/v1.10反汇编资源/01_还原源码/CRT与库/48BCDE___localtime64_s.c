// 函数 0x48bcde  __localtime64_s  size=0x288  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t __cdecl _localtime64_s(struct tm *Tm, const __time64_t *Time)
{
  errno_t result; // eax
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // kr00_8
  __int64 v7; // kr10_8
  __int64 v8; // kr20_8
  __int64 v9; // rax
  int v10; // ecx
  int v11; // edx
  __time64_t v12; // [esp+8h] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h] BYREF
  int v15; // [esp+18h] [ebp-4h] BYREF

  v14 = 0;
  v13 = 0;
  v15 = 0;
  if ( !Tm )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  memset(Tm, 255, sizeof(struct tm));
  if ( !Time )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  v3 = *((_DWORD *)Time + 1);
  v4 = *(_DWORD *)Time;
  if ( v3 < 0 || __SPAIR64__(v3, v4) > 0x793406FFFLL )
  {
    *_errno() = 22;
    return 22;
  }
  __tzset(v4);
  if ( sub_4975BD(&v14) || sub_4975EA(&v13) || sub_497617(&v15) )
    _invoke_watson(0, 0, 0, 0, 0);
  if ( *Time <= 259200 )
  {
    result = _gmtime64_s(Tm, Time);
    if ( !result )
    {
      if ( v14 && _isindst(Tm) )
      {
        v5 = v13 + v15;
        Tm->tm_isdst = 1;
        v6 = Tm->tm_sec - (__int64)v5;
      }
      else
      {
        v6 = Tm->tm_sec - (__int64)v15;
      }
      Tm->tm_sec = v6 % 60;
      if ( v6 % 60 < 0 )
      {
        Tm->tm_sec = v6 % 60 + 60;
        v6 = __PAIR64__((unsigned int)__CFADD__((_DWORD)v6, -60) + HIDWORD(v6) - 1, (int)v6 - 60);
      }
      v7 = Tm->tm_min + v6 / 60;
      Tm->tm_min = v7 % 60;
      if ( v7 % 60 < 0 )
      {
        Tm->tm_min = v7 % 60 + 60;
        v7 -= 60;
      }
      v8 = Tm->tm_hour + v7 / 60;
      Tm->tm_hour = v8 % 24;
      if ( v8 % 24 < 0 )
      {
        Tm->tm_hour = v8 % 24 + 24;
        v8 -= 24;
      }
      v9 = v8 / 24;
      v10 = v8 / 24;
      if ( (((unsigned __int64)(v8 / 24) >> 32) & 0x80000000) != 0LL )
      {
        HIDWORD(v9) = ((int)v9 + Tm->tm_wday + 7) % 7;
        Tm->tm_mday += v9;
        LODWORD(v9) = Tm->tm_mday;
        Tm->tm_wday = HIDWORD(v9);
        if ( (int)v9 <= 0 )
        {
          Tm->tm_yday += v10 + 365;
          --Tm->tm_year;
          Tm->tm_mday = v9 + 31;
          Tm->tm_mon = 11;
          return 0;
        }
      }
      else
      {
        if ( v9 <= 0 )
          return 0;
        v11 = (v10 + Tm->tm_wday) % 7;
        Tm->tm_mday += v10;
        Tm->tm_wday = v11;
      }
      Tm->tm_yday += v10;
      return 0;
    }
  }
  else
  {
    v12 = *Time - v15;
    result = _gmtime64_s(Tm, &v12);
    if ( !result )
    {
      if ( !v14 || !_isindst(Tm) )
        return 0;
      v12 -= v13;
      result = _gmtime64_s(Tm, &v12);
      if ( !result )
      {
        Tm->tm_isdst = 1;
        return 0;
      }
    }
  }
  return result;
}
