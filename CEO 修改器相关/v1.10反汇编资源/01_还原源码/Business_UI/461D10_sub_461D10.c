// 函数 0x461d10  sub_461D10  size=0x1B6  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_461D10(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  char *v4; // eax

  if ( a1 )
  {
    if ( !dword_8D7A58 )
    {
      v1 = sub_47C740("face\\face_SmallMap.fce");
      sub_481C90(&unk_8D7CD0, v1, 1);
      v2 = sub_47C740("face\\face_list.fce");
      sub_481C90(&unk_8D7B90, v2, 1);
      v3 = sub_47C740("face\\face_list.fce");
      sub_481C90(&unk_8D7A60, v3, 1);
      sub_47D1A0(&unk_8D7CD0, sub_461610, sub_461940, 0, 0, 0, 0, 0, 0, 0, sub_461970, 100);
      sub_482120(658, 75);
      sub_47D1A0(&unk_8D7B90, sub_461470, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
      sub_47D1A0(&unk_8D7A60, sub_461590, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
      sub_482060(dword_8D7CB8);
      sub_482060(dword_8D7B88);
      v4 = (char *)sub_47C740("data\\smapmenu.csv");
      sub_464420(v4);
      dword_8D7A58 = 1;
    }
    sub_461100();
  }
  else if ( dword_8D7A58 )
  {
    sub_464650(&unk_8D7CC0);
    sub_47CCD0(&unk_8D7A60);
    sub_47CCD0(&unk_8D7B90);
    sub_47CCD0(&unk_8D7CD0);
    dword_8D7A58 = 0;
    sub_47E260(&unk_8D7B90);
    sub_47E260(&unk_8D7A60);
    sub_47E260(&unk_8D7CD0);
  }
}
