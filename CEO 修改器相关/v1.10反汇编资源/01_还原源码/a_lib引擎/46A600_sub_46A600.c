// 函数 0x46a600  sub_46A600  size=0x5C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_46A600()
{
  CHAR Text[256]; // [esp+0h] [ebp-104h] BYREF

  if ( dword_8DBCB0 != dword_8DBCB4 )
  {
    sprintf(Text, "picload_count=%d\npicfree_count=%d", dword_8DBCB0, dword_8DBCB4);
    MessageBoxA(0, Text, "a_pic_load_count != free_count !!", 0);
  }
}
