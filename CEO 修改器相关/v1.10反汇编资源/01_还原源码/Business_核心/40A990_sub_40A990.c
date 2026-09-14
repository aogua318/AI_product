// 函数 0x40a990  sub_40A990  size=0xC7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_40A990()
{
  int v0; // [esp-8h] [ebp-18h]
  int v1; // [esp-4h] [ebp-14h]
  _BYTE v2[4]; // [esp+0h] [ebp-10h] BYREF
  _BYTE v3[4]; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( dword_4C2D3C )
  {
    sub_484120(dword_8EED88, dword_8EED8C, v2, v3);
    sub_4838E0(dword_8EED88, dword_8EED8C, &v5, &v4);
    v5 -= *(_DWORD *)(dword_4C2D38 + 88);
    v4 -= *(_DWORD *)(dword_4C2D38 + 92);
    if ( sub_461900() )
      sub_4874A0(&unk_4C42A0);
    if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
    {
      if ( dword_8EED94 )
      {
        v1 = dword_8EED8C;
        v0 = dword_8EED88;
        sub_483910(dword_4C2D38);
        if ( sub_464B90(v0, v1) )
        {
          sub_45ADA0();
          sub_45B0F0();
        }
      }
    }
    else
    {
      sub_419440();
      sub_4196B0();
    }
  }
}
