// 函数 0x49711d  __isindst_nolock  size=0x1D6  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall _isindst_nolock@<eax>(_DWORD *a1@<edi>)
{
  int result; // eax
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v10 = 0;
  result = sub_4975BD(&v10);
  if ( result )
    _invoke_watson(0, 0, 0, 0, 0);
  if ( v10 )
  {
    v2 = a1[5];
    if ( v2 != dword_4B9160 || v2 != dword_4B916C )
    {
      if ( dword_8F385C )
      {
        if ( TimeZoneInformation.DaylightDate.wYear )
          cvtdate(
            TimeZoneInformation.DaylightDate.wMonth,
            TimeZoneInformation.DaylightDate.wHour,
            1,
            0,
            v2,
            0,
            0,
            TimeZoneInformation.DaylightDate.wDay,
            TimeZoneInformation.DaylightDate.wMinute,
            TimeZoneInformation.DaylightDate.wSecond,
            TimeZoneInformation.DaylightDate.wMilliseconds);
        else
          cvtdate(
            TimeZoneInformation.DaylightDate.wMonth,
            TimeZoneInformation.DaylightDate.wHour,
            1,
            1,
            v2,
            TimeZoneInformation.DaylightDate.wDay,
            TimeZoneInformation.DaylightDate.wDayOfWeek,
            0,
            TimeZoneInformation.DaylightDate.wMinute,
            TimeZoneInformation.DaylightDate.wSecond,
            TimeZoneInformation.DaylightDate.wMilliseconds);
        if ( TimeZoneInformation.StandardDate.wYear )
          cvtdate(
            TimeZoneInformation.StandardDate.wMonth,
            TimeZoneInformation.StandardDate.wHour,
            0,
            0,
            a1[5],
            0,
            0,
            TimeZoneInformation.StandardDate.wDay,
            TimeZoneInformation.StandardDate.wMinute,
            TimeZoneInformation.StandardDate.wSecond,
            TimeZoneInformation.StandardDate.wMilliseconds);
        else
          cvtdate(
            TimeZoneInformation.StandardDate.wMonth,
            TimeZoneInformation.StandardDate.wHour,
            0,
            1,
            a1[5],
            TimeZoneInformation.StandardDate.wDay,
            TimeZoneInformation.StandardDate.wDayOfWeek,
            0,
            TimeZoneInformation.StandardDate.wMinute,
            TimeZoneInformation.StandardDate.wSecond,
            TimeZoneInformation.StandardDate.wMilliseconds);
      }
      else
      {
        v3 = 3;
        v4 = 2;
        v8 = 11;
        v9 = 1;
        if ( v2 < 107 )
        {
          v3 = 4;
          v4 = 1;
          v8 = 10;
          v9 = 5;
        }
        cvtdate(v3, 2, 1, 1, v2, v4, 0, 0, 0, 0, 0);
        cvtdate(v8, 2, 0, 1, a1[5], v9, 0, 0, 0, 0, 0);
      }
    }
    v5 = a1[7];
    if ( dword_4B9164 >= dword_4B9170 )
    {
      if ( v5 < dword_4B9170 || v5 > dword_4B9164 )
        return 1;
      if ( v5 <= dword_4B9170 || v5 >= dword_4B9164 )
        goto LABEL_28;
    }
    else if ( v5 >= dword_4B9164 && v5 <= dword_4B9170 )
    {
      if ( v5 > dword_4B9164 && v5 < dword_4B9170 )
        return 1;
LABEL_28:
      v6 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2]));
      if ( v5 == dword_4B9164 )
        return v6 >= dword_4B9168;
      else
        return v6 < dword_4B9174;
    }
    return 0;
  }
  return result;
}
