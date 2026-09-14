// 函数 0x418250  sub_418250  size=0x82  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_418250(void *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( dword_4B1020 != -1 )
  {
    if ( !byte_8EEC81 )
      sub_40C2B0();
    if ( sub_461900(this) )
      sub_487220(&unk_4C42A0);
  }
  result = dword_4B32B0;
  if ( dword_4B32B0 != -1 )
  {
    sub_484120(dword_8EED88, dword_8EED8C, &v2, &v3);
    return sub_42C450(v2, v3, 0, 1);
  }
  return result;
}
