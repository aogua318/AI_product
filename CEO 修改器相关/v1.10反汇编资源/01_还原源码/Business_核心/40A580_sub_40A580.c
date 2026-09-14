// 函数 0x40a580  sub_40A580  size=0x10A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_40A580()
{
  int v0; // [esp-8h] [ebp-8h]
  int v1; // [esp-4h] [ebp-4h]
  int v2; // [esp-4h] [ebp-4h]
  int v3; // [esp-4h] [ebp-4h]

  if ( dword_4C2D3C )
  {
    v1 = dword_8EED8C;
    v0 = dword_8EED88;
    sub_483910(dword_4C2D38);
    if ( sub_464B90(v0, v1) && (_DWORD *)dword_4C2D38 == dword_4D0E68 )
    {
      dword_4B1010 = sub_4850F0(dword_8EED88, dword_8EED8C, 10, 0, 0);
      if ( !sub_483C00(dword_4B1010) )
      {
        v2 = sub_483C30(dword_4B1010);
        sub_40DD00(v2);
        goto LABEL_9;
      }
      if ( sub_483C00(dword_4B1010) == 2 || sub_483C00(dword_4B1010) == 6 )
      {
        v3 = *(__int16 *)(sub_483C30(dword_4B1010) * dword_4CCA98 + dword_4CCAAC + 1620);
        sub_40DD00(v3);
LABEL_9:
        sub_4386F0(-1);
        if ( dword_4B1028 != -1 )
          sub_4181C0();
      }
    }
    if ( sub_461900() )
      sub_4873E0(&unk_4C42A0);
  }
}
