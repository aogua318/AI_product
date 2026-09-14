// 函数 0x46c250  sub_46C250  size=0x2F4  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46C250(LPDIRECTSOUNDBUFFER *this, LPSTR pszFileName, int a3)
{
  unsigned int v4; // kr00_4
  int v7; // [esp+10h] [ebp-128h]
  void *Src; // [esp+14h] [ebp-124h] BYREF
  void *Buffer; // [esp+18h] [ebp-120h] BYREF
  FILE *v10[2]; // [esp+1Ch] [ebp-11Ch] BYREF
  size_t ElementSize; // [esp+24h] [ebp-114h] BYREF
  char FileName[256]; // [esp+28h] [ebp-110h] BYREF
  int v13; // [esp+134h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v10);
  v13 = 0;
  v7 = 0;
  *(this + 1) = 0;
  strcpy(FileName, pszFileName);
  sub_464100(FileName);
  v4 = strlen(FileName);
  if ( !strcmp(&FileName[v4 - 4], ".WAV") )
  {
    strcpy(&FileName[v4 - 4], ".WBV");
    if ( sub_46A040(v10, FileName) )
    {
      Buffer = sub_465E40(18, "a_lib\\a_dsound.cpp", 155);
      sub_46A320(v10, Buffer, 0x12u);
      sub_46A320(v10, &ElementSize, 4u);
      Src = sub_465E40(ElementSize, "a_lib\\a_dsound.cpp", 158);
      sub_46A320(v10, Src, ElementSize);
LABEL_9:
      sub_46A1F0((int *)v10);
      goto LABEL_10;
    }
  }
  if ( sub_46F810(pszFileName, (int)&ElementSize, (int)&Buffer, (int)&Src) )
  {
    v13 = -1;
    nullsub_2(v10);
    return 0;
  }
  if ( a3 && !strcmp(&FileName[v4 - 4], (const char *)&dword_4A4E88) )
  {
    sub_469F90(v10, FileName);
    sub_46A360((int)v10, Buffer, 0x12u);
    sub_46A360((int)v10, &ElementSize, 4u);
    sub_46A360((int)v10, Src, ElementSize);
    goto LABEL_9;
  }
LABEL_10:
  if ( sub_46C110(this, ElementSize, (int)Buffer) )
  {
    if ( sub_46C180(this, 0, ElementSize, (char *)Src) )
    {
      v7 = 1;
    }
    else
    {
      (*this)->lpVtbl->Release(*this);
      *this = 0;
    }
  }
  sub_465FE0((int)Src, "a_lib\\a_dsound.cpp", 187);
  sub_465FE0((int)Buffer, "a_lib\\a_dsound.cpp", 188);
  v13 = -1;
  nullsub_2(v10);
  return v7;
}
