// 函数 0x403730  sub_403730  size=0x299  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__cdecl sub_403730(int a1)
{
  __int16 *result; // eax
  char *v2; // esi
  __int16 v3; // dx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // edx
  int i; // ecx
  int v15; // eax
  char v16; // cl
  __int16 *v17; // [esp+8h] [ebp+8h]

  v17 = (__int16 *)(dword_4CCAAC + a1 * dword_4CCA98);
  result = v17;
  if ( v17[374] > 0 )
  {
    for ( result = (__int16 *)v17[119]; result != (__int16 *)-1; result = (__int16 *)*((__int16 *)v2 + 3) )
    {
      v2 = (char *)(dword_4CC8D0 + (_DWORD)result * dword_4CC8BC);
      if ( sub_415AC0(v2) )
      {
        v3 = *((_WORD *)v2 + 13);
        v4 = *((_DWORD *)v2 + 323) + *((_DWORD *)v2 + 324) + *((_DWORD *)v2 + 325);
        v5 = *((_DWORD *)v2 + 320) + *((_DWORD *)v2 + 321) + *((_DWORD *)v2 + 322);
        if ( v3 && 10 * v5 <= v4 )
        {
          *((_WORD *)v2 + 632) = 0;
          if ( v4 > 2 * v5 && v3 > 0 && v17[(unsigned __int8)v2[1256] + 392] == v17[(unsigned __int8)v2[1256] + 384] )
          {
            ++*((_WORD *)v2 + 633);
          }
          else if ( *((int *)v2 + 5) <= 0 || sub_415C80(v2) )
          {
            *((_WORD *)v2 + 633) = 0;
          }
          else
          {
            ++*((_WORD *)v2 + 633);
          }
        }
        else
        {
          ++*((_WORD *)v2 + 632);
          *((_WORD *)v2 + 633) = 0;
        }
        if ( v2[9] != 2 || *((_WORD *)v2 + 13) || *((_WORD *)v2 + 17) )
        {
          v9 = *(_DWORD *)dword_870814 + 72 * *v2;
          v10 = 0;
          v11 = v2 + 416;
          v12 = 4;
          do
          {
            if ( !*(v11 - 1) )
              ++v10;
            if ( !*v11 )
              ++v10;
            if ( !v11[1] )
              ++v10;
            if ( !v11[2] )
              ++v10;
            if ( !v11[3] )
              ++v10;
            if ( !v11[4] )
              ++v10;
            v11 += 6;
            --v12;
          }
          while ( v12 );
          if ( v10 < 18
            && *((_DWORD *)v2 + 4) * *(_DWORD *)(v9 + 24) < *((_DWORD *)v2 + 317)
            && sub_4640D0() % *((_DWORD *)v2 + 317) > *((_DWORD *)v2 + 4) * *(_DWORD *)(v9 + 24)
            && v2[9] != 2 )
          {
            v13 = dword_4CD11C;
            v2[8] &= ~1u;
            *((_DWORD *)v2 + 9) = v13;
            v2[9] = 2;
          }
          if ( *((__int16 *)v2 + 632) > 3
            && *((int *)v2 + 5) > 0
            && *((_DWORD *)v2 + 4) * *(_DWORD *)(v9 + 24) > *((_DWORD *)v2 + 317) )
          {
            for ( i = v17[810]; i != -1; i = *(__int16 *)(v15 + 20) )
            {
              v15 = dword_4C43DC + i * dword_4C43C8;
              v16 = *(_BYTE *)(v15 + 7);
              if ( (v16 == 1 || v16 == 2) && *(_BYTE *)(v15 + 84) != 0xFF )
                *(_BYTE *)(v15 + 84) = *v2;
            }
            *((_WORD *)v2 + 632) = 0;
          }
        }
        else
        {
          v6 = v17[380];
          if ( v6 != -1 )
          {
            do
            {
              v7 = dword_870868 + v6 * dword_870854;
              v8 = *(__int16 *)(v7 + 4);
              if ( *(_WORD *)(v7 + 8) == *v2 )
                sub_434210(v6);
              v6 = v8;
            }
            while ( v8 != -1 );
          }
          if ( sub_415E10(v2) )
            sub_41AD00((unsigned __int8)v2[1256]);
        }
      }
    }
  }
  return result;
}
