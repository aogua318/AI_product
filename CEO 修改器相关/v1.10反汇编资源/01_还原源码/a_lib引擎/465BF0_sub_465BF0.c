// 函数 0x465bf0  sub_465BF0  size=0xF6  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __cdecl sub_465BF0(const char *a1, int a2)
{
  int ArgList; // ecx
  int v3; // esi
  int v4; // edi
  bool v5; // zf
  _DWORD *v6; // ecx
  int v8; // edx

  v3 = ArgList;
  if ( (dword_8DB874 & 1) == 0 )
  {
    dword_8DB874 |= 1u;
    sub_464A40(dword_8DB86C);
    atexit(sub_4A0FE0);
  }
  sub_464A60(dword_8DB86C, (char *)byte_4A2869, 0xFFFFFFFF, 0, 0);
  v4 = 0;
  v5 = dword_8DB84C == 0;
  if ( dword_8DB84C <= 0 )
  {
LABEL_8:
    if ( v5 )
      sub_4643C0("no more unfree memory !!");
    sub_4643C0("free unknow memory %X: %s %d", v3, a1, a2);
  }
  else
  {
    v6 = (char *)Block + 60;
    while ( *v6 != v3 )
    {
      ++v4;
      v6 += 16;
      if ( v4 >= dword_8DB84C )
      {
        v5 = dword_8DB84C == 0;
        goto LABEL_8;
      }
    }
    v8 = dword_8DB84C - 1;
    if ( v4 != dword_8DB84C - 1 )
      qmemcpy((char *)Block + 64 * v4, (char *)Block + 64 * dword_8DB84C - 64, 0x40u);
    dword_8DB84C = v8;
  }
  return sub_464B40(dword_8DB86C);
}
