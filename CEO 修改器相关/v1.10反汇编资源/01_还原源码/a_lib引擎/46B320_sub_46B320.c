// 函数 0x46b320  sub_46B320  size=0x187  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46B320@<eax>(const char *a1@<ecx>, int a2@<edi>, void *a3)
{
  char *v4; // eax
  int v6; // eax
  int v7; // esi
  FILE *v9[2]; // [esp+8h] [ebp-124h] BYREF
  void *v10; // [esp+10h] [ebp-11Ch]
  int Buffer; // [esp+14h] [ebp-118h] BYREF
  char FileName[260]; // [esp+18h] [ebp-114h] BYREF
  int v13; // [esp+128h] [ebp-4h]

  v10 = a3;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v9);
  v13 = 0;
  if ( (dword_8DBCC0 & 1) == 0 )
  {
    dword_8DBCC0 |= 1u;
    LOBYTE(v13) = 1;
    sub_464A40(dword_8DBCB8);
    atexit(sub_4A1020);
    LOBYTE(v13) = 0;
  }
  sub_464A60(dword_8DBCB8, ".", 0xFFFFFFFF, 0, 0);
  strcpy(FileName, a1);
  v4 = (char *)&Buffer + 3;
  while ( *++v4 )
    ;
  strcpy(v4, ".idx1");
  if ( a2 )
    memset(v10, -1, 4 * a2);
  Buffer = 0;
  if ( sub_46A040(v9, FileName) )
  {
    sub_46A320(v9, &Buffer, 4u);
    v6 = Buffer;
    if ( Buffer > a2 )
      v6 = a2;
    if ( v6 )
      sub_46A320(v9, v10, 4 * v6);
    sub_46A1F0((int *)v9);
  }
  sub_464B40(dword_8DBCB8);
  v7 = Buffer;
  v13 = -1;
  nullsub_2(v9);
  return v7;
}
