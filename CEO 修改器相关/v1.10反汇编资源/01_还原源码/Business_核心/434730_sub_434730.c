// 函数 0x434730  sub_434730  size=0x3CB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_434730(int a1)
{
  int v1; // ebx
  __int16 *v2; // esi
  __int16 v3; // ax
  int v4; // edi
  __int16 v5; // cx
  int v6; // ebx
  int v7; // eax
  unsigned __int8 *v8; // edi
  unsigned __int8 v9; // al
  int v10; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 *v17; // eax
  int v18; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v19; // [esp+10h] [ebp-8h] BYREF
  unsigned int v20; // [esp+14h] [ebp-4h] BYREF

  v1 = a1;
  v2 = (__int16 *)(dword_870868 + a1 * dword_870854);
  v3 = v2[6];
  v4 = dword_4CCAAC + dword_4CCA98 * *v2;
  v18 = v4;
  if ( v3 == -1 )
  {
    if ( dword_4B1130 )
    {
      if ( !dword_8CAF68 && *(char *)(v4 + 224) != dword_8703A0 )
      {
        v16 = v2[4];
        if ( v16 != -1 )
        {
          v17 = (__int16 *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v4 + 2 * v16 + 240));
          if ( v17[13] - v17[16] - v17[15] > 0 && *(__int16 *)(v4 + 466) - *(__int16 *)(v4 + 470) > 0 )
          {
            sub_434550((__int16 *)(dword_870868 + a1 * dword_870854), (int)&v18, (int)&a1);
            sub_418490(*v2, v1, v18, a1);
          }
        }
      }
    }
  }
  else
  {
    v5 = v2[5];
    if ( v5 == -1 )
    {
      if ( v2[4] != -1 )
      {
        v6 = dword_4D10A8 + dword_4D1094 * v3;
        if ( *(_BYTE *)(v6 + 12) != 3 && *(_BYTE *)(v6 + 13) != 3 )
        {
          sub_42C290((__int16 *)v6, (int)&v19, (int)&v20);
          v7 = sub_420D80(*(__int16 *)(v6 + 14), v19, v20, v2[4], 0);
          a1 = v7;
          if ( v7 == -1 )
          {
            if ( dword_4B1130 )
            {
              if ( !dword_8CAF68 )
              {
                v12 = *(char *)(v4 + 224);
                if ( v12 != dword_8703A0 && (byte_4D10B9[189880 * v12] & 1) != 0 )
                {
                  sub_42BF60(v2[6]);
                  return 0;
                }
              }
            }
          }
          else
          {
            v8 = (unsigned __int8 *)(dword_4D0BAC + v7 * dword_4D0B98);
            v9 = v8[10];
            if ( v9 )
            {
              if ( v9 == 3 )
              {
                sub_40C3F0((__int16 *)(dword_4C4378 + dword_4C4364 * *((__int16 *)v8 + 6)), &v19, &v20);
              }
              else if ( v9 == 6 )
              {
                sub_483D50(*(__int16 *)(dword_8703BC * *((__int16 *)v8 + 6) + dword_8703D0 + 6), 0, -1, &v19, &v20);
              }
            }
            else
            {
              sub_426CB0((__int16 *)(dword_4D0C84 + dword_4D0C70 * *((__int16 *)v8 + 6)), (int)&v19, (int)&v20);
            }
            if ( sub_42C450((__int16 *)v6, v19, v20, 3, 1) )
            {
              *(_WORD *)(v6 + 20) = a1;
              *(_WORD *)(v6 + 22) = (char)v8[10];
              *(_WORD *)(v6 + 24) = *((_WORD *)v8 + 6);
              sub_421B20((int)v8, v2[3], v2[6]);
              v10 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v18 + 2 * *v8 + 240);
              ++*(_WORD *)(v10 + 30);
              return 0;
            }
          }
        }
      }
    }
    else if ( *((_BYTE *)v2 + 15) )
    {
      v13 = dword_4D10A8 + dword_4D1094 * v3;
      if ( *(unsigned __int8 *)(dword_4D0B98 * v5 + dword_4D0BAC) == v2[4] )
      {
        if ( *(_BYTE *)(v13 + 12) != 4 )
        {
          sub_434550((__int16 *)(dword_870868 + a1 * dword_870854), (int)&v19, (int)&v20);
          sub_42C450((__int16 *)v13, v19, v20, 4, 1);
          return 0;
        }
      }
      else if ( *(_BYTE *)(v13 + 12) != 3 && *(_BYTE *)(v13 + 13) != 3 )
      {
        sub_42C3E0(v13, 0, 1);
        sub_434520(v2, (int)&v19, (int)&v20);
        v14 = sub_40C2E0(*v2, v19, v20, *(unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v2[5]));
        if ( v14 != -1 )
        {
          if ( sub_42C450((__int16 *)v13, v19, v20, 3, 1) )
          {
            v15 = a1;
            *(_WORD *)(v13 + 20) = v2[5];
            *(_WORD *)(v13 + 24) = v15;
            *(_WORD *)(v13 + 22) = 7;
            sub_421B20(dword_4D0BAC + dword_4D0B98 * v2[5], *(__int16 *)(v14 * dword_4C4364 + dword_4C4378 + 8), v2[6]);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
