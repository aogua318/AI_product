// 函数 0x42b6e0  sub_42B6E0  size=0x213  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_42B6E0()
{
  char *v0; // eax
  int i; // esi
  char *v2; // eax
  int v3; // edx
  char v4; // cl
  int v5; // eax
  int j; // edi
  char *v7; // eax
  int v8; // edx
  char v9; // cl
  int v10; // esi
  char *v11; // eax
  int v12; // edx
  char v13; // cl
  _BYTE v15[12]; // [esp+10h] [ebp-120h] BYREF
  int v16; // [esp+1Ch] [ebp-114h]
  _BYTE v17[256]; // [esp+20h] [ebp-110h] BYREF
  int v18; // [esp+12Ch] [ebp-4h]

  sub_464410(v15);
  v18 = 0;
  v0 = (char *)sub_47C740("data\\news.csv");
  if ( sub_464420(v0) )
  {
    dword_4D108C = 0;
    for ( i = 1; i < v16; ++i )
    {
      v2 = (char *)sub_4646A0(0, i);
      v3 = v17 - v2;
      do
      {
        v4 = *v2;
        v2[v3] = *v2;
        ++v2;
      }
      while ( v4 );
      if ( !sub_438150(v17) )
        break;
      ++dword_4D108C;
    }
    v5 = sub_465E40(88 * dword_4D108C, (int)"news.cpp", 37);
    dword_4D108C = 0;
    *(_DWORD *)dword_4D1088 = v5;
    for ( j = 1; j < v16; ++j )
    {
      v7 = (char *)sub_4646A0(0, j);
      v8 = v17 - v7;
      do
      {
        v9 = *v7;
        v7[v8] = *v7;
        ++v7;
      }
      while ( v9 );
      if ( !sub_438150(v17) )
        break;
      v10 = *(_DWORD *)dword_4D1088 + 88 * dword_4D108C;
      *(_BYTE *)v10 = sub_4646D0(1, j) - 1;
      *(_BYTE *)(v10 + 2) = sub_4646D0(2, j);
      *(_BYTE *)(v10 + 3) = sub_4646D0(3, j);
      v11 = (char *)sub_4646A0(4, j);
      v12 = v10 - (_DWORD)v11;
      do
      {
        v13 = *v11;
        v11[v12 + 8] = *v11;
        ++v11;
      }
      while ( v13 );
      *(_BYTE *)(v10 + 1) = sub_4646D0(5, j);
      *(_DWORD *)(v10 + 4) = sub_4646D0(6, j);
      ++dword_4D108C;
    }
    sub_464650(v15);
    v18 = -1;
    sub_464B50(v15);
    return 1;
  }
  else
  {
    v18 = -1;
    sub_464B50(v15);
    return 0;
  }
}
