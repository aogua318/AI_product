// 函数 0x496c13  __tzset_nolock  size=0x313  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void _tzset_nolock()
{
  const char *v0; // eax
  const char *v1; // esi
  size_t v2; // eax
  size_t v3; // eax
  int v4; // edi
  int v5; // edi
  int v6; // edi
  LPSTR *v7; // edi
  const char *v8; // esi
  char v9; // al
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // esi
  int v14; // [esp+14h] [ebp-38h]
  unsigned int CodePage; // [esp+18h] [ebp-34h]
  BOOL UsedDefaultChar; // [esp+1Ch] [ebp-30h] BYREF
  int v17; // [esp+20h] [ebp-2Ch]
  int v18; // [esp+24h] [ebp-28h] BYREF
  int v19; // [esp+28h] [ebp-24h] BYREF
  LPSTR *v20; // [esp+2Ch] [ebp-20h]
  int v21; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v14 = 0;
  v17 = 0;
  v21 = 0;
  v19 = 0;
  v18 = 0;
  _lock(7);
  ms_exc.registration.TryLevel = 0;
  v20 = (LPSTR *)sub_497656();
  if ( sub_497617(&v21) || sub_4975BD(&v19) || sub_4975EA(&v18) )
LABEL_12:
    _invoke_watson(0, 0, 0, 0, 0);
  CodePage = ___lc_codepage_func();
  dword_8F385C = 0;
  dword_4B916C = -1;
  dword_4B9160 = -1;
  v0 = (const char *)_getenv_helper_nolock("TZ");
  v1 = v0;
  if ( !v0 || !*v0 )
  {
    if ( Destination )
    {
      free(Destination);
      Destination = 0;
    }
    if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
    {
      dword_8F385C = 1;
      v21 = 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.StandardDate.wMonth )
        v21 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias )
      {
        v19 = 1;
        v18 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
      }
      else
      {
        v19 = 0;
        v18 = 0;
      }
      if ( !WideCharToMultiByte(CodePage, 0, TimeZoneInformation.StandardName, -1, *v20, 63, 0, &UsedDefaultChar)
        || UsedDefaultChar )
      {
        **v20 = 0;
      }
      else
      {
        (*v20)[63] = 0;
      }
      if ( !WideCharToMultiByte(CodePage, 0, TimeZoneInformation.DaylightName, -1, v20[1], 63, 0, &UsedDefaultChar)
        || UsedDefaultChar )
      {
        *v20[1] = 0;
      }
      else
      {
        v20[1][63] = 0;
      }
    }
    goto LABEL_30;
  }
  if ( Destination )
  {
    if ( !strcmp(v0, Destination) )
    {
LABEL_30:
      v17 = 1;
      goto LABEL_31;
    }
    if ( Destination )
      free(Destination);
  }
  v2 = strlen(v1);
  Destination = (char *)_malloc_crt(v2 + 1);
  if ( !Destination )
    goto LABEL_30;
  v3 = strlen(v1);
  if ( strcpy_s(Destination, v3 + 1, v1) )
    goto LABEL_12;
LABEL_31:
  v4 = v21;
  *(_DWORD *)sub_497650() = v4;
  v5 = v19;
  *(_DWORD *)sub_497644() = v5;
  v6 = v18;
  *(_DWORD *)sub_49764A() = v6;
  ms_exc.registration.TryLevel = -2;
  _unlock(7);
  if ( !v17 )
  {
    v7 = v20;
    if ( strncpy_s(*v20, 0x40u, v1, 3u) )
      goto LABEL_12;
    v8 = v1 + 3;
    if ( *v8 == 45 )
    {
      v14 = 1;
      ++v8;
    }
    v21 = 3600 * atol(v8);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 != 43 && (v9 < 48 || v9 > 57) )
        break;
      ++v8;
    }
    if ( *v8 == 58 )
    {
      v10 = atol(++v8);
      v21 += 60 * v10;
      while ( *v8 >= 48 && *v8 <= 57 )
        ++v8;
      if ( *v8 == 58 )
      {
        v11 = atol(++v8);
        v21 += v11;
        while ( *v8 >= 48 && *v8 <= 57 )
          ++v8;
      }
    }
    if ( v14 )
      v21 = -v21;
    v19 = *v8;
    if ( v19 )
    {
      if ( strncpy_s(v7[1], 0x40u, v8, 3u) )
        goto LABEL_12;
    }
    else
    {
      *v7[1] = 0;
    }
    v12 = v21;
    *(_DWORD *)sub_497650() = v12;
    v13 = v19;
    *(_DWORD *)sub_497644() = v13;
  }
}
