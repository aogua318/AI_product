// 函数 0x467290  sub_467290  size=0x139  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_467290@<eax>(const char *a1@<ecx>, int a2@<edi>, void *a3)
{
  char *v4; // eax
  int v6; // eax
  int v7; // esi
  _BYTE v9[8]; // [esp+8h] [ebp-124h] BYREF
  void *v10; // [esp+10h] [ebp-11Ch]
  int Buffer; // [esp+14h] [ebp-118h] BYREF
  char FileName[260]; // [esp+18h] [ebp-114h] BYREF
  int v13; // [esp+128h] [ebp-4h]

  v10 = a3;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v9);
  v13 = 0;
  strcpy(FileName, a1);
  v4 = (char *)&Buffer + 3;
  while ( *++v4 )
    ;
  strcpy(v4, ".idx2");
  if ( a2 )
    memset(v10, -1, 4 * a2);
  Buffer = 0;
  if ( sub_46A040(FileName) )
  {
    sub_46A320(&Buffer, 4u);
    v6 = Buffer;
    if ( Buffer > a2 )
      v6 = a2;
    if ( v6 )
      sub_46A320(v10, 4 * v6);
    sub_46A1F0(v9);
  }
  v7 = Buffer;
  v13 = -1;
  nullsub_2(v9);
  return v7;
}
