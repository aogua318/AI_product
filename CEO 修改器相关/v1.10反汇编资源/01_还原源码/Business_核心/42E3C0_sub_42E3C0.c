// 函数 0x42e3c0  sub_42E3C0  size=0x211  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_42E3C0()
{
  char *v0; // eax
  int v1; // esi
  char *v2; // eax
  char *v3; // edx
  char v4; // cl
  int v5; // eax
  int v6; // edi
  char *v7; // eax
  char *v8; // edx
  char v9; // cl
  int v10; // esi
  int v11; // eax
  int v12; // eax
  _BYTE v14[12]; // [esp+Ch] [ebp-420h] BYREF
  int v15; // [esp+18h] [ebp-414h]
  char String[1024]; // [esp+1Ch] [ebp-410h] BYREF
  int v17; // [esp+428h] [ebp-4h]

  sub_464410(v14);
  v17 = 0;
  v0 = (char *)sub_47C740("data\\people_type.csv");
  if ( sub_464420(v0) )
  {
    v1 = 0;
    for ( dword_4D10B4 = 0; v1 < v15; ++v1 )
    {
      v2 = (char *)sub_4646A0(0, v1);
      v3 = (char *)(String - v2);
      do
      {
        v4 = *v2;
        v2[(_DWORD)v3] = *v2;
        ++v2;
      }
      while ( v4 );
      if ( sub_438150(String) )
      {
        v5 = atoi(String) + 1;
        if ( v5 > dword_4D10B4 )
          dword_4D10B4 = v5;
      }
    }
    v6 = 0;
    for ( *(_DWORD *)dword_4D10B0 = sub_465E40(8 * dword_4D10B4, (int)"people_type.cpp", 27); v6 < v15; ++v6 )
    {
      v7 = (char *)sub_4646A0(0, v6);
      v8 = (char *)(String - v7);
      do
      {
        v9 = *v7;
        v7[(_DWORD)v8] = *v7;
        ++v7;
      }
      while ( v9 );
      if ( sub_438150(String) )
      {
        v10 = *(_DWORD *)dword_4D10B0 + 8 * atoi(String);
        *(_WORD *)v10 = sub_4646D0(1, v6);
        v11 = sub_4646A0(2, v6);
        *(_BYTE *)(v10 + 2) = sub_4380F0(v11);
        v12 = sub_4646D0(3, v6) - 1950;
        if ( v12 > 100 )
          LOBYTE(v12) = -1;
        *(_BYTE *)(v10 + 3) = v12;
        *(_BYTE *)(v10 + 4) = sub_4646D0(4, v6) + 98;
      }
    }
    sub_464650(v14);
    v17 = -1;
    sub_464B50(v14);
    return 1;
  }
  else
  {
    v17 = -1;
    sub_464B50(v14);
    return 0;
  }
}
