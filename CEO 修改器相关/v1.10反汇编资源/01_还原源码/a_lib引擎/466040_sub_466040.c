// 函数 0x466040  sub_466040  size=0xDD  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl sub_466040(int a1, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int v4; // ecx

  if ( (dword_8DB898 & 1) == 0 )
  {
    dword_8DB898 |= 1u;
    sub_464A40(dword_8DB890);
    atexit(sub_4A1010);
  }
  sub_464A60(dword_8DB890, ".m3.", 0xFFFFFFFF, 0, 0);
  v2 = (_DWORD *)(a1 - 8);
  v3 = realloc((void *)(a1 - 8), a2 + 8);
  if ( !v3 )
  {
    v3 = malloc(a2 + 8);
    memcpy(v3, v2, v2[1] + 8);
    free(v2);
  }
  v4 = a2 - v3[1];
  v3[1] = a2;
  dword_8DB838 += v4;
  sub_464B40(dword_8DB890);
  return v3 + 2;
}
