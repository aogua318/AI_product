// 函数 0x465cf0  sub_465CF0  size=0x141  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl sub_465CF0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  bool v3; // zf
  int v4; // edx
  int v5; // esi
  CHAR Text[100]; // [esp+10h] [ebp-74h] BYREF
  int v8; // [esp+80h] [ebp-4h]

  if ( (dword_8DB880 & 1) == 0 )
  {
    dword_8DB880 |= 1u;
    sub_464A40(dword_8DB878);
    atexit(sub_4A0FF0);
    v8 = -1;
  }
  sub_464A60(dword_8DB878, ".m1.", 0xFFFFFFFF, 0, 0);
  v1 = malloc(a1 + 8);
  v2 = v1;
  if ( v1 )
  {
    ++dword_8DB82C;
    ++dword_8DB830;
    v3 = dword_8DB844 == 0;
    v4 = dword_8DB838 + a1 + 8;
    *v1 = 43690;
    v1[1] = a1;
    dword_8DB838 = v4;
    if ( v3 )
    {
      atexit(sub_4657B0);
      dword_8DB844 = 1;
    }
    v5 = 1;
  }
  else
  {
    sprintf(Text, "size=%d an=%d as=%d", a1, dword_8DB82C, dword_8DB830);
    MessageBoxA(0, Text, "alloc failure", 0);
    v5 = 0;
  }
  sub_464B40(dword_8DB878);
  if ( v5 )
    return v2 + 2;
  sub_464B40(dword_8DB878);
  return 0;
}
