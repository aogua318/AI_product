// 函数 0x45f540  sub_45F540  size=0x2AC  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __cdecl sub_45F540(int a1, int a2, int a3, const char *a4)
{
  DWORD result; // eax
  char v5; // cl
  int v6; // eax
  int v7; // eax
  void **v8; // ecx
  unsigned int v9; // esi
  int v10; // edi
  int v11; // [esp+1Ch] [ebp+10h]

  if ( (dword_8D5F64 & 1) == 0 )
  {
    dword_8D5F64 |= 1u;
    dword_8D5F60 = GetTickCount();
  }
  result = a2;
  if ( a2 < 0 )
  {
    a2 = -a2;
    result = -a3;
    a3 = -a3;
  }
  else
  {
    if ( dword_4B38B4 != a2 || (result = a3, dword_4B38B0 != a3) || (result = strcmp(byte_8D5E60, a4)) != 0 )
    {
      if ( a1 )
      {
        dword_8D5F60 = GetTickCount();
        result = (DWORD)a4;
        do
        {
          v5 = *(_BYTE *)result;
          *(_BYTE *)(byte_8D5E60 - a4 + result) = *(_BYTE *)result;
          ++result;
        }
        while ( v5 );
        dword_4B38B4 = a2;
        dword_4B38B0 = a3;
      }
      goto LABEL_9;
    }
    if ( !a1 || (result = GetTickCount() - dword_8D5F60, result < 0x7D0) )
    {
LABEL_9:
      if ( dword_8D5D2C )
      {
        sub_47CCD0(&unk_8D5D30);
        result = -1;
        dword_8D5D2C = 0;
        dword_4B38AC = -1;
        dword_4B38A8 = -1;
        byte_8D5E60[0] = 0;
      }
      return result;
    }
  }
  if ( !a1 )
    goto LABEL_9;
  if ( !dword_8D5D2C )
  {
    if ( dword_4B38A4 )
    {
      v6 = sub_47C740("face\\face_hint.fce");
      sub_481C90(&unk_8D5D30, v6, 1);
      atexit(sub_45F530);
      dword_4B38A4 = 0;
    }
    sub_47D1A0(&unk_8D5D30, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1);
    dword_8D5D2C = 1;
  }
  dword_8D5D28 = GetTickCount();
  if ( (_UNKNOWN *)dword_4C30F4[11 * dword_4C4250] != &unk_8D5D30 )
  {
    v7 = 0;
    if ( dword_4C4250 > 0 )
    {
      v8 = (void **)&unk_4C3120;
      do
      {
        if ( *v8 == &unk_8D5D30 )
          break;
        ++v7;
        v8 += 11;
      }
      while ( v7 < dword_4C4250 );
    }
    sub_47D050(v7);
  }
  v9 = (strlen(a4) - 4) >> 1;
  if ( v9 > 5 )
    v9 = 5;
  v11 = a3 - 20;
  v10 = -20 - 12 * v9 + a2;
  if ( v10 < 0 )
    v10 = 0;
  if ( v11 < 0 )
    v11 = 0;
  if ( dword_4B38AC != v10 || dword_4B38A8 != v11 || strcmp(byte_8D5E60, a4) )
  {
    sub_482F10(v10, v11);
    sub_47FF50(a4);
    dword_4B38A8 = v11;
    dword_4B38AC = v10;
    strcpy(byte_8D5E60, a4);
  }
  return sub_4833C0(-1, v9);
}
