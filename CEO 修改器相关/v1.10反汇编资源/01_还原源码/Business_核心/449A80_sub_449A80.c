// 函数 0x449a80  sub_449A80  size=0x73  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_449A80()
{
  int v0; // esi
  unsigned int v1; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  v0 = *(_DWORD *)(dword_8B8CC8 + 1780);
  sub_47E4A0(&v3, &v4);
  v1 = v0 - *(_DWORD *)(dword_8B8CC8 + 1776);
  v4 = v1;
  if ( v1 > 0xB )
    return sub_482060(dword_8B8CC8 + 2304);
  v4 = 22 * v1 + 116;
  sub_482120(v3, v4);
  return sub_482FE0(dword_8B8CC8 + 2304);
}
