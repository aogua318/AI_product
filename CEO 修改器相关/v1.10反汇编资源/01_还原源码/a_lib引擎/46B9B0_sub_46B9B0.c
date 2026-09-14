// 函数 0x46b9b0  sub_46B9B0  size=0x361  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46B9B0(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // esi
  DWORD TickCount; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  signed int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  CHAR *v20; // ecx
  char v21; // al
  char *v22; // eax
  int v24; // eax
  DWORD v25; // [esp+14h] [ebp-128h]
  int v26; // [esp+18h] [ebp-124h]
  int v27; // [esp+18h] [ebp-124h]
  signed int v28; // [esp+1Ch] [ebp-120h]
  int v29; // [esp+20h] [ebp-11Ch]
  int v30; // [esp+24h] [ebp-118h]
  int i; // [esp+24h] [ebp-118h]
  int v32; // [esp+28h] [ebp-114h] BYREF
  CHAR FileName[256]; // [esp+2Ch] [ebp-110h] BYREF
  int v34; // [esp+138h] [ebp-4h]

  v2 = this;
  if ( a2 >= *(this + 65) )
    return 0;
  if ( (dword_8DBCCC & 1) == 0 )
  {
    dword_8DBCCC |= 1u;
    sub_464A40(dword_8DBCC4);
    atexit(sub_4A1030);
    v34 = -1;
  }
  sub_464A60(dword_8DBCC4, ".", 0xFFFFFFFF, 0, 0);
  TickCount = GetTickCount();
  v5 = *(_DWORD *)(v2[68] + 4 * a2);
  if ( v5 == -1 )
  {
    v7 = *(__int16 *)(v2[69] + 2 * a2);
    v8 = -1;
    v32 = v7;
    v28 = 0;
    v30 = -1;
    do
    {
      v25 = GetTickCount();
      v9 = 0;
      v26 = v2[66] - v7;
      if ( v26 >= 0 )
      {
        do
        {
          v10 = v2[71];
          v11 = v25 - *(_DWORD *)(v10 + 36 * v9 + 24);
          v12 = v10 + 36 * v9;
          v29 = v12;
          if ( v11 > v28 )
          {
            v13 = v9 + *(__int16 *)(v12 + 32);
            if ( v13 < v9 + v32 )
            {
              do
              {
                v14 = v2[71] + 36 * v13;
                if ( (int)(v25 - *(_DWORD *)(v14 + 24)) < v28 )
                  break;
                v13 += *(__int16 *)(v14 + 32);
              }
              while ( v13 < v9 + v32 );
              v12 = v29;
            }
            if ( v13 < v9 + v32 )
            {
              v8 = v30;
            }
            else
            {
              v8 = v9;
              v28 = v11;
              v30 = v9;
            }
          }
          v9 += *(__int16 *)(v12 + 32);
        }
        while ( v9 <= v26 );
        v7 = v32;
      }
    }
    while ( v8 == -1 );
    v15 = v8;
    for ( i = v8; v15 < v8 + v7; i = v15 )
    {
      v16 = 36 * v15;
      v17 = *(_DWORD *)(v2[71] + 36 * v15 + 28);
      if ( v17 != -1 )
        *(_DWORD *)(v2[68] + 4 * v17) = -1;
      v18 = *(__int16 *)(v2[71] + v16 + 32);
      v27 = v18;
      if ( v18 > 0 )
      {
        do
        {
          *(_DWORD *)(v2[71] + v16 + 28) = -1;
          *(_WORD *)(v2[71] + v16 + 32) = 1;
          v16 += 36;
          --v18;
        }
        while ( v18 );
        v18 = v27;
        v15 = i;
      }
      v15 += v18;
    }
    *(_DWORD *)(v2[68] + 4 * a2) = v8;
    v6 = 36 * v8;
    sub_46B010((char *)(36 * v8 + v2[71]), (const char *)v2, a2, v2[70] + v8 * v2[67]);
    v19 = v32;
    if ( *(_DWORD *)(v2[71] + 36 * v8 + 14) > v32 * v2[67] )
    {
      v20 = (CHAR *)(FileName - (CHAR *)v2);
      do
      {
        v21 = *(_BYTE *)v2;
        *((_BYTE *)v2 + (_DWORD)v20) = *(_BYTE *)v2;
        v2 = (_DWORD *)((char *)v2 + 1);
      }
      while ( v21 );
      v22 = (char *)&v32 + 3;
      while ( *++v22 )
        ;
      strcpy(v22, ".ch1");
      sub_469D90(FileName);
      MessageBoxA(0, "Already fix , please restart this program.", "Cache Index Error !!", 0);
      exit(1);
    }
    if ( v32 > 0 )
    {
      v24 = 36 * v8;
      do
      {
        *(_DWORD *)(v2[71] + v24 + 28) = a2;
        v24 += 36;
        --v19;
      }
      while ( v19 );
      LOWORD(v19) = v32;
    }
    *(_DWORD *)(v2[71] + v6 + 24) = v25;
    *(_WORD *)(v2[71] + v6 + 32) = v19;
  }
  else
  {
    v6 = 36 * v5;
    *(_DWORD *)(v2[71] + 36 * v5 + 24) = TickCount;
  }
  sub_464B40(dword_8DBCC4);
  return v6 + v2[71];
}
