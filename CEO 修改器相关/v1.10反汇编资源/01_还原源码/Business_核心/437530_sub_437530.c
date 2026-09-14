// 函数 0x437530  sub_437530  size=0x72C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_437530(char *this, const char *a2)
{
  char v4; // al
  int v5; // esi
  int v6; // eax
  char v7; // cl
  unsigned int v8; // eax
  char *v9; // esi
  char *v10; // ecx
  int i; // esi
  char *v13; // eax
  char v14; // cl
  int v15; // esi
  int j; // esi
  char *v17; // eax
  char v18; // cl
  int v19; // esi
  int k; // esi
  char *v21; // eax
  char v22; // cl
  int v23; // esi
  int m; // esi
  char *v25; // eax
  char v26; // cl
  int v27; // esi
  int n; // esi
  char *v29; // eax
  char v30; // cl
  int v31; // esi
  int v32; // [esp+10h] [ebp-C1Ch]
  _BYTE v33[7]; // [esp+14h] [ebp-C18h] BYREF
  char v34; // [esp+1Bh] [ebp-C11h] BYREF
  char Src; // [esp+1Ch] [ebp-C10h] BYREF
  char v36[2047]; // [esp+1Dh] [ebp-C0Fh] BYREF
  char String[1024]; // [esp+81Ch] [ebp-410h] BYREF
  int v38; // [esp+C28h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v33);
  v38 = 0;
  if ( !strcmp(this + 280, a2) )
  {
    v38 = -1;
    nullsub_2(v33);
    return 1;
  }
  if ( sub_46A040(this + 24) )
  {
    *((_DWORD *)this + 2) = -1;
    *((_DWORD *)this + 3) = -1;
    *((_DWORD *)this + 4) = -1;
    *((_DWORD *)this + 5) = -1;
    *(_DWORD *)this = -1;
    *((_DWORD *)this + 1) = -1;
    *((_DWORD *)this + 1633) = 1;
    dword_89E548 = (int)v33;
    *(this + 280) = 0;
    memset(this + 344, 0, 0x400u);
    *(this + 1368) = 0;
    *((_DWORD *)this + 598) = 0;
    *(this + 3424) = 0;
    *((_DWORD *)this + 1112) = 0;
    *(this + 2396) = 0;
    *((_DWORD *)this + 855) = 0;
    *(this + 4452) = 0;
    *((_DWORD *)this + 1369) = 0;
    *(this + 5480) = 0;
    *((_DWORD *)this + 1626) = 0;
    v32 = 0;
    if ( sub_46A450(String) )
    {
      while ( 1 )
      {
        if ( !strcmp(String, "taskname:") )
        {
          sub_46A450(String);
          if ( !strcmp(String, a2) )
            break;
        }
        if ( !sub_46A450(String) )
          goto LABEL_63;
      }
      v32 = 1;
      strcpy(this + 280, a2);
      Offset = sub_46A2C0(v33);
      if ( sub_437310("hintpos:") )
      {
        sub_46A450(String);
        *((_DWORD *)this + 2) = atoi(String);
        sub_46A450(String);
        *((_DWORD *)this + 3) = atoi(String);
      }
      if ( sub_437310("maphintpos:") )
      {
        sub_46A450(String);
        *((_DWORD *)this + 4) = atoi(String);
        sub_46A450(String);
        *((_DWORD *)this + 5) = atoi(String);
      }
      if ( sub_437310("infopos:") )
      {
        sub_46A450(String);
        *(_DWORD *)this = atoi(String);
        sub_46A450(String);
        *((_DWORD *)this + 1) = atoi(String);
      }
      Src = 0;
      if ( sub_437310("hinttxt:") )
      {
        while ( 1 )
        {
          sub_46A390(String, 1024);
          v4 = String[0];
          v5 = 0;
          if ( !String[0] )
            break;
          while ( v4 != 34 )
          {
            v4 = String[++v5];
            if ( !v4 )
              goto LABEL_20;
          }
          v6 = v5 + 1;
          if ( v5 == -1 )
            break;
          for ( ; String[v6]; ++v6 )
          {
            v7 = String[v6];
            if ( v7 >= 0 )
            {
              if ( v7 == 34 )
              {
                String[v6] = 13;
                String[v6 + 1] = 10;
                String[v6 + 2] = 0;
                break;
              }
            }
            else
            {
              ++v6;
            }
          }
          v8 = strlen(&String[v5 + 1]) + 1;
          v9 = &String[v5 + 1];
          v10 = &v34;
          while ( *++v10 )
            ;
          qmemcpy(v10, v9, v8);
        }
LABEL_20:
        memcpy(this + 344, &Src, strlen(v36));
      }
      if ( sub_437310("win_req:") )
      {
        for ( i = 0; sub_437400((int)String); i = v15 + 1 )
        {
          v13 = String;
          do
          {
            v14 = *v13;
            v13[this + 1368 - String + i] = *v13;
            ++v13;
          }
          while ( v14 );
          v15 = strlen(String) + i;
          *(this + v15 + 1368) = 0;
          ++*((_DWORD *)this + 598);
        }
      }
      if ( sub_437310("win_do:") )
      {
        for ( j = 0; sub_437400((int)String); j = v19 + 1 )
        {
          v17 = String;
          do
          {
            v18 = *v17;
            v17[this + 2396 - String + j] = *v17;
            ++v17;
          }
          while ( v18 );
          v19 = strlen(String) + j;
          *(this + v19 + 2396) = 0;
          ++*((_DWORD *)this + 855);
        }
      }
      if ( sub_437310("lose_req:") )
      {
        for ( k = 0; sub_437400((int)String); k = v23 + 1 )
        {
          v21 = String;
          do
          {
            v22 = *v21;
            v21[this + 3424 - String + k] = *v21;
            ++v21;
          }
          while ( v22 );
          v23 = strlen(String) + k;
          *(this + v23 + 3424) = 0;
          ++*((_DWORD *)this + 1112);
        }
      }
      if ( sub_437310("lose_do:") )
      {
        for ( m = 0; sub_437400((int)String); m = v27 + 1 )
        {
          v25 = String;
          do
          {
            v26 = *v25;
            v25[this + 4452 - String + m] = *v25;
            ++v25;
          }
          while ( v26 );
          v27 = strlen(String) + m;
          *(this + v27 + 4452) = 0;
          ++*((_DWORD *)this + 1369);
        }
      }
      if ( sub_437310("event:") )
      {
        for ( n = 0; sub_437400((int)String); n = v31 + 1 )
        {
          v29 = String;
          do
          {
            v30 = *v29;
            v29[this + 5480 - String + n] = *v29;
            ++v29;
          }
          while ( v30 );
          v31 = strlen(String) + n;
          *(this + v31 + 5480) = 0;
          ++*((_DWORD *)this + 1626);
        }
      }
      if ( *((int *)this + 598) > 0 && !*((_DWORD *)this + 855) )
        v32 = 0;
      if ( *((int *)this + 1112) > 0 && !*((_DWORD *)this + 1369) )
        v32 = 0;
    }
LABEL_63:
    sub_46A1F0(v33);
  }
  v38 = -1;
  nullsub_2(v33);
  return v32 != 0;
}
