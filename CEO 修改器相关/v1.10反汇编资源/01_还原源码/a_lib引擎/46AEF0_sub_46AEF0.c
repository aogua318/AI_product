// 函数 0x46aef0  sub_46AEF0  size=0x11D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46AEF0@<eax>(const char *a1@<ecx>, int a2@<ebx>, void *a3@<edi>)
{
  char *v4; // eax
  int Buffer; // [esp+8h] [ebp-120h] BYREF
  FILE *v8; // [esp+Ch] [ebp-11Ch] BYREF
  char v9; // [esp+13h] [ebp-115h] BYREF
  char FileName[260]; // [esp+14h] [ebp-114h] BYREF
  int v11; // [esp+124h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)&v8);
  v11 = 0;
  strcpy(FileName, a1);
  v4 = &v9;
  while ( *++v4 )
    ;
  strcpy(v4, ".idx1");
  if ( sub_46A040(&v8, FileName) && (sub_46A320(&v8, &Buffer, 4u), Buffer > a2) )
  {
    sub_46A2E0(&v8, 4 * a2 + 4);
    sub_46A320(&v8, a3, 4u);
    sub_46A1F0((int *)&v8);
    v11 = -1;
    nullsub_2(&v8);
    return 1;
  }
  else
  {
    v11 = -1;
    nullsub_2(&v8);
    return 0;
  }
}
