// 函数 0x45a9d0  sub_45A9D0  size=0x24B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45A9D0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // edx
  char v4; // cl
  char *v5; // esi
  char v6[256]; // [esp+Ch] [ebp-104h] BYREF

  if ( !a2 )
  {
    v2 = (char *)(dword_8CB0A0 + 28);
    v3 = &v6[-dword_8CB0A0 - 28];
    do
    {
      v4 = *v2;
      v2[(_DWORD)v3] = *v2;
      ++v2;
    }
    while ( v4 );
    if ( !strcmp(v6, "money") )
    {
      v5 = (char *)&unk_4D10B8;
      do
      {
        sub_42EDA0(v5, 100000000.0);
        v5 += 189880;
      }
      while ( (int)v5 < (int)&dbl_870318 );
    }
    else if ( !strcmp(v6, "money1") )
    {
      sub_42EDA0((char *)&unk_4D10B8 + 189880 * dword_8703A0, 100000000.0);
    }
    else if ( !strcmp(v6, "wkrfill") )
    {
      sub_45A8D0();
    }
    else if ( !strcmp(v6, "notalk") )
    {
      dword_8CAF70 = 1;
    }
    else if ( !strcmp(v6, "talk") )
    {
      dword_8CAF70 = 0;
    }
    else if ( !strcmp(v6, "buildok") )
    {
      sub_45A730(dword_4B1024);
    }
    else if ( !strcmp(v6, "buildokall") )
    {
      sub_45A8B0();
    }
    sub_45AC20(0);
  }
}
