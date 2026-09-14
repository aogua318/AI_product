// 函数 0x41f740  sub_41F740  size=0x92  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_41F740()
{
  char *v0; // eax
  _BYTE v2[8]; // [esp+4h] [ebp-14h] BYREF
  int v3; // [esp+14h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v2);
  v3 = 0;
  v0 = (char *)sub_47C740("option.dat");
  if ( sub_469F90(v0) )
  {
    sub_46A360(&dword_4B1134, 4u);
    sub_46A360(&dword_4B1138, 4u);
    sub_46A1F0(v2);
  }
  v3 = -1;
  return nullsub_2(v2);
}
