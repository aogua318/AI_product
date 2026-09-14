// 函数 0x4579a0  sub_4579A0  size=0x21A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4579A0()
{
  char *v0; // eax
  char v1; // al
  int v2; // esi
  char *v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  char *v9; // edx
  char v10; // cl
  char *v11; // eax
  int v12; // esi
  int v13; // edx
  char v14; // cl
  _BYTE v16[12]; // [esp+Ch] [ebp-120h] BYREF
  int v17; // [esp+18h] [ebp-114h]
  char String[256]; // [esp+1Ch] [ebp-110h] BYREF
  int v19; // [esp+128h] [ebp-4h]

  sub_464410(v16);
  v19 = 0;
  v0 = (char *)sub_47C740("data\\product1.csv");
  if ( !sub_464420(v0) )
  {
    MessageBoxA(hWnd, "init_prodlist failed", "error", 0);
    exit(1);
  }
  v1 = 0;
  v2 = 0;
  dword_8C5A4C = 0;
  if ( v17 > 0 )
  {
    do
    {
      v3 = (char *)sub_4646A0(0, v2);
      v4 = (char *)(String - v3);
      do
      {
        v5 = *v3;
        v3[(_DWORD)v4] = *v3;
        ++v3;
      }
      while ( v5 );
      if ( sub_438150(String) )
      {
        if ( sub_4646D0(23, v2) )
        {
          v6 = atoi(String) + 1;
          if ( v6 > dword_8C5A4C )
            dword_8C5A4C = v6;
        }
      }
      ++v2;
    }
    while ( v2 < v17 );
    v1 = dword_8C5A4C;
  }
  v7 = 0;
  *(_DWORD *)dword_8C5A30 = sub_465E40(20 * v1, (int)"face_freeplay.cpp", 86);
  for ( dword_8C5A4C = 0; v7 < v17; ++v7 )
  {
    v8 = (char *)sub_4646A0(0, v7);
    v9 = (char *)(String - v8);
    do
    {
      v10 = *v8;
      v8[(_DWORD)v9] = *v8;
      ++v8;
    }
    while ( v10 );
    if ( sub_438150(String) && sub_4646D0(23, v7) )
    {
      byte_8C59B0[dword_8C5A4C] = atoi(String);
      v11 = (char *)sub_4646A0(1, v7);
      v12 = dword_8C5A4C;
      v13 = 20 * dword_8C5A4C - (_DWORD)v11 + *(_DWORD *)dword_8C5A30;
      do
      {
        v14 = *v11;
        v11[v13] = *v11;
        ++v11;
      }
      while ( v14 );
      dword_8C5A4C = v12 + 1;
    }
  }
  sub_464650(v16);
  v19 = -1;
  sub_464B50(v16);
  return 1;
}
