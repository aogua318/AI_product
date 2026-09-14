// 函数 0x464420  sub_464420  size=0x225  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464420(int *this, char *FileName)
{
  signed int v3; // edi
  void *v4; // eax
  signed int v5; // eax
  int v6; // ecx
  int v7; // ebx
  char v8; // dl
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  signed int v13; // eax
  int v14; // ecx
  char v15; // bl
  int v16; // ecx
  _BYTE *v17; // edi
  const char *v18; // ecx
  int v19; // ecx
  char v20; // bl
  int v21; // ecx
  _BYTE *v22; // edi
  const char *v23; // ecx
  int v24; // ecx
  char v25; // bl
  _BYTE v27[8]; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE *v28; // [esp+18h] [ebp-14h]
  signed int v29; // [esp+1Ch] [ebp-10h]
  int v30; // [esp+28h] [ebp-4h]
  char *FileNamea; // [esp+34h] [ebp+8h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v27);
  v30 = 0;
  sub_46A040(FileName);
  v3 = sub_46A270(v27);
  v29 = v3;
  v4 = (void *)sub_465E40(v3 + 1, (int)"a_lib\\a_util.cpp", 257);
  *(this + 1) = (int)v4;
  sub_46A320(v4, v3);
  sub_46A1F0(v27);
  *(_BYTE *)(v3 + *(this + 1)) = 0;
  v5 = 0;
  v6 = 1;
  *(this + 3) = 0;
  *(this + 2) = 0;
  if ( v3 > 0 )
  {
    v7 = *(this + 1);
    do
    {
      v8 = *(_BYTE *)(v7 + v5);
      if ( v8 == 9 )
        ++v6;
      if ( v8 == 13 )
      {
        ++*(this + 3);
        if ( v6 > *(this + 2) )
          *(this + 2) = v6;
        v6 = 1;
      }
      ++v5;
    }
    while ( v5 < v3 );
  }
  v9 = sub_465E40(4 * *((_BYTE *)this + 8) * *((_BYTE *)this + 12), (int)"a_lib\\a_util.cpp", 277);
  v10 = *(this + 2) * *(this + 3);
  *this = v9;
  v11 = 0;
  if ( v10 > 0 )
  {
    do
      *(_DWORD *)(*this + 4 * v11++) = v3 + *(this + 1);
    while ( v11 < *(this + 2) * *(this + 3) );
  }
  v12 = 0;
  v13 = 0;
  FileNamea = 0;
  if ( v3 > 0 )
  {
    do
    {
      *(_DWORD *)(*this + 4 * (v12 + (_DWORD)FileNamea * *(this + 2))) = v13 + *(this + 1);
      if ( v13 < v29 )
      {
        v14 = *(this + 1);
        while ( 1 )
        {
          v15 = *(_BYTE *)(v14 + v13);
          if ( v15 == 9 )
            break;
          if ( v15 == 13 )
          {
            *(_BYTE *)(v14 + v13) = 0;
            v21 = v12 + (_DWORD)FileNamea * *(this + 2);
            v22 = *(_BYTE **)(*this + 4 * v21);
            if ( *v22 == 34 )
            {
              v23 = *(const char **)(*this + 4 * v21);
              v28 = v22 + 1;
              v24 = &v23[strlen(v23)] - v22;
              if ( v24 )
              {
                if ( v22[v24 - 1] == 34 )
                {
                  v22[v24 - 1] = v25;
                  ++*(_DWORD *)(*this + 4 * (v12 + (_DWORD)FileNamea * *(this + 2)));
                }
              }
            }
            ++FileNamea;
            v12 = 0;
            *(_BYTE *)(v13 + *(this + 1)) = 0;
            *(_BYTE *)(++v13 + *(this + 1)) = 0;
            goto LABEL_29;
          }
          if ( ++v13 >= v29 )
            goto LABEL_29;
        }
        *(_BYTE *)(v14 + v13) = 0;
        v16 = v12 + (_DWORD)FileNamea * *(this + 2);
        v17 = *(_BYTE **)(*this + 4 * v16);
        if ( *v17 == 34 )
        {
          v18 = *(const char **)(*this + 4 * v16);
          v28 = v17 + 1;
          v19 = &v18[strlen(v18)] - v17;
          if ( v19 )
          {
            if ( v17[v19 - 1] == 34 )
            {
              v17[v19 - 1] = v20;
              ++*(_DWORD *)(*this + 4 * (v12 + (_DWORD)FileNamea * *(this + 2)));
            }
          }
        }
        ++v12;
      }
LABEL_29:
      ++v13;
    }
    while ( v13 < v29 );
  }
  sub_46A1F0(v27);
  v30 = -1;
  nullsub_2(v27);
  return 1;
}
