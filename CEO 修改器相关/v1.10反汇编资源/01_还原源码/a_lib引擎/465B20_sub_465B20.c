// 函数 0x465b20  sub_465B20  size=0xCA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __usercall sub_465B20@<eax>(int a1@<edi>, int a2, const char *a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // ecx

  if ( (dword_8DB868 & 1) == 0 )
  {
    dword_8DB868 |= 1u;
    sub_464A40(dword_8DB860);
    atexit(sub_4A0FD0);
  }
  sub_464A60(dword_8DB860, (char *)byte_4A2869, 0xFFFFFFFF, 0, 0);
  v4 = 0;
  if ( dword_8DB84C <= 0 )
  {
LABEL_7:
    sub_4643C0("realloc unknow memory %X: %s %d", a1, a3, a4);
  }
  else
  {
    v5 = (char *)Block + 60;
    while ( *v5 != a1 )
    {
      ++v4;
      v5 += 16;
      if ( v4 >= dword_8DB84C )
        goto LABEL_7;
    }
    *((_DWORD *)Block + 16 * v4 + 15) = a2;
  }
  return sub_464B40(dword_8DB860);
}
