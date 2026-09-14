// 函数 0x40c560  sub_40C560  size=0x1CF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__cdecl sub_40C560(int a1, int a2, int a3, int a4)
{
  __int16 *result; // eax
  int v5; // ecx
  int v6; // edi
  __int16 *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // [esp+0h] [ebp-10h]
  int v13; // [esp+4h] [ebp-Ch] BYREF
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+24h] [ebp+14h]

  result = (__int16 *)(dword_4CCAAC + a1 * dword_4CCA98);
  v12 = *(unsigned __int8 *)(dword_4CC8BC * result[a4 + 120] + dword_4CC8D0 + 1256);
  if ( !result[v12 + 384] )
  {
    v5 = -1;
    if ( result[384] > -1 )
    {
      v5 = result[384];
      a1 = 0;
    }
    if ( result[385] > v5 )
    {
      v5 = result[385];
      a1 = 1;
    }
    if ( result[386] > v5 )
    {
      v5 = result[386];
      a1 = 2;
    }
    if ( result[387] > v5 )
    {
      v5 = result[387];
      a1 = 3;
    }
    if ( result[388] > v5 )
    {
      v5 = result[388];
      a1 = 4;
    }
    if ( result[389] > v5 )
    {
      v5 = result[389];
      a1 = 5;
    }
    if ( result[390] > v5 )
    {
      v5 = result[390];
      a1 = 6;
    }
    if ( result[391] > v5 )
      a1 = 7;
    v6 = result[377];
    v15 = -1;
    v16 = 10000;
    if ( v6 != -1 )
    {
      do
      {
        v7 = (__int16 *)(dword_4C4378 + v6 * dword_4C4364);
        if ( *((char *)v7 + 10) == a1 )
        {
          v8 = dword_4CCAAC + dword_4CCA98 * *v7;
          sub_483850(
            *(__int16 *)(v7[4] * *(_DWORD *)(v8 + 160) + *(_DWORD *)(v8 + 180) + 2),
            *(__int16 *)(v7[4] * *(_DWORD *)(v8 + 160) + *(_DWORD *)(v8 + 180) + 4),
            &v14,
            &v13);
          v9 = abs32(v14 - a2);
          v10 = abs32(v13 - a3);
          if ( v9 < v10 )
            v9 >>= 1;
          else
            v10 >>= 1;
          v11 = v9 + v10;
          if ( v11 < v16 )
          {
            v16 = v11;
            v15 = v6;
          }
        }
        v6 = v7[3];
      }
      while ( v6 != -1 );
      result = (__int16 *)v15;
      if ( v15 != -1 )
        return (__int16 *)sub_40C4D0((__int16 *)(dword_4C4378 + v15 * dword_4C4364), v12);
    }
  }
  return result;
}
