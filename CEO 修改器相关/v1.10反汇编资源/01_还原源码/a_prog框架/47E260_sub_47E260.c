// 函数 0x47e260  sub_47E260  size=0xAC  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E260(__int16 *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax

  if ( dword_8F2AC8 )
  {
    v2 = 0;
    if ( *(this + 146) > 0 )
    {
      v3 = *((_DWORD *)this + 74);
      while ( *(_WORD *)(v3 + 4) != 5 || dword_8F2AC8 != v3 )
      {
        ++v2;
        v3 += 288;
        if ( v2 >= *(this + 146) )
          goto LABEL_9;
      }
      dword_8F2AC8 = 0;
    }
  }
LABEL_9:
  v4 = *((_DWORD *)this + 74);
  if ( v4 )
  {
    sub_465FE0(v4, "a_prog\\a_interface.cpp", 67);
    *((_DWORD *)this + 74) = 0;
    *(this + 146) = 0;
  }
  sub_4676A0((int *)this);
  memset(this, 0, 0x130u);
  *(this + 141) = -1;
  *(this + 140) = -1;
  *(this + 150) = -1;
  return -1;
}
