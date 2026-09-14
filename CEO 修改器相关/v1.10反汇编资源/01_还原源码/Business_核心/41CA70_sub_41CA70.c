// 函数 0x41ca70  sub_41CA70  size=0x277  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41CA70()
{
  char *v0; // eax
  int i; // esi
  int j; // esi
  int k; // esi
  int m; // esi
  int n; // esi
  int ii; // esi
  int jj; // esi
  int kk; // esi
  int mm; // esi
  int nn; // esi
  const char *v11; // eax
  int i1; // esi
  _BYTE v14[16]; // [esp+8h] [ebp-1Ch] BYREF
  int v15; // [esp+20h] [ebp-4h]

  sub_464410(v14);
  v15 = 0;
  v0 = (char *)sub_47C740("data\\formula.csv");
  if ( sub_464420(v0) )
  {
    for ( i = 0; i < 5; ++i )
      dword_4CCAD8[i] = sub_4646D0(2, i + 2);
    for ( j = 0; j < 9; ++j )
      dword_4CCB20[j] = sub_4646D0(2, j + 9);
    for ( k = 0; k < 5; ++k )
      dword_4CCB44[k] = sub_4646D0(2, k + 28);
    for ( m = 0; m < 13; ++m )
      dword_4CCAEC[m] = sub_4646D0(2, m + 49);
    for ( n = 0; n < 2; ++n )
      dword_4CCB58[n] = sub_4646D0(2, n + 67);
    for ( ii = 0; ii < 6; ++ii )
      dword_4CCB60[ii] = sub_4646D0(2, ii + 74);
    for ( jj = 0; jj < 4; ++jj )
      dword_4CCB78[jj] = sub_4646D0(2, jj + 86);
    for ( kk = 0; kk < 2; ++kk )
      dword_4CCB88[kk] = sub_4646D0(2, kk + 92);
    for ( mm = 0; mm < 5; ++mm )
      dword_4CCB90[mm] = sub_4646D0(2, mm + 100);
    dword_4CCBA4 = sub_4646D0(2, 110);
    dword_4CCBA8 = sub_4646D0(2, 116);
    for ( nn = 0; nn < 14; ++nn )
      dword_4CCBAC[nn] = sub_4646D0(2, nn + 119);
    v11 = (const char *)sub_4646A0(2, 133);
    dbl_4CCBE8 = atof(v11);
    for ( i1 = 0; i1 < 16; ++i1 )
      dword_4CCBF0[i1] = sub_4646D0(2, i1 + 138);
    dword_4CCC30 = sub_4646D0(2, 156);
    dword_4CCC34 = sub_4646D0(2, 158);
    dword_4CCC38 = sub_4646D0(2, 159);
    sub_464650(v14);
    v15 = -1;
    sub_464B50(v14);
    return 1;
  }
  else
  {
    v15 = -1;
    sub_464B50(v14);
    return 0;
  }
}
