// 函数 0x4674f0  sub_4674F0  size=0x18E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4674F0(void *Buffer, const char *a2, int a3, _DWORD *a4)
{
  char *v5; // eax
  char *v6; // edx
  char v7; // cl
  char *v8; // eax
  _DWORD *v10; // eax
  int v11; // eax
  size_t v12; // eax
  int Offset; // [esp+10h] [ebp-124h] BYREF
  char *v15; // [esp+14h] [ebp-120h]
  _BYTE v16[7]; // [esp+18h] [ebp-11Ch] BYREF
  char v17; // [esp+1Fh] [ebp-115h] BYREF
  char FileName[260]; // [esp+20h] [ebp-114h] BYREF
  int v19; // [esp+130h] [ebp-4h]

  v15 = (char *)a2;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v16);
  v19 = 0;
  if ( sub_4673D0(a2, a3, &Offset) )
  {
    sub_466C70((int *)Buffer);
    v5 = v15;
    v6 = (char *)(FileName - v15);
    do
    {
      v7 = *v5;
      v5[(_DWORD)v6] = *v5;
      ++v5;
    }
    while ( v7 );
    v8 = &v17;
    while ( *++v8 )
      ;
    strcpy(v8, ".pic2");
    if ( !sub_46A040(FileName) )
    {
LABEL_15:
      v19 = -1;
      nullsub_2(v16);
      return 1;
    }
    sub_46A2E0(Offset);
    sub_46A320(Buffer, 0x10u);
    v10 = a4;
    if ( a4 )
    {
      *((_DWORD *)Buffer + 5) = 0;
    }
    else
    {
      v11 = *((_DWORD *)Buffer + 3) + *((_DWORD *)Buffer + 2);
      if ( v11 <= 0 )
      {
LABEL_12:
        v12 = *((_DWORD *)Buffer + 2) + *((_DWORD *)Buffer + 3);
        if ( v12 )
          sub_46A320(*((void **)Buffer + 4), v12);
        sub_46A1F0(v16);
        goto LABEL_15;
      }
      v10 = sub_465E40(v11, "a_lib\\a_pic2.cpp", 862);
      *((_DWORD *)Buffer + 5) = 1;
    }
    *((_DWORD *)Buffer + 4) = v10;
    goto LABEL_12;
  }
  *((_DWORD *)Buffer + 4) = 0;
  v19 = -1;
  nullsub_2(v16);
  return 0;
}
