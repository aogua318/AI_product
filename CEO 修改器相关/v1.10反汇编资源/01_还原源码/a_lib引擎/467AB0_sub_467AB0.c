// 函数 0x467ab0  sub_467AB0  size=0x2B7  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_467AB0(int *this, const char *a2)
{
  int v3; // edi
  _DWORD *v5; // eax
  char *v6; // eax
  char *v7; // esi
  char v8; // cl
  char *v9; // eax
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // esi
  size_t v15; // esi
  int v16; // eax
  int v17; // ecx
  int Buffer[6]; // [esp+10h] [ebp-144h] BYREF
  int v19; // [esp+28h] [ebp-12Ch]
  char v20[4]; // [esp+2Ch] [ebp-128h]
  _BYTE v21[8]; // [esp+30h] [ebp-124h] BYREF
  char *v22; // [esp+38h] [ebp-11Ch]
  char ArgList[4]; // [esp+3Ch] [ebp-118h] BYREF
  char FileName[260]; // [esp+40h] [ebp-114h] BYREF
  int v25; // [esp+150h] [ebp-4h]

  v22 = (char *)a2;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v21);
  v25 = 0;
  sub_466C50(Buffer);
  LOBYTE(v25) = 1;
  sub_4676A0(this);
  v3 = sub_4671A0(a2);
  if ( v3 > 0 )
  {
    *(this + 3) = 1;
    *(_DWORD *)v20 = sub_465E40(4 * v3, "a_lib\\a_pic2.cpp", 940);
    sub_467290(a2, v3, *(void **)v20);
    *(this + 2) = v3;
    v5 = sub_465E40(24 * v3, "a_lib\\a_pic2.cpp", 945);
    *this = (int)v5;
    memset(v5, 0, 24 * v3);
    v6 = v22;
    v7 = (char *)(FileName - v22);
    do
    {
      v8 = *v6;
      v6[(_DWORD)v7] = *v6;
      ++v6;
    }
    while ( v8 );
    v9 = &ArgList[3];
    while ( *++v9 )
      ;
    strcpy(v9, ".pic2");
    sub_46A040(FileName);
    v11 = 0;
    *(_DWORD *)ArgList = 0;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)v20 + 4 * v11) != -1 )
      {
        sub_46A2E0(*(_DWORD *)(*(_DWORD *)v20 + 4 * v11));
        sub_46A320(Buffer, 0x10u);
        *(_DWORD *)ArgList += Buffer[2] + Buffer[3];
      }
      ++v11;
    }
    while ( v11 < v3 );
    v12 = sub_465E40(*(int *)ArgList, "a_lib\\a_pic2.cpp", 959);
    *(this + 1) = (int)v12;
    *(_DWORD *)ArgList = v12;
    v13 = 0;
    v22 = 0;
    v14 = 0;
    v19 = 0;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)v20 + 4 * v13) != -1 )
      {
        sub_46A2E0(*(_DWORD *)(*(_DWORD *)v20 + 4 * v13));
        sub_46A320((void *)(v14 + *this), 0x10u);
        v15 = *(_DWORD *)(v14 + *this + 8) + *(_DWORD *)(v14 + *this + 12);
        sub_46A320(*(void **)ArgList, v15);
        v16 = *(_DWORD *)ArgList;
        v17 = v19;
        *(_DWORD *)(*this + v19 + 16) = *(_DWORD *)ArgList;
        *(_DWORD *)ArgList = v15 + v16;
        v13 = (int)v22;
        v14 = v17;
      }
      ++v13;
      v14 += 24;
      v22 = (char *)v13;
      v19 = v14;
    }
    while ( v13 < v3 );
    sub_46A1F0(v21);
    sub_465FE0(*(int *)v20, "a_lib\\a_pic2.cpp", 972);
    LOBYTE(v25) = 0;
    sub_467A90(Buffer);
    v25 = -1;
    nullsub_2(v21);
    return 1;
  }
  else
  {
    LOBYTE(v25) = 0;
    sub_467A90(Buffer);
    v25 = -1;
    nullsub_2(v21);
    return 0;
  }
}
