// 函数 0x4472c0  sub_4472C0  size=0x100  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4472C0(int a1, int a2)
{
  int v2; // eax
  _DWORD v3[6]; // [esp+0h] [ebp-24h] BYREF
  int (__cdecl *v4)(int); // [esp+18h] [ebp-Ch]
  int v5; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h]

  memset(v3, 0, sizeof(v3));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( dword_4B1024 == -1 || *(char *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 3) < 4 || !a1 )
  {
    if ( dword_8AA3E8 )
    {
      sub_47CCD0(&unk_8AA3F0);
      dword_8AA3E8 = 0;
      sub_47E260(&unk_8AA3F0);
    }
  }
  else
  {
    if ( !dword_8AA3E8 )
    {
      v2 = sub_47C740("face\\BuildingFirm.fce");
      sub_481C90(&unk_8AA3F0, v2, 1);
      if ( a2 )
      {
        v3[0] = sub_446550;
        v4 = sub_447280;
        v6 = 100;
        sub_482FE0(dword_8AA518);
      }
      else
      {
        sub_482060(dword_8AA518);
      }
      sub_408FC0((int)&unk_8AA3F0, (int)v3);
      dword_8AA3E8 = 1;
      sub_4461E0();
    }
    sub_446880();
  }
}
