// 函数 0x46a1f0  sub_46A1F0  size=0x7D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A1F0(int *this)
{
  int v2; // eax

  v2 = *this;
  if ( *this )
  {
    --dword_8DBCA4;
    if ( dword_8DBCA8 )
      sub_4643C0("Close(\"%d\")", v2);
    if ( *(this + 1) )
    {
      if ( sub_46A1F0(*this) )
      {
        sub_465FE0(*this, "a_lib\\a_file.cpp", 365);
        *this = 0;
        return 1;
      }
    }
    else
    {
      fflush((FILE *)*this);
      if ( !fclose((FILE *)*this) )
      {
        *this = 0;
        return 1;
      }
    }
  }
  return 0;
}
