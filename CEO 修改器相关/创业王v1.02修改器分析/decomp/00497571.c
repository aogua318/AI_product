int sub_497571()
{
  int v0; // eax
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-24h]
  BOOL v6; // [esp+14h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-Ch]
  char *v9; // [esp+18h] [ebp-8h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  v0 = sub_4961A6(dword_5E1B00, &dword_5E1B04); /*0x49758c*/
  v1 = sub_4014CE((double)v0 + dbl_59E5BB); /*0x4975b5*/
  v10 = (unsigned __int16)sub_4977F0(dword_5E1B00, v1, 0, 0); /*0x4975c6*/
  v9 = (char *)sub_4CED79(1375797249, 369175240, 8, -1); /*0x4975e0*/
  v6 = sub_401004(v9, &unk_59E5C3) == 0; /*0x4975fe*/
  if ( v9 ) /*0x497606*/
    sub_4CED4F(v9); /*0x497609*/
  if ( v6 ) /*0x497615*/
  {
    sub_4CED6D(1375797249, 369175240, 8, -1, &unk_59E5DB, 0); /*0x497630*/
    v9 = (char *)&unk_57D240; /*0x49763d*/
    sub_40258F(&v9); /*0x497644*/
    if ( v9 ) /*0x49764e*/
      sub_4CED4F(v9); /*0x497651*/
    while ( 1 ) /*0x49766f*/
    {
      v9 = (char *)sub_4CED79(1375797249, 369175240, 8, -1); /*0x49766f*/
      result = sub_401004(v9, &unk_59E5DB) == 0; /*0x49768a*/
      v7 = result; /*0x49768d*/
      if ( v9 ) /*0x497695*/
        result = sub_4CED4F(v9); /*0x497698*/
      if ( !v7 ) /*0x4976a4*/
        break; /*0x4976a4*/
      v9 = (char *)sub_4CED79(1375797249, 369175240, 8, -1); /*0x4976c0*/
      result = sub_401004(v9, &unk_59E5C3) == 0; /*0x4976db*/
      v8 = result; /*0x4976de*/
      if ( v9 ) /*0x4976e6*/
        result = sub_4CED4F(v9); /*0x4976e9*/
      if ( v8 ) /*0x4976f5*/
        break; /*0x4976f5*/
      sub_4CED73(1, 50, 0, -2147482879); /*0x49771b*/
      v3 = sub_4961A6(dword_5E1B00, &dword_5E1B04); /*0x49772e*/
      v5 = v10; /*0x497748*/
      v4 = sub_4014CE((double)v3 + dbl_59E5BB); /*0x49774e*/
      sub_497085(dword_5E1B00, v4, v5); /*0x49775a*/
    }
  }
  else
  {
    sub_4CED6D(1375797249, 369175240, 8, -1, &unk_59E5C3, 0); /*0x49777e*/
    v9 = (char *)&unk_580AF7; /*0x49778b*/
    sub_40258F(&v9); /*0x497792*/
    if ( v9 ) /*0x49779c*/
      sub_4CED4F(v9); /*0x49779f*/
    v9 = 0; /*0x4977a7*/
    sub_495E87(&v9, 0); /*0x4977b4*/
    if ( v9 ) /*0x4977be*/
      sub_4CED4F(v9); /*0x4977c1*/
    v9 = aCeoExe; /*0x4977d0*/
    result = sub_495E87(&v9, 1); /*0x4977d7*/
    if ( v9 ) /*0x4977e1*/
      return sub_4CED4F(v9); /*0x4977e4*/
  }
  return result; /*0x4977ec*/
}