// 函数 0x4768d0  sub_4768D0  size=0x250  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_4768D0@<eax>(unsigned int *a1@<eax>, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // eax
  int *v8; // esi
  unsigned int *v9; // esi
  unsigned int v10; // eax
  FILE *v11; // eax
  float *v12; // eax
  _DWORD *v13; // edi
  int v14; // ebx
  int *v15; // edi
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  int result; // eax
  FILE *v20; // eax
  const char *v21; // [esp-4h] [ebp-1Ch]
  const char *v22; // [esp-4h] [ebp-1Ch]
  int v23; // [esp+Ch] [ebp-Ch]
  _DWORD *v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h]
  int v26; // [esp+2Ch] [ebp+14h]

  v23 = a5 != 3 ? 0 : 4;
  v6 = a2;
  *a1 = sub_474DE0(9);
  if ( a2 == 1 )
    v7 = sub_474E40(5);
  else
    v7 = sub_474E40(3);
  a1[1] = v7;
  if ( a2 > 0 )
  {
    v8 = (int *)(a1 + 28);
    do
    {
      *(v8 - 26) = -1;
      *v8 = sub_474E40(4);
      v8 += 52;
      --v6;
    }
    while ( v6 );
    v6 = a2;
  }
  v9 = a1 + 4;
  v25 = 0;
  v24 = a1 + 4;
  do
  {
    v26 = 0;
    if ( v6 > 0 )
    {
      do
      {
        *(v9 - 1) = sub_474DE0(12);
        v10 = sub_474E40(9);
        *v9 = v10;
        if ( v10 > 0x120 )
        {
          v11 = (FILE *)sub_48C44A("big_values too large!\n");
          fprintf(v11 + 2, v21);
          *v9 = 288;
        }
        v12 = &flt_8EA768[v23 - sub_474E40(8)];
        v9[23] = (unsigned int)v12;
        if ( a3 )
          v9[23] = (unsigned int)(v12 + 2);
        v9[1] = sub_474E40(4);
        if ( sub_475D00() )
        {
          v9[2] = sub_474E40(2);
          v9[3] = sub_475D00();
          v9[4] = sub_474E40(5);
          v9[5] = sub_474E40(5);
          v9[6] = 0;
          v13 = v9 + 20;
          v14 = 3;
          do
          {
            *v13++ = v9[23] + 32 * sub_474E40(3);
            --v14;
          }
          while ( v14 );
          if ( !v9[2] )
          {
            v20 = (FILE *)sub_48C44A("Blocktype == 0 and window-switching == 1 not allowed.\n");
            fprintf(v20 + 2, v22);
            exit(1);
          }
          v9[15] = 18;
          v9[16] = 288;
        }
        else
        {
          v15 = (int *)(v9 + 4);
          v16 = 3;
          do
          {
            *v15++ = sub_474E40(5);
            --v16;
          }
          while ( v16 );
          v17 = sub_474E40(4);
          v18 = sub_474E40(3);
          v9[15] = word_4B77AA[72 * a4 + v17] >> 1;
          v9[16] = word_4B77AC[72 * a4 + v17 + v18] >> 1;
          v9[2] = 0;
          v9[3] = 0;
        }
        v9[17] = sub_475D00();
        v9[18] = sub_475D00();
        v9[19] = sub_475D00();
        v9 += 52;
        ++v26;
      }
      while ( v26 < a2 );
      v6 = a2;
    }
    result = v25 + 1;
    v9 = v24 + 26;
    v25 = result;
    v24 += 26;
  }
  while ( result < 2 );
  return result;
}
