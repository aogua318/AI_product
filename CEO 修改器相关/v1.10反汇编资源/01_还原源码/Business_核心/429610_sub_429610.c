// 函数 0x429610  sub_429610  size=0x2A9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_429610()
{
  int v0; // ebx
  char *v1; // eax
  char v2; // al
  int v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // eax
  char *v8; // eax
  char *v9; // edx
  char v10; // cl
  int v11; // edi
  char *v12; // eax
  int v13; // edx
  char v14; // cl
  char *v15; // eax
  int v16; // edx
  char v17; // cl
  int v18; // esi
  _WORD *v19; // edi
  char *v20; // eax
  char *v21; // edx
  char v22; // cl
  int v23; // edi
  int v24; // edx
  int v25; // eax
  _WORD *v26; // ecx
  int v28; // [esp+10h] [ebp-424h]
  _BYTE v29[12]; // [esp+14h] [ebp-420h] BYREF
  int v30; // [esp+20h] [ebp-414h]
  char String[1024]; // [esp+24h] [ebp-410h] BYREF
  int v32; // [esp+430h] [ebp-4h]

  sub_464410(v29);
  v0 = 0;
  v32 = 0;
  v1 = (char *)sub_47C740("data\\Machine_group.csv");
  if ( sub_464420(v1) )
  {
    v2 = 0;
    v3 = 0;
    dword_4D0C98 = 0;
    if ( v30 > 0 )
    {
      do
      {
        v4 = (char *)sub_4646A0(0, v3);
        v5 = (char *)(String - v4);
        do
        {
          v6 = *v4;
          v4[(_DWORD)v5] = *v4;
          ++v4;
        }
        while ( v6 );
        if ( sub_438150(String) )
        {
          v7 = atoi(String) + 1;
          if ( v7 > dword_4D0C98 )
            dword_4D0C98 = v7;
        }
        ++v3;
      }
      while ( v3 < v30 );
      v2 = dword_4D0C98;
    }
    *(_DWORD *)dword_4D0C94 = sub_465E40(68 * v2, (int)"machine_type.cpp", 31);
    if ( v30 > 0 )
    {
      do
      {
        v8 = (char *)sub_4646A0(0, v0);
        v9 = (char *)(String - v8);
        do
        {
          v10 = *v8;
          v8[(_DWORD)v9] = *v8;
          ++v8;
        }
        while ( v10 );
        if ( sub_438150(String) )
        {
          v11 = *(_DWORD *)dword_4D0C94 + 68 * atoi(String);
          v28 = v11;
          v12 = (char *)sub_4646A0(1, v0);
          v13 = v11 - (_DWORD)v12;
          do
          {
            v14 = *v12;
            v12[v13] = *v12;
            ++v12;
          }
          while ( v14 );
          v15 = (char *)sub_4646A0(2, v0);
          v16 = v11 - (_DWORD)v15;
          do
          {
            v17 = *v15;
            v15[v16 + 12] = *v15;
            ++v15;
          }
          while ( v17 );
          v18 = 0;
          v19 = (_WORD *)(v11 + 24);
          do
          {
            v20 = (char *)sub_4646A0(v18 + 3, v0);
            v21 = (char *)(String - v20);
            do
            {
              v22 = *v20;
              v20[(_DWORD)v21] = *v20;
              ++v20;
            }
            while ( v22 );
            if ( sub_438150(String) )
              *v19 = atoi(String);
            else
              *v19 = -1;
            ++v18;
            ++v19;
          }
          while ( v18 < 20 );
          *(_WORD *)(v28 + 66) = sub_4646D0(23, v0);
        }
        ++v0;
      }
      while ( v0 < v30 );
    }
    sub_464650(v29);
    v23 = 0;
    if ( dword_4D0C98 > 0 )
    {
      v24 = 0;
      do
      {
        v25 = 0;
        v26 = (_WORD *)(v24 + *(_DWORD *)dword_4D0C94 + 24);
        do
        {
          if ( *v26 == 0xFFFF )
            break;
          ++v25;
          ++v26;
        }
        while ( v25 < 20 );
        *(_WORD *)(v24 + *(_DWORD *)dword_4D0C94 + 64) = v25;
        ++v23;
        v24 += 68;
      }
      while ( v23 < dword_4D0C98 );
    }
    v32 = -1;
    sub_464B50(v29);
    return 1;
  }
  else
  {
    v32 = -1;
    sub_464B50(v29);
    return 0;
  }
}
