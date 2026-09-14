// 函数 0x4090c0  sub_4090C0  size=0x111  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4090C0(int a1, int a2)
{
  int result; // eax

  result = dword_4C2D38;
  if ( dword_4C2D38 != a1 )
  {
    if ( dword_4C2D38 )
    {
      sub_483FE0(*(_DWORD *)(dword_4C2D38 + 20));
      result = dword_4C2D38;
    }
    dword_4B1010 = -1;
    if ( result )
      *(_DWORD *)(result + 64) = 0;
    dword_4C2D38 = a1;
    if ( a1 )
    {
      *(_DWORD *)(a1 + 64) = 1;
      if ( a2 )
      {
        dword_4C2D3C = 1;
        sub_461D10(1);
        sub_460D30(1);
      }
    }
    else
    {
      dword_4C2D3C = 0;
      sub_461D10(0);
      sub_460D30(0);
    }
    if ( (_UNKNOWN *)dword_4C2D38 == &unk_4D0E68 )
    {
      sub_486BA0(sub_434B60);
      sub_486BB0(sub_434C00);
      sub_45EEF0(1);
      sub_4449E0(0);
    }
    else
    {
      sub_486BA0(sub_434B10);
      sub_486BB0(sub_434BD0);
      sub_45EEF0(0);
      sub_4449E0(1);
    }
    return sub_4874B0(dword_4C2D38, 606, 519, 635, 47, 156, 117, 0);
  }
  return result;
}
