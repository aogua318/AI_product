// 函数 0x423750  sub_423750  size=0x2CD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_423750(const char *a1, int a2)
{
  char *v2; // eax
  int v3; // edx
  char v4; // cl
  unsigned int v5; // eax
  char *v6; // edi
  char *v8; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [esp+8h] [ebp-110h] BYREF
  unsigned int j; // [esp+Ch] [ebp-10Ch]
  unsigned int i; // [esp+10h] [ebp-108h] BYREF
  int v29[64]; // [esp+14h] [ebp-104h] BYREF

  v2 = (char *)sub_47C740("maps\\");
  v3 = (char *)v29 - v2;
  do
  {
    v4 = *v2;
    v2[v3] = *v2;
    ++v2;
  }
  while ( v4 );
  v5 = strlen(a1) + 1;
  v6 = (char *)&i + 3;
  while ( *++v6 )
    ;
  qmemcpy(v6, a1, v5);
  v8 = (char *)&i + 3;
  while ( *++v8 )
    ;
  strcpy(v8, "c.tga");
  if ( sub_469910((int)v29, 0) )
  {
    if ( a2 )
    {
      v10 = 0;
      for ( i = 0; (int)v10 < dword_4D0E84; i = v10 )
      {
        sub_40B240();
        v11 = 0;
        for ( j = 0; (int)v11 < dword_4D0E80; j = v11 )
        {
          v12 = sub_42B3B0(v11, v10);
          if ( v11 < dword_4D0BF8 )
          {
            if ( v10 < dword_4D0BFC )
            {
              v26 = 0;
              if ( dword_4D0C04 / 8 > 0 )
                memcpy(
                  &v26,
                  (const void *)(*(_DWORD *)(dword_4D0C20 + 4 * v10) + v11 * (dword_4D0C04 / 8)),
                  dword_4D0C04 / 8);
              v13 = v26;
            }
            else
            {
              v13 = -1;
            }
          }
          else
          {
            v13 = -1;
          }
          if ( v12 == dword_870918 && v13 )
          {
            v14 = v13 + 3;
            v15 = sub_4646D0(v13 + 3, 26);
            v17 = sub_4640D0(v16) % v15;
            if ( v17 <= v15 - sub_4646D0(v14, 25) )
            {
              v22 = 0;
              v26 = 0;
              while ( 1 )
              {
                v23 = sub_4646D0(v14, v22 + 2);
                if ( v23 > 0 )
                {
                  if ( v17 > v26 && v17 <= v23 + v26 )
                  {
                    if ( sub_4640D0(v26) % 100 >= 95 )
                    {
                      v25 = sub_4640D0(100) % 4;
                      sub_410230(v22 + 66, j, i, v25, 0);
                    }
                    else
                    {
                      v24 = sub_4640D0(100) % 4;
                      sub_410230(v22 + 66, j, i, v24, 1);
                    }
                    goto LABEL_37;
                  }
                  v26 += v23;
                }
                if ( ++v22 >= 23 )
                  goto LABEL_37;
              }
            }
            v19 = sub_4640D0(v18);
            if ( v19 % 7 >= 4 )
              v20 = (v19 % 7 >= 6) + 1;
            else
              v20 = 0;
            v21 = sub_4640D0(7) % 4;
            if ( sub_410230(v20, j, i, v21, 0) != -1 )
              ++dword_4CDB50;
          }
LABEL_37:
          v10 = i;
          v11 = j + 1;
        }
        ++v10;
      }
    }
  }
}
