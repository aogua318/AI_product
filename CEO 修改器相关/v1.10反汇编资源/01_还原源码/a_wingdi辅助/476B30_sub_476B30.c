// 函数 0x476b30  sub_476B30  size=0x214  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __usercall sub_476B30@<eax>(unsigned int *a1@<eax>, int a2, int a3, int a4, int a5)
{
  signed int result; // eax
  unsigned int *v7; // esi
  unsigned int v8; // eax
  FILE *v9; // eax
  float *v10; // eax
  _DWORD *v11; // edi
  int v12; // ebx
  unsigned int v13; // eax
  int *v14; // edi
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  FILE *v18; // eax
  const char *v19; // [esp-8h] [ebp-14h]
  const char *v20; // [esp-8h] [ebp-14h]
  int v21; // [esp+8h] [ebp-4h]
  signed int v22; // [esp+20h] [ebp+14h]

  v21 = a5 != 3 ? 0 : 4;
  *a1 = sub_474DE0(8);
  if ( a2 == 1 )
    result = sub_475D00();
  else
    result = sub_474E40(2);
  a1[1] = result;
  v22 = 0;
  if ( a2 > 0 )
  {
    v7 = a1 + 4;
    do
    {
      *(v7 - 1) = sub_474DE0(12);
      v8 = sub_474E40(9);
      *v7 = v8;
      if ( v8 > 0x120 )
      {
        v9 = (FILE *)sub_48C44A("big_values too large!\n");
        fprintf(v9 + 2, v19);
        *v7 = 288;
      }
      v10 = &flt_8EA768[v21 - sub_474E40(8)];
      v7[23] = (unsigned int)v10;
      if ( a3 )
        v7[23] = (unsigned int)(v10 + 2);
      v7[1] = sub_474DE0(9);
      if ( sub_475D00() )
      {
        v7[2] = sub_474E40(2);
        v7[3] = sub_475D00();
        v7[4] = sub_474E40(5);
        v7[5] = sub_474E40(5);
        v7[6] = 0;
        v11 = v7 + 20;
        v12 = 3;
        do
        {
          *v11++ = v7[23] + 32 * sub_474E40(3);
          --v12;
        }
        while ( v12 );
        v13 = v7[2];
        if ( !v13 )
        {
          v18 = (FILE *)sub_48C44A("Blocktype == 0 and window-switching == 1 not allowed.\n");
          fprintf(v18 + 2, v20);
          exit(1);
        }
        if ( v13 == 2 )
          v7[15] = 18;
        else
          v7[15] = a4 != 8 ? 27 : 54;
        v7[16] = 288;
      }
      else
      {
        v14 = (int *)(v7 + 4);
        v15 = 3;
        do
        {
          *v14++ = sub_474E40(5);
          --v15;
        }
        while ( v15 );
        v16 = sub_474E40(4);
        v17 = sub_474E40(3);
        v7[15] = word_4B77AA[72 * a4 + v16] >> 1;
        v7[16] = word_4B77AC[72 * a4 + v16 + v17] >> 1;
        v7[2] = 0;
        v7[3] = 0;
      }
      v7[18] = sub_475D00();
      v7[19] = sub_475D00();
      result = v22 + 1;
      v7 += 52;
      v22 = result;
    }
    while ( result < a2 );
  }
  return result;
}
