// 函数 0x43e1d0  sub_43E1D0  size=0x189  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43E1D0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  if ( a1 )
  {
    if ( !dword_8A1C28 )
    {
      v1 = sub_47C740("face\\face_buymachine.fce");
      sub_481C90(&unk_8A1C30, v1, 1);
      sub_47D1A0(&unk_8A1C30, sub_43DD30, sub_43DE70, 0, sub_43E0D0, 0, 0, 0, 0, sub_43DB50, 0, 0);
      dword_8A1C28 = 1;
      if ( (*(_BYTE *)(dword_8A1D58 + 2313) & 2) != 0 )
      {
        sub_43D8C0(0);
      }
      else if ( (*(_BYTE *)(dword_8A1D58 + 2601) & 2) != 0 )
      {
        sub_43D8C0(1);
      }
      else if ( (*(_BYTE *)(dword_8A1D58 + 2889) & 2) != 0 )
      {
        sub_43D8C0(2);
      }
      else if ( (*(_BYTE *)(dword_8A1D58 + 3177) & 2) != 0 )
      {
        sub_43D8C0(3);
      }
      else if ( (*(_BYTE *)(dword_8A1D58 + 3465) & 2) != 0 )
      {
        sub_43D8C0(4);
      }
      else if ( (*(_BYTE *)(dword_8A1D58 + 3753) & 2) != 0 )
      {
        sub_43D8C0(5);
      }
      else if ( (*(_BYTE *)(dword_8A1D58 + 4041) & 2) != 0 )
      {
        sub_43D8C0(6);
      }
      sub_43FB60(0);
      v2 = sub_464D00(624, 200, 800, 600);
      sub_47C950(v2);
    }
  }
  else if ( dword_8A1C28 )
  {
    sub_47CCD0(&unk_8A1C30);
    dword_8A1C28 = 0;
    sub_47E260(&unk_8A1C30);
    sub_43E360(0);
    sub_43E3F0(0);
    sub_43E650(0);
    sub_43FB60(1);
    sub_4095B0();
    v3 = sub_464D00(624, 200, 800, 600);
    sub_47C950(v3);
  }
}
