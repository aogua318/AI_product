// 函数 0x46a580  sub_46A580  size=0x77  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A580(FILE **this, char *FileName)
{
  FILE *v3; // eax

  v3 = fopen(FileName, "r+b");
  *this = v3;
  if ( !v3 )
    return sub_46A040(this, FileName);
  if ( dword_4B3978 )
  {
    atexit(sub_469D70);
    dword_4B3978 = 0;
  }
  ++dword_8DBCA4;
  if ( dword_8DBCA8 )
    sub_4643C0("Open(\"%s\") ok:%d", FileName, *this);
  return 1;
}
