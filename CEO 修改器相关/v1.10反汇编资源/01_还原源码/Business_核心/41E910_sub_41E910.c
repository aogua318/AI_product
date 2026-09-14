// 函数 0x41e910  sub_41E910  size=0xBC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41E910(char *this)
{
  int v2; // eax
  _DWORD *v3; // ecx

  memset(this, 0, 0x2C90u);
  v2 = 0;
  v3 = this + 432;
  do
    *v3++ = v2++;
  while ( v2 < 20 );
  *((_DWORD *)this + 35) = -1;
  *((double *)this + 19) = -1.0;
  *((_DWORD *)this + 36) = -1;
  *((double *)this + 20) = -1.0;
  *((_DWORD *)this + 44) = -1;
  *((double *)this + 21) = -1.0;
  *((_DWORD *)this + 48) = -1;
  *((_DWORD *)this + 52) = -1;
  *((_DWORD *)this + 56) = -1;
  *((_DWORD *)this + 58) = -1;
  *((_DWORD *)this + 59) = -1;
  *((_DWORD *)this + 60) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 2414) = 3;
  *((_DWORD *)this + 2421) = 3;
  *((_DWORD *)this + 2429) = 3;
  *((_DWORD *)this + 2430) = 3;
  *((_DWORD *)this + 57) = 1;
  *((_DWORD *)this + 2851) = 100;
  *((_DWORD *)this + 2850) = 100;
  return 100;
}
