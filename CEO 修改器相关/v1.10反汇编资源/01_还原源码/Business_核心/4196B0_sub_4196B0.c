// 函数 0x4196b0  sub_4196B0  size=0x200  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4196B0()
{
  int result; // eax
  int v1; // ecx
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  signed int v10; // esi
  int v11; // [esp+0h] [ebp-14h]
  int v12; // [esp+4h] [ebp-10h]
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h] BYREF
  signed int v15; // [esp+10h] [ebp-4h] BYREF

  if ( dword_8A8C24 )
    return sub_419580();
  result = dword_4B1010;
  if ( dword_4B1010 != -1 )
  {
    v1 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    v2 = dword_4CCA8C;
    if ( (unsigned int)dword_4CCA8C < *(_DWORD *)(v1 + 24) )
    {
      v3 = dword_4CCA78;
      if ( (unsigned int)dword_4CCA78 < *(_DWORD *)(v1 + 28) )
      {
        if ( byte_8EEC81 )
        {
          v11 = dword_4CCA8C;
          result = sub_483850(
                     *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 2),
                     *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 4),
                     &v15,
                     &v14);
          if ( dword_8EED90 && dword_4B1020 != -1 )
          {
            v4 = *(unsigned __int8 *)(dword_4B1020 * *(_DWORD *)(dword_4C2D38 + 160)
                                    + *(_DWORD *)(dword_4C2D38 + 180)
                                    + 8);
            v12 = 2 * (v14 >= v3) - 1;
            v13 = 2 * (v15 >= v2) - 1;
            while ( 1 )
            {
              while ( 1 )
              {
                if ( sub_40C120(v2, v3, v4) != -1 )
                  sub_40BE20(dword_4B1028, v2, v3, v4, dword_8A1C20);
                if ( v2 == v15 )
                  break;
                v2 += v13;
              }
              if ( v3 == v14 )
                break;
              v3 += v12;
              v2 = v11;
            }
            result = sub_461900(v5);
            if ( result )
              return sub_487220(&unk_4C42A0);
          }
        }
        else if ( dword_8EED90 && dword_4B1020 != -1 && byte_8EEC80 )
        {
          v6 = dword_4CCA8C;
          sub_483850(
            *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 2),
            *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 4),
            &v15,
            &v14);
          result = v15;
          if ( v15 < v6 )
          {
            v7 = v6 ^ v15;
            v6 = v15;
            result = v15 ^ v7;
            v15 = result;
          }
          v8 = v14;
          if ( v3 <= v14 || (v9 = v3 ^ v14, v3 = v14, v8 = v14 ^ v9, v14 = v8, v3 <= v8) )
          {
            do
            {
              v10 = v6;
              if ( v6 <= result )
              {
                do
                {
                  sub_4182E0(v3, v10);
                  result = v15;
                  ++v10;
                }
                while ( v10 <= v15 );
                v8 = v14;
              }
              ++v3;
            }
            while ( v3 <= v8 );
          }
        }
      }
    }
  }
  return result;
}
