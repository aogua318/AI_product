// 函数 0x497384  __gmtime64_s  size=0x239  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t __cdecl _gmtime64_s(struct tm *Tm, const __time64_t *Time)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // et0
  int v10; // et0
  unsigned int v11; // edi
  unsigned int v12; // et0
  int *v13; // edx
  int tm_yday; // eax
  int i; // ecx
  int v16; // ecx
  signed __int64 v17; // kr30_8
  int v18; // [esp+8h] [ebp-Ch]
  unsigned int v19; // [esp+8h] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-8h]
  int v21; // [esp+10h] [ebp-4h]
  int Tma; // [esp+1Ch] [ebp+8h]

  v21 = 0;
  if ( !Tm || (memset(Tm, 255, sizeof(struct tm)), !Time) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  v4 = *(_DWORD *)Time;
  v5 = *((_DWORD *)Time + 1);
  if ( *Time < -43200 || __SPAIR64__(v5, v4) > 0x7934126CFLL )
  {
    *_errno() = 22;
    return 22;
  }
  v6 = __SPAIR64__(v5, v4) / 31536000;
  v20 = v6 + 69;
  Tma = v6 + 70;
  v7 = 86400 * (-365 * v6 - (((int)v6 + 369) / 400 - ((int)v6 + 69) / 100 + ((int)v6 + 69) / 4 - 17)) + *(_DWORD *)Time;
  v18 = (unsigned __int64)(86400
                         * (-365LL * (int)v6 - (((int)v6 + 369) / 400 - ((int)v6 + 69) / 100 + ((int)v6 + 69) / 4 - 17))
                         + *Time) >> 32;
  if ( v18 >= 0 )
  {
    if ( (Tma % 4 || !(Tma % 100)) && ((int)v6 + 1970) % 400 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v8 = v6 + 69;
  v9 = (__PAIR64__(v18, v7) + 31536000) >> 32;
  v7 += 31536000;
  v18 = v9;
  Tma = v20;
  if ( !(v20 % 4) )
  {
    if ( v20 % 100 )
    {
LABEL_13:
      v10 = (__PAIR64__(v18, v7) + 86400) >> 32;
      v7 += 86400;
      v18 = v10;
LABEL_17:
      v21 = 1;
      goto LABEL_18;
    }
    v8 = v20;
  }
  if ( !((v8 + 1900) % 400) )
    goto LABEL_13;
LABEL_18:
  Tm->tm_year = Tma;
  Tm->tm_yday = __SPAIR64__(v18, v7) / 86400;
  v12 = (-86400LL * (int)(__SPAIR64__(v18, v7) / 86400) + __PAIR64__(v18, v7)) >> 32;
  v11 = __SPAIR64__(v18, v7) % 86400;
  v19 = v12;
  v13 = &dword_4B95B0;
  if ( !v21 )
    v13 = &dword_4B95E4;
  tm_yday = Tm->tm_yday;
  for ( i = 1; v13[i] < tm_yday; ++i )
    ;
  v16 = i - 1;
  Tm->tm_mon = v16;
  Tm->tm_mday = tm_yday - v13[v16];
  Tm->tm_wday = (int)(*Time / 86400 + 4) % 7;
  Tm->tm_hour = __SPAIR64__(v19, v11) / 3600;
  v17 = -3600LL * (int)(__SPAIR64__(v19, v11) / 3600) + __PAIR64__(v19, v11);
  Tm->tm_min = v17 / 60;
  Tm->tm_sec = v17 % 60;
  Tm->tm_isdst = 0;
  return 0;
}
