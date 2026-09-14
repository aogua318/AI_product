// 函数 0x47b750  sub_47B750  size=0x1BC  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47B750(char *Buffer, const char *a2, int a3)
{
  char *v5; // eax
  char *v7; // esi
  FILE *v8; // [esp+Ch] [ebp-118h] BYREF
  char v9; // [esp+13h] [ebp-111h] BYREF
  char FileName[256]; // [esp+14h] [ebp-110h] BYREF
  int v11; // [esp+120h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)&v8);
  v11 = 0;
  strcpy(FileName, a2);
  sub_464100(FileName);
  if ( !*((_DWORD *)Buffer + 75) || strcmp(FileName, Buffer + 312) )
  {
    if ( !sub_46AE00(a2) )
      goto LABEL_4;
    *((_DWORD *)Buffer + 76) = 0;
    *((_DWORD *)Buffer + 77) = 0;
    v5 = &v9;
    while ( *++v5 )
      ;
    strcpy(v5, ".fts");
    if ( !sub_46A040(&v8, FileName) )
    {
LABEL_4:
      v11 = -1;
      nullsub_2(&v8);
      return 0;
    }
    sub_47B730((int *)Buffer);
    sub_46A320(&v8, Buffer, 4u);
    sub_46A320(&v8, Buffer + 4, 4u);
    sub_46A1F0((int *)&v8);
    sub_46B4C0((int *)Buffer + 2, a2, a3, 0);
    *((_DWORD *)Buffer + 75) = 1;
    v7 = Buffer + 312;
    strcpy(v7, a2);
    sub_464100(v7);
  }
  v11 = -1;
  nullsub_2(&v8);
  return 1;
}
