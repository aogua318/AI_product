// 函数 0x42eda0  sub_42EDA0  size=0xB4  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_42EDA0(char *this, double a2)
{
  bool v3; // zf
  char v4; // al
  int v5; // eax
  int v6; // eax

  if ( *((double *)this + 1) >= 0.0 && a2 + *((double *)this + 1) < 0.0 )
  {
    v3 = *(this + 189748) == 0;
    *((_DWORD *)this + 20) = 1;
    *((_DWORD *)this + 21) = dword_4CD11C;
    if ( v3 )
    {
      v4 = *this;
      *(this + 189748) = 1;
      if ( v4 < 7 )
      {
        v5 = sub_436F10(6, v4);
        if ( v5 )
          sub_437150(v5, *this, -1, -1);
      }
    }
  }
  v6 = *this;
  *((double *)this + 1) = a2 + *((double *)this + 1);
  if ( v6 == dword_8703A0 )
    sub_4091E0();
  if ( *((double *)this + 1) >= 0.0 && *((_DWORD *)this + 20) )
  {
    v3 = *(this + 189749) == 0;
    *((_DWORD *)this + 20) = 0;
    if ( v3 )
      *(this + 189749) = 1;
  }
}
