// 函数 0x467d80  sub_467D80  size=0x4EA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_467D80(int *this, const char *a2, int a3, int a4)
{
  char *v4; // ebx
  int v6; // edi
  int v8; // ecx
  char *v9; // eax
  char v11; // al
  char *v12; // eax
  int *v14; // ebx
  char *v15; // edx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int i; // ecx
  int v22; // eax
  bool v23; // cc
  _WORD *v24; // eax
  size_t v25; // edi
  _DWORD *v26; // eax
  int v27; // ebx
  _DWORD *v28; // eax
  int v29; // edi
  int v30[6]; // [esp+10h] [ebp-2C4h] BYREF
  _BYTE v31[8]; // [esp+28h] [ebp-2ACh] BYREF
  int v32; // [esp+30h] [ebp-2A4h]
  int v33; // [esp+34h] [ebp-2A0h]
  char v34[8]; // [esp+38h] [ebp-29Ch] BYREF
  char ArgList[4]; // [esp+40h] [ebp-294h]
  int v36; // [esp+44h] [ebp-290h]
  _BYTE v37[8]; // [esp+48h] [ebp-28Ch] BYREF
  size_t Size; // [esp+50h] [ebp-284h]
  void *Buffer; // [esp+54h] [ebp-280h] BYREF
  char v40[259]; // [esp+58h] [ebp-27Ch] BYREF
  char v41; // [esp+15Bh] [ebp-179h] BYREF
  char FileName[260]; // [esp+15Ch] [ebp-178h] BYREF
  CHAR Text[100]; // [esp+260h] [ebp-74h] BYREF
  int v44; // [esp+2D0h] [ebp-4h]

  v4 = (char *)a2;
  v33 = a3;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v34);
  v44 = 0;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v37);
  sub_466C50(v30);
  LOBYTE(v44) = 2;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v31);
  LOBYTE(v44) = 3;
  sub_4676E0(this);
  strcpy((char *)this, a2);
  v6 = sub_4671A0(a2);
  if ( v6 )
  {
    v8 = v33;
    *(this + 65) = v6;
    *(this + 66) = v8;
    *(this + 67) = a4;
    *(this + 69) = (int)sub_465E40(2 * v6, "a_lib\\a_pic2.cpp", 1036);
    Size = 4 * v6;
    *(_DWORD *)ArgList = sub_465E40(4 * v6, "a_lib\\a_pic2.cpp", 1038);
    Buffer = sub_465E40(Size, "a_lib\\a_pic2.cpp", 1039);
    sub_467290(a2, v6, *(void **)ArgList);
    strcpy(FileName, a2);
    v9 = &v41;
    while ( *++v9 )
      ;
    strcpy(v9, ".ch2");
    if ( sub_46A040(FileName) )
    {
      sub_46A320(Buffer, Size);
    }
    else
    {
      do
      {
        v11 = *v4;
        v4[v40 - a2] = *v4;
        ++v4;
      }
      while ( v11 );
      v12 = (char *)&Buffer + 3;
      while ( *++v12 )
        ;
      strcpy(v12, ".pic2");
      sub_46A040(v40);
      if ( v6 > 0 )
      {
        v14 = *(int **)ArgList;
        v15 = (char *)Buffer - *(_DWORD *)ArgList;
        v36 = (int)Buffer - *(_DWORD *)ArgList;
        v32 = v6;
        do
        {
          v16 = 0;
          if ( *v14 != -1 )
          {
            sub_46A2E0(*v14);
            sub_46A320(v30, 0x10u);
            v16 = v30[3] + v30[2];
            v15 = (char *)v36;
          }
          *(int *)((char *)v14++ + (_DWORD)v15) = v16;
          --v32;
        }
        while ( v32 );
      }
      sub_46A1F0(v34);
      sub_469F90(FileName);
      sub_46A360(Buffer, Size);
    }
    sub_46A1F0(v37);
    if ( !*(this + 67) )
    {
      v17 = 0;
      v18 = v6 / 2;
      v36 = v6 / 2;
      do
      {
        v17 += 64;
        v19 = 0;
        v20 = 0;
        if ( v6 > 0 )
        {
          do
          {
            if ( *((_DWORD *)Buffer + v20) < v17 )
              ++v19;
            ++v20;
          }
          while ( v20 < v6 );
          v18 = v36;
        }
      }
      while ( v19 < v18 );
      *(this + 67) = v17;
    }
    for ( i = 0; i < v6; ++i )
    {
      *(_WORD *)(*(this + 69) + 2 * i) = (*((_DWORD *)Buffer + i) + *(this + 67) - 1) / *(this + 67);
      v22 = *(this + 69);
      v23 = *(_WORD *)(v22 + 2 * i) < 1;
      v24 = (_WORD *)(v22 + 2 * i);
      if ( v23 )
        *v24 = 1;
      if ( *(__int16 *)(*(this + 69) + 2 * i) > *(this + 66) )
      {
        sprintf(Text, "%s\nline%d", "a_lib\\a_pic2.cpp", 1087);
        MessageBoxA(0, Text, "cache too small", 0);
        exit(1);
      }
    }
    sub_465FE0((int)Buffer, "a_lib\\a_pic2.cpp", 1090);
    sub_465FE0(*(int *)ArgList, "a_lib\\a_pic2.cpp", 1091);
    v25 = Size;
    v26 = sub_465E40(Size, "a_lib\\a_pic2.cpp", 1095);
    *(this + 68) = (int)v26;
    memset(v26, -1, v25);
    v27 = v33;
    *(this + 70) = (int)sub_465E40(v33 * *(this + 67), "a_lib\\a_pic2.cpp", 1097);
    v28 = sub_465E40(36 * v27, "a_lib\\a_pic2.cpp", 1098);
    *(this + 71) = (int)v28;
    memset(v28, 0, 36 * v27);
    if ( v27 > 0 )
    {
      v29 = 0;
      do
      {
        *(_DWORD *)(v29 + *(this + 71) + 28) = -1;
        *(_DWORD *)(v29 + *(this + 71) + 24) = GetTickCount() - 100000;
        *(_WORD *)(v29 + *(this + 71) + 32) = 1;
        v29 += 36;
        --v27;
      }
      while ( v27 );
    }
    *(this + 72) = 1;
    LOBYTE(v44) = 2;
    nullsub_2(v31);
    LOBYTE(v44) = 1;
    sub_467A90(v30);
    LOBYTE(v44) = 0;
    nullsub_2(v37);
    v44 = -1;
    nullsub_2(v34);
    return 1;
  }
  else
  {
    LOBYTE(v44) = 2;
    nullsub_2(v31);
    LOBYTE(v44) = 1;
    sub_467A90(v30);
    LOBYTE(v44) = 0;
    nullsub_2(v37);
    v44 = -1;
    nullsub_2(v34);
    return 0;
  }
}
