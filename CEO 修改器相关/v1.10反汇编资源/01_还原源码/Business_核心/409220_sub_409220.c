// 函数 0x409220  sub_409220  size=0x121  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_409220()
{
  int v1; // [esp+0h] [ebp-114h] BYREF
  int v2; // [esp+4h] [ebp-110h] BYREF
  int v3; // [esp+8h] [ebp-10Ch] BYREF
  int v4; // [esp+Ch] [ebp-108h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  if ( !dword_4C2D3C )
    return sprintf(Buffer, "x=%d y=%d  Cycle=%d Turbo=%d", dword_8EED88, dword_8EED8C, dword_4B1124, dword_4CD12C);
  sub_484120(dword_8EED88, dword_8EED8C, &v1, &v2);
  sub_4838E0(dword_8EED88, dword_8EED8C, &v3, &v4);
  return sprintf(
           Buffer,
           "x=%d y=%d  mx=%d my=%d vx=%d vy=%d Cycle=%d Turbo=%d fisht0=%d",
           dword_8EED88,
           dword_8EED8C,
           v1,
           v2,
           v3 - *(_DWORD *)(dword_4C2D38 + 88),
           v4 - *(_DWORD *)(dword_4C2D38 + 92),
           dword_4B1124,
           dword_4CD12C,
           dword_4C2D40);
}
