// 函数 0x41f7e0  sub_41F7E0  size=0xE9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_41F7E0()
{
  char *v0; // eax
  _BYTE v2[8]; // [esp+4h] [ebp-14h] BYREF
  int v3; // [esp+14h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v2);
  v3 = 0;
  v0 = (char *)sub_47C740("option.dat");
  if ( sub_46A040(v0) )
  {
    sub_46A320(&dword_4B1134, 4u);
    sub_46A320(&dword_4B1138, 4u);
    sub_46A1F0(v2);
  }
  else
  {
    dword_4B1134 = 5;
    dword_4B1138 = 5;
    sub_41F740();
  }
  sub_435520(100 * dword_4B1134 / 5);
  sub_435550(100 * dword_4B1138 / 5);
  v3 = -1;
  return nullsub_2(v2);
}
