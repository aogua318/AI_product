// 函数 0x46b4c0  sub_46B4C0  size=0x4EA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46B4C0(int *this, const char *a2, int a3, int a4)
{
  char *v4; // ebx
  int v6; // edi
  int v8; // ecx
  char *v9; // eax
  char v11; // al
  char *v12; // eax
  _DWORD *v14; // ebx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int i; // ecx
  int v21; // eax
  bool v22; // cc
  _WORD *v23; // eax
  size_t v24; // edi
  _DWORD *v25; // eax
  int v26; // ebx
  _DWORD *v27; // eax
  int v28; // edi
  _WORD v29[7]; // [esp+10h] [ebp-2C4h] BYREF
  int v30; // [esp+1Eh] [ebp-2B6h]
  _BYTE v31[8]; // [esp+28h] [ebp-2ACh] BYREF
  int v32; // [esp+30h] [ebp-2A4h]
  int v33; // [esp+34h] [ebp-2A0h]
  FILE *v34[2]; // [esp+38h] [ebp-29Ch] BYREF
  char ArgList[4]; // [esp+40h] [ebp-294h]
  int v36; // [esp+44h] [ebp-290h]
  FILE *v37[2]; // [esp+48h] [ebp-28Ch] BYREF
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
  sub_46B300(v29);
  LOBYTE(v44) = 2;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v31);
  LOBYTE(v44) = 3;
  sub_46B280(this);
  strcpy((char *)this, a2);
  v6 = sub_46AE00(a2);
  if ( v6 )
  {
    v8 = v33;
    *(this + 65) = v6;
    *(this + 66) = v8;
    *(this + 67) = a4;
    *(this + 69) = (int)sub_465E40(2 * v6, "a_lib\\a_pic.cpp", 1206);
    Size = 4 * v6;
    *(_DWORD *)ArgList = sub_465E40(4 * v6, "a_lib\\a_pic.cpp", 1208);
    Buffer = sub_465E40(Size, "a_lib\\a_pic.cpp", 1209);
    sub_46B320(a2, v6, *(void **)ArgList);
    strcpy(FileName, a2);
    v9 = &v41;
    while ( *++v9 )
      ;
    strcpy(v9, ".ch1");
    if ( sub_46A040(v37, FileName) )
    {
      sub_46A320(v37, Buffer, Size);
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
      strcpy(v12, ".pic1");
      sub_46A040(v34, v40);
      if ( v6 > 0 )
      {
        v14 = Buffer;
        v15 = *(_DWORD *)ArgList - (_DWORD)Buffer;
        v36 = *(_DWORD *)ArgList - (_DWORD)Buffer;
        v32 = v6;
        do
        {
          *v14 = 0;
          if ( *(_DWORD *)((char *)v14 + v15) != -1 )
          {
            sub_46A2E0(v34, *(_DWORD *)((char *)v14 + v15));
            sub_46A320(v34, v29, 0x12u);
            v15 = v36;
            *v14 = v30;
          }
          ++v14;
          --v32;
        }
        while ( v32 );
      }
      sub_46A1F0((int *)v34);
      sub_469F90(v37, FileName);
      sub_46A360((int)v37, Buffer, Size);
    }
    sub_46A1F0((int *)v37);
    if ( !*(this + 67) )
    {
      v16 = 0;
      v17 = v6 / 2;
      v36 = v6 / 2;
      do
      {
        v16 += 64;
        v18 = 0;
        v19 = 0;
        if ( v6 > 0 )
        {
          do
          {
            if ( *((_DWORD *)Buffer + v19) < v16 )
              ++v18;
            ++v19;
          }
          while ( v19 < v6 );
          v17 = v36;
        }
      }
      while ( v18 < v17 );
      *(this + 67) = v16;
    }
    for ( i = 0; i < v6; ++i )
    {
      *(_WORD *)(*(this + 69) + 2 * i) = (*((_DWORD *)Buffer + i) + *(this + 67) - 1) / *(this + 67);
      v21 = *(this + 69);
      v22 = *(_WORD *)(v21 + 2 * i) < 1;
      v23 = (_WORD *)(v21 + 2 * i);
      if ( v22 )
        *v23 = 1;
      if ( *(__int16 *)(*(this + 69) + 2 * i) > *(this + 66) )
      {
        sprintf(Text, "%s\nline%d", "a_lib\\a_pic.cpp", 1259);
        MessageBoxA(0, Text, "cache too small", 0);
        exit(1);
      }
    }
    sub_465FE0((int)Buffer, "a_lib\\a_pic.cpp", 1262);
    sub_465FE0(*(int *)ArgList, "a_lib\\a_pic.cpp", 1263);
    v24 = Size;
    v25 = sub_465E40(Size, "a_lib\\a_pic.cpp", 1267);
    *(this + 68) = (int)v25;
    memset(v25, -1, v24);
    v26 = v33;
    *(this + 70) = (int)sub_465E40(v33 * *(this + 67), "a_lib\\a_pic.cpp", 1269);
    v27 = sub_465E40(36 * v26, "a_lib\\a_pic.cpp", 1270);
    *(this + 71) = (int)v27;
    memset(v27, 0, 36 * v26);
    if ( v26 > 0 )
    {
      v28 = 0;
      do
      {
        *(_DWORD *)(v28 + *(this + 71) + 28) = -1;
        *(_DWORD *)(v28 + *(this + 71) + 24) = GetTickCount() - 100000;
        *(_WORD *)(v28 + *(this + 71) + 32) = 1;
        v28 += 36;
        --v26;
      }
      while ( v26 );
    }
    *(this + 72) = 1;
    LOBYTE(v44) = 2;
    nullsub_2(v31);
    LOBYTE(v44) = 1;
    sub_46B310((int)v29);
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
    sub_46B310((int)v29);
    LOBYTE(v44) = 0;
    nullsub_2(v37);
    v44 = -1;
    nullsub_2(v34);
    return 0;
  }
}
