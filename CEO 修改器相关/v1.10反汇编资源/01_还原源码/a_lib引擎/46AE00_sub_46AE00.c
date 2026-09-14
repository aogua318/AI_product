// 函数 0x46ae00  sub_46AE00  size=0xE8  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46AE00(const char *a1)
{
  char *v1; // eax
  int v3; // esi
  FILE *v5[2]; // [esp+8h] [ebp-120h] BYREF
  int Buffer; // [esp+10h] [ebp-118h] BYREF
  char FileName[260]; // [esp+14h] [ebp-114h] BYREF
  int v8; // [esp+124h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v5);
  v8 = 0;
  Buffer = 0;
  strcpy(FileName, a1);
  v1 = (char *)&Buffer + 3;
  while ( *++v1 )
    ;
  strcpy(v1, ".idx1");
  if ( sub_46A040(v5, FileName) )
  {
    sub_46A320(v5, &Buffer, 4u);
    sub_46A1F0((int *)v5);
  }
  v3 = Buffer;
  v8 = -1;
  nullsub_2(v5);
  return v3;
}
