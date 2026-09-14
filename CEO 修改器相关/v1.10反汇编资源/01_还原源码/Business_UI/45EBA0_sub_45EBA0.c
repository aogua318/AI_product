// 函数 0x45eba0  sub_45EBA0  size=0x1AE  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45EBA0(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  char *v4; // esi
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int i; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h] BYREF

  result = sub_45E9A0();
  v3 = a2;
  v4 = (char *)&unk_4D10B8 + 189880 * result;
  if ( a2 == 11 || a2 == 12 )
  {
    dword_8709F0 = 0;
    sub_435570(1, 0);
    v9 = sub_4445B0(v3 != 11);
    sub_40DD00(v9);
    result = dword_4B1024;
    if ( dword_4B1024 != -1 )
    {
      v10 = dword_4D0F1C + dword_4D0F08 * *(_DWORD *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 80);
      sub_483850(*(__int16 *)(v10 + 2), *(__int16 *)(v10 + 4), &v12, &a2);
      return sub_485F80(v12, a2);
    }
  }
  else if ( a2 == 13 )
  {
    dword_8709F0 = 1;
    sub_435570(1, 0);
    v5 = *v4;
    result = 0;
    do
    {
      if ( ++v5 >= 20 )
        v5 -= 20;
      v6 = 0;
      v7 = 0;
      for ( i = result + 1; v6 < dword_4C43CC; ++v6 )
      {
        if ( sub_464E90(v6) )
        {
          if ( *(char *)(v6 * dword_4C43C8 + dword_4C43DC + 2) == v5 )
          {
            sub_40DD00(v6);
            v8 = *(_DWORD *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 80) * dword_4D0F08;
            sub_483850(*(__int16 *)(v8 + dword_4D0F1C + 2), *(__int16 *)(v8 + dword_4D0F1C + 4), &v12, &a2);
            return sub_485F80(v12, a2);
          }
          if ( ++v7 >= dword_4C43D4 )
            break;
        }
      }
      result = i;
    }
    while ( i < 20 );
  }
  return result;
}
