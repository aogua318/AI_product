// 函数 0x45ff20  sub_45FF20  size=0x141  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45FF20(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( a1 )
  {
    v2 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    if ( dword_8D607C )
    {
      if ( a2 == -1 || (dword_4B38B8 = *(__int16 *)(a2 * dword_87082C + dword_870840 + 10), dword_4B38B8 == -1) )
      {
        dword_4B38B8 = *(__int16 *)(v2 + 480);
        if ( dword_4B38B8 == -1 )
          goto LABEL_6;
      }
    }
    else
    {
      v3 = *(__int16 *)(v2 + 480);
      if ( a2 != -1 )
      {
        if ( v3 == -1 )
          return;
        while ( v3 != a2 )
        {
          v3 = *(__int16 *)(v3 * dword_87082C + dword_870840 + 10);
          if ( v3 == -1 )
            return;
        }
      }
      dword_4B38B8 = v3;
      v4 = sub_47C740("face\\face_salesman.fce");
      sub_481C90(&unk_8D6080, v4, 1);
      sub_47D1A0(&unk_8D6080, sub_45FCF0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8D6078 = 1;
      dword_8D607C = 1;
    }
    sub_45FD80();
    return;
  }
LABEL_6:
  if ( dword_8D607C )
  {
    sub_47CCD0(&unk_8D6080);
    sub_47E260(&unk_8D6080);
    dword_8D6078 = 0;
    dword_8D607C = 0;
    dword_4B38B8 = -1;
  }
}
