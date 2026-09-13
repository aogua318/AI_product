int sub_4979DA()
{
  double v0; // st7
  int v1; // eax
  int result; // eax
  double v3; // st7
  int v4; // eax
  BOOL v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+Ch] [ebp-8h]
  char *v8; // [esp+10h] [ebp-4h] BYREF

  sub_4CED6D(1375797249, 369174907, 8, -1, &unk_59E58F, 0); /*0x4979f8*/
  v0 = (double)(int)sub_4961A6(dword_5E1B00, &dword_5E1B04) + dbl_59E587; /*0x497a2a*/
  v1 = sub_4014CE(v0); /*0x497a2d*/
  sub_497085(dword_5E1B00, v1, 2); /*0x497a39*/
  v8 = (char *)sub_4CED79(1375797249, 369174948, 8, -1); /*0x497a54*/
  v5 = sub_401004(v8, &unk_59E571) == 0; /*0x497a72*/
  if ( v8 ) /*0x497a7a*/
    sub_4CED4F(v8); /*0x497a7d*/
  if ( v5 ) /*0x497a89*/
  {
    sub_4CED6D(1375797249, 369174948, 8, -1, &unk_59E5F3, 0); /*0x497aa4*/
    v8 = (char *)&unk_57D240; /*0x497ab1*/
    sub_40258F(&v8); /*0x497ab8*/
    if ( v8 ) /*0x497ac2*/
      sub_4CED4F(v8); /*0x497ac5*/
    while ( 1 ) /*0x497ae3*/
    {
      v8 = (char *)sub_4CED79(1375797249, 369174948, 8, -1); /*0x497ae3*/
      result = sub_401004(v8, &unk_59E5F3) == 0; /*0x497afe*/
      v6 = result; /*0x497b01*/
      if ( v8 ) /*0x497b09*/
        result = sub_4CED4F(v8); /*0x497b0c*/
      if ( !v6 ) /*0x497b18*/
        break; /*0x497b18*/
      v8 = (char *)sub_4CED79(1375797249, 369174948, 8, -1); /*0x497b34*/
      result = sub_401004(v8, &unk_59E571) == 0; /*0x497b4f*/
      v7 = result; /*0x497b52*/
      if ( v8 ) /*0x497b5a*/
        result = sub_4CED4F(v8); /*0x497b5d*/
      if ( v7 ) /*0x497b69*/
        break; /*0x497b69*/
      sub_4CED73(1, 50, 0, -2147482879); /*0x497b8f*/
      v3 = (double)(int)sub_4961A6(dword_5E1B00, &dword_5E1B04) + dbl_59E587; /*0x497bc1*/
      v4 = sub_4014CE(v3); /*0x497bc4*/
      sub_497085(dword_5E1B00, v4, 2); /*0x497bd0*/
    }
  }
  else
  {
    sub_4CED6D(1375797249, 369174948, 8, -1, &unk_59E571, 0); /*0x497bf4*/
    v8 = (char *)&unk_580AF7; /*0x497c01*/
    sub_40258F(&v8); /*0x497c08*/
    if ( v8 ) /*0x497c12*/
      sub_4CED4F(v8); /*0x497c15*/
    v8 = 0; /*0x497c1d*/
    sub_495E87(&v8, 0); /*0x497c2a*/
    if ( v8 ) /*0x497c34*/
      sub_4CED4F(v8); /*0x497c37*/
    v8 = aCeoExe; /*0x497c46*/
    result = sub_495E87(&v8, 1); /*0x497c4d*/
    if ( v8 ) /*0x497c57*/
      return sub_4CED4F(v8); /*0x497c5a*/
  }
  return result; /*0x497c62*/
}