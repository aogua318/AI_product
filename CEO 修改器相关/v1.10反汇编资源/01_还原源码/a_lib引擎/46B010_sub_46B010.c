// 函数 0x46b010  sub_46B010  size=0x246  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46B010(char *Buffer, const char *a2, int a3, int a4)
{
  int v5; // edi
  bool v6; // zf
  const char *v7; // edi
  char *v8; // eax
  _DWORD *v10; // edi
  int Offset; // [esp+10h] [ebp-128h] BYREF
  const char *v13; // [esp+14h] [ebp-124h]
  char ArgList[4]; // [esp+18h] [ebp-120h] BYREF
  FILE *v15; // [esp+1Ch] [ebp-11Ch] BYREF
  char v16; // [esp+23h] [ebp-115h] BYREF
  char Buffera[260]; // [esp+24h] [ebp-114h] BYREF
  int v18; // [esp+134h] [ebp-4h]

  v13 = a2;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)&v15);
  v18 = 0;
  if ( sub_46AEF0(a2, a3, &Offset) )
  {
    v5 = dword_8DBCB4;
    sub_46A670((int)Buffer);
    v6 = v5 == dword_8DBCB4;
    v7 = v13;
    if ( !v6 )
    {
      sprintf(Buffera, "[load second time : %s : %d]\n", v13, a3);
      printf(Buffera);
      sub_4643C0(Buffera);
    }
    strcpy(Buffera, v7);
    v8 = &v16;
    while ( *++v8 )
      ;
    strcpy(v8, ".pic1");
    sub_46A040(&v15, Buffera);
    sub_46A2E0(&v15, Offset);
    sub_46A320(&v15, Buffer, 0x12u);
    sub_46A320(&v15, ArgList, 4u);
    if ( *(_DWORD *)ArgList )
    {
      v10 = sub_465E40(*(int *)ArgList, "a_lib\\a_pic.cpp", 1011);
      sub_46A320(&v15, v10, *(size_t *)ArgList);
      if ( a4 )
      {
        *(_DWORD *)(Buffer + 18) = a4;
        *((_WORD *)Buffer + 11) = 0;
      }
      else
      {
        *(_DWORD *)(Buffer + 18) = sub_465E40(*(_DWORD *)(Buffer + 14), "a_lib\\a_pic.cpp", 1015);
        *((_WORD *)Buffer + 11) = 1;
      }
      sub_46D7E0(*(_DWORD *)(Buffer + 18), Buffer + 14, v10, *(_DWORD *)ArgList);
      sub_465FE0((int)v10, "a_lib\\a_pic.cpp", 1024);
    }
    sub_46A1F0((int *)&v15);
    if ( !dword_8DBCAC )
    {
      atexit(sub_46A600);
      dword_8DBCAC = 1;
    }
    if ( *((_WORD *)Buffer + 11) )
      ++dword_8DBCB0;
    v18 = -1;
    nullsub_2(&v15);
    return 1;
  }
  else
  {
    *(_DWORD *)(Buffer + 14) = 0;
    *(_DWORD *)(Buffer + 18) = 0;
    v18 = -1;
    nullsub_2(&v15);
    return 0;
  }
}
