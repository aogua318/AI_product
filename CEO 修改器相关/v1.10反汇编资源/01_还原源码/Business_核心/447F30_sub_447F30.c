// 函数 0x447f30  sub_447F30  size=0x12B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_447F30(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8AF338 )
    {
      v1 = sub_47C740("face\\MyFirmManage.fce");
      sub_481C90(&unk_8AF5A0, v1, 1);
      sub_482060(dword_8AF6C8 + 864);
      sub_482FE0(dword_8AF6C8 + 288);
      sub_47FF50(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 204);
      if ( sub_41A090((__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98)) )
        sub_4820C0(dword_8AF6C8 + 288);
      sub_47D1A0(&unk_8AF5A0, sub_447EA0, 0, 0, 0, 0, 0, 0, 0, 0, sub_447480, 100);
      dword_8AF338 = 1;
    }
  }
  else if ( dword_8AF338 )
  {
    sub_47CCD0(&unk_8AF5A0);
    dword_8AF338 = 0;
    sub_47E260(&unk_8AF5A0);
  }
}
