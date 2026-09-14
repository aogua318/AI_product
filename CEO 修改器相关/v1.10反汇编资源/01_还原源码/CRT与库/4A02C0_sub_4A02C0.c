// 函数 0x4a02c0  sub_4A02C0  size=0x20  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *sub_4A02C0()
{
  RECT *v0; // esi
  int i; // edi
  _DWORD *result; // eax

  v0 = &Rect;
  for ( i = 99; i >= 0; --i )
    result = sub_464B60(v0++);
  return result;
}
