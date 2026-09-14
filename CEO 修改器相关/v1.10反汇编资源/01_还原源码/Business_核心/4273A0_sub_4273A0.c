// 函数 0x4273a0  sub_4273A0  size=0x8A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4273A0(__int16 *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *v6; // edx
  _WORD *i; // eax

  v3 = 388 * *this;
  *((_BYTE *)this + 129) = a2;
  v4 = *(_DWORD *)dword_87081C
     + 116
     * *(__int16 *)(*(_DWORD *)dword_4D0C94
                  + 2 * (*((char *)this + 128) + 34 * *(char *)(v3 + *(_DWORD *)dword_4D0C8C + 78))
                  + 24);
  v5 = 0;
  v6 = (int *)(this + 66);
  for ( i = (_WORD *)(v4 + 20); *i == 0xFFFF || *v6 <= 0; ++i )
  {
    ++v5;
    ++v6;
    if ( v5 >= 4 )
    {
      *((_BYTE *)this + 128) = a2;
      sub_4270C0(this);
      sub_4272D0(this);
      return 1;
    }
  }
  return 1;
}
