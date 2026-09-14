// 函数 0x467760  sub_467760  size=0x32C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_467760(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // esi
  DWORD TickCount; // eax
  int v5; // ecx
  int v6; // ecx
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
  int v19; // edi
  int v20; // ecx
  CHAR *v21; // ecx
  char v22; // al
  char *v23; // eax
  int v25; // eax
  DWORD v26; // [esp+Ch] [ebp-11Ch]
  int v27; // [esp+10h] [ebp-118h]
  int v28; // [esp+10h] [ebp-118h]
  signed int v29; // [esp+14h] [ebp-114h]
  int v30; // [esp+18h] [ebp-110h]
  int v31; // [esp+1Ch] [ebp-10Ch]
  int i; // [esp+1Ch] [ebp-10Ch]
  int v33; // [esp+20h] [ebp-108h] BYREF
  CHAR FileName[256]; // [esp+24h] [ebp-104h] BYREF

  v2 = this;
  if ( a2 >= *(this + 65) )
    return 0;
  TickCount = GetTickCount();
  v5 = *(_DWORD *)(v2[68] + 4 * a2);
  if ( v5 == -1 )
  {
    v7 = *(__int16 *)(v2[69] + 2 * a2);
    v8 = -1;
    v33 = v7;
    v29 = 0;
    v31 = -1;
    do
    {
      v26 = GetTickCount();
      v9 = 0;
      v27 = v2[66] - v7;
      if ( v27 >= 0 )
      {
        do
        {
          v10 = v2[71];
          v11 = v26 - *(_DWORD *)(v10 + 36 * v9 + 24);
          v12 = v10 + 36 * v9;
          v30 = v12;
          if ( v11 > v29 )
          {
            v13 = v9 + *(__int16 *)(v12 + 32);
            if ( v13 < v9 + v33 )
            {
              do
              {
                v14 = v2[71] + 36 * v13;
                if ( (int)(v26 - *(_DWORD *)(v14 + 24)) < v29 )
                  break;
                v13 += *(__int16 *)(v14 + 32);
              }
              while ( v13 < v9 + v33 );
              v12 = v30;
            }
            if ( v13 < v9 + v33 )
            {
              v8 = v31;
            }
            else
            {
              v8 = v9;
              v29 = v11;
              v31 = v9;
            }
          }
          v9 += *(__int16 *)(v12 + 32);
        }
        while ( v9 <= v27 );
        v7 = v33;
      }
    }
    while ( v8 == -1 );
    v15 = v8;
    for ( i = v8; v15 < v8 + v7; i = v15 )
    {
      v16 = 36 * v15;
      v17 = *(_DWORD *)(36 * v15 + v2[71] + 28);
      if ( v17 != -1 )
        *(_DWORD *)(v2[68] + 4 * v17) = -1;
      v18 = *(__int16 *)(v16 + v2[71] + 32);
      v28 = v18;
      if ( v18 > 0 )
      {
        do
        {
          *(_DWORD *)(v16 + v2[71] + 28) = -1;
          *(_WORD *)(v16 + v2[71] + 32) = 1;
          v16 += 36;
          --v18;
        }
        while ( v18 );
        v18 = v28;
        v15 = i;
      }
      v15 += v18;
    }
    *(_DWORD *)(v2[68] + 4 * a2) = v8;
    v19 = 36 * v8;
    sub_4674F0((void *)(36 * v8 + v2[71]), (const char *)v2, a2, (_DWORD *)(v2[70] + v8 * v2[67]));
    v20 = v33;
    if ( *(_DWORD *)(v2[71] + v19 + 8) + *(_DWORD *)(v2[71] + v19 + 12) > v33 * v2[67] )
    {
      v21 = (CHAR *)(FileName - (CHAR *)v2);
      do
      {
        v22 = *(_BYTE *)v2;
        *((_BYTE *)v2 + (_DWORD)v21) = *(_BYTE *)v2;
        v2 = (_DWORD *)((char *)v2 + 1);
      }
      while ( v22 );
      v23 = (char *)&v33 + 3;
      while ( *++v23 )
        ;
      strcpy(v23, ".ch2");
      sub_469D90(FileName);
      MessageBoxA(0, "Already fix , please restart this program.", "Cache Index Error !!", 0);
      exit(1);
    }
    if ( v33 > 0 )
    {
      v25 = 36 * v8;
      do
      {
        *(_DWORD *)(v25 + v2[71] + 28) = a2;
        v25 += 36;
        --v20;
      }
      while ( v20 );
      LOWORD(v20) = v33;
    }
    *(_DWORD *)(v19 + v2[71] + 24) = v26;
    *(_WORD *)(v19 + v2[71] + 32) = v20;
    return v19 + v2[71];
  }
  else
  {
    v6 = 36 * v5;
    *(_DWORD *)(v6 + v2[71] + 24) = TickCount;
    return v6 + v2[71];
  }
}
