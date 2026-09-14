// 函数 0x46a540  sub_46A540  size=0x32  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46A540(char *FileName)
{
  FILE **v1; // ecx
  int v3[2]; // [esp+0h] [ebp-8h] BYREF

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v3);
  if ( !sub_46A040(v1, FileName) )
    return 0;
  sub_46A1F0(v3);
  return 1;
}
