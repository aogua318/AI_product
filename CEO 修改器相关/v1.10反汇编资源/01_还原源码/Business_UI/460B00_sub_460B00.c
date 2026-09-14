// 函数 0x460b00  sub_460B00  size=0x1A6  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_460B00(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // ecx
  void (__cdecl *v4)(int, int); // [esp+4h] [ebp-24h] BYREF
  void (__cdecl *v5)(int); // [esp+8h] [ebp-20h]
  int v6; // [esp+Ch] [ebp-1Ch]
  void (__cdecl *v7)(int); // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int v9; // [esp+18h] [ebp-10h]
  char (__cdecl *v10)(int); // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+20h] [ebp-8h]
  int v12; // [esp+24h] [ebp-4h]

  result = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
    {
      if ( !dword_8D6070 )
      {
        v2 = sub_47C740("face\\inoutinfo.fce");
        sub_481C90(&unk_8D61B0, v2, 1);
        v7 = sub_45F9F0;
        v5 = sub_45FAE0;
        v4 = sub_4609F0;
        v10 = sub_45FB20;
        v12 = 100;
        sub_408FC0((int)&unk_8D61B0, (int)&v4);
        dword_8D6070 = 1;
        sub_460070();
        if ( dword_8D6074 )
        {
          dword_8D6074 = 0;
          sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
        }
        dword_8D6078 = 0;
        dword_4B38B8 = -1;
      }
      v3 = dword_8D62D8 + 12960;
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
      {
        return sub_482060(v3);
      }
      else
      {
        sub_482FE0(v3);
        sub_4820C0(dword_8D62D8 + 11232);
        return sub_4820C0(dword_8D62D8 + 11520);
      }
    }
  }
  else if ( dword_8D6070 )
  {
    sub_45FF20(0, -1);
    sub_47CCD0(&unk_8D61B0);
    dword_8D6070 = 0;
    sub_47E260(&unk_8D6080);
    result = sub_47E260(&unk_8D61B0);
    if ( dword_8D6074 )
    {
      dword_8D6074 = 0;
      result = sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
    }
    dword_8D6078 = 0;
  }
  return result;
}
