// 函数 0x469f90  sub_469F90  size=0xAA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469F90(FILE **this, char *FileName)
{
  FILE *v3; // eax
  bool v4; // zf

  v3 = fopen(FileName, "w+b");
  *this = v3;
  if ( !v3 )
  {
    sub_469F30(FileName);
    *this = fopen(FileName, "w+b");
  }
  v4 = *this == 0;
  *(this + 1) = 0;
  if ( v4 )
  {
    if ( dword_8DBCA8 )
      sub_4643C0("New(\"%s\") fail", FileName);
    return 0;
  }
  else
  {
    if ( dword_4B3978 )
    {
      atexit(sub_469D70);
      dword_4B3978 = 0;
    }
    ++dword_8DBCA4;
    if ( dword_8DBCA8 )
      sub_4643C0("New(\"%s\") ok:%d", FileName, *this);
    return 1;
  }
}
