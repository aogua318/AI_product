// 函数 0x46a040  sub_46A040  size=0x1A8  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A040(FILE **this, char *FileName)
{
  const char *v2; // esi
  FILE *v4; // eax
  signed int v5; // eax
  char *v6; // eax
  int v7; // edx
  char v8; // cl
  char *v9; // eax
  FILE *v11; // esi
  int v13[63]; // [esp+Ch] [ebp-204h] BYREF
  char v14; // [esp+10Bh] [ebp-105h] BYREF
  char v15[256]; // [esp+10Ch] [ebp-104h] BYREF

  v2 = FileName;
  v4 = fopen(FileName, "rb");
  *this = v4;
  *(this + 1) = 0;
  if ( v4 )
    goto LABEL_15;
  strcpy(v15, FileName);
  v5 = strlen(FileName) - 1;
  if ( v5 >= 0 )
  {
    while ( v15[v5] != 92 )
    {
      if ( --v5 < 0 )
        goto LABEL_14;
    }
    v15[v5] = 0;
    v6 = &v15[v5 + 1];
    v7 = (char *)v13 - v6;
    do
    {
      v8 = *v6;
      v6[v7] = *v6;
      ++v6;
    }
    while ( v8 );
    v9 = &v14;
    while ( *++v9 )
      ;
    strcpy(v9, ".apkg");
    v11 = (FILE *)sub_465E40(20, "a_lib\\a_file.cpp", 315);
    if ( sub_46F150(v15, (int)v13) )
    {
      *this = v11;
      *(this + 1) = (FILE *)1;
    }
    else
    {
      sub_465FE0((int)v11, "a_lib\\a_file.cpp", 321);
    }
    v2 = FileName;
  }
LABEL_14:
  if ( *this )
  {
LABEL_15:
    if ( dword_4B3978 )
    {
      atexit(sub_469D70);
      dword_4B3978 = 0;
    }
    ++dword_8DBCA4;
    if ( dword_8DBCA8 )
      sub_4643C0("OpenRO(\"%s\") ok:%d", v2, *this);
    return 1;
  }
  else
  {
    if ( dword_8DBCA8 )
      sub_4643C0("OpenRO(\"%s\") fail", v2);
    return 0;
  }
}
