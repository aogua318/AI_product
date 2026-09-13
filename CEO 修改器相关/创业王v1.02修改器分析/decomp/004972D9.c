int sub_4972D9()
{
  int v0; // eax
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // eax
  BOOL v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+Ch] [ebp-8h]
  char *v8; // [esp+10h] [ebp-4h] BYREF

  sub_4CED6D(1375797249, 369174948, 8, -1, &unk_59E571, 0); /*0x4972f7*/
  v0 = sub_4961A6(dword_5E1B00, &dword_5E1B04); /*0x49730a*/
  v1 = sub_4014CE((double)v0 + dbl_59E587); /*0x49732c*/
  sub_497085(dword_5E1B00, v1, 1); /*0x497338*/
  v8 = (char *)sub_4CED79(1375797249, 369174907, 8, -1); /*0x497353*/
  v5 = sub_401004(v8, &unk_59E58F) == 0; /*0x497371*/
  if ( v8 ) /*0x497379*/
    sub_4CED4F(v8); /*0x49737c*/
  if ( v5 ) /*0x497388*/
  {
    sub_4CED6D(1375797249, 369174907, 8, -1, &unk_59E5A5, 0); /*0x4973a3*/
    v8 = (char *)&unk_57D240; /*0x4973b0*/
    sub_40258F(&v8); /*0x4973b7*/
    if ( v8 ) /*0x4973c1*/
      sub_4CED4F(v8); /*0x4973c4*/
    while ( 1 ) /*0x4973e2*/
    {
      v8 = (char *)sub_4CED79(1375797249, 369174907, 8, -1); /*0x4973e2*/
      result = sub_401004(v8, &unk_59E5A5) == 0; /*0x4973fd*/
      v6 = result; /*0x497400*/
      if ( v8 ) /*0x497408*/
        result = sub_4CED4F(v8); /*0x49740b*/
      if ( !v6 ) /*0x497417*/
        break; /*0x497417*/
      v8 = (char *)sub_4CED79(1375797249, 369174907, 8, -1); /*0x497433*/
      result = sub_401004(v8, &unk_59E58F) == 0; /*0x49744e*/
      v7 = result; /*0x497451*/
      if ( v8 ) /*0x497459*/
        result = sub_4CED4F(v8); /*0x49745c*/
      if ( v7 ) /*0x497468*/
        break; /*0x497468*/
      sub_4CED73(1, 50); /*0x49748e*/
      v3 = sub_4961A6(dword_5E1B00, &dword_5E1B04); /*0x4974a1*/
      v4 = sub_4014CE((double)v3 + dbl_59E587); /*0x4974c3*/
      sub_497085(dword_5E1B00, v4, 1); /*0x4974cf*/
    }
  }
  else
  {
    sub_4CED6D(1375797249, 369174907, 8, -1, &unk_59E58F, 0); /*0x4974f3*/
    v8 = (char *)&unk_580AF7; /*0x497500*/
    sub_40258F(&v8); /*0x497507*/
    if ( v8 ) /*0x497511*/
      sub_4CED4F(v8); /*0x497514*/
    v8 = 0; /*0x49751c*/
    sub_495E87(&v8, 0); /*0x497529*/
    if ( v8 ) /*0x497533*/
      sub_4CED4F(v8); /*0x497536*/
    v8 = aCeoExe; /*0x497545*/
    result = sub_495E87(&v8, 1); /*0x49754c*/
    if ( v8 ) /*0x497556*/
      return sub_4CED4F(v8); /*0x497559*/
  }
  return result; /*0x497561*/
}