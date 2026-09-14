// 函数 0x403ff0  sub_403FF0  size=0x27D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_403FF0()
{
  int v0; // edi
  char *v1; // eax
  char v2; // cl
  int v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  _WORD *v12; // esi
  int i; // ebx
  _BYTE v15[12]; // [esp+10h] [ebp-120h] BYREF
  int v16; // [esp+1Ch] [ebp-114h]
  char String[256]; // [esp+20h] [ebp-110h] BYREF
  int v18; // [esp+12Ch] [ebp-4h]

  sub_464410(v15);
  v0 = 0;
  v18 = 0;
  v1 = (char *)sub_47C740("data\\AI_style.csv");
  if ( sub_464420(v1) )
  {
    v2 = 0;
    v3 = 0;
    for ( dword_4B9914 = 0; v3 < v16; ++v3 )
    {
      v4 = (char *)sub_4646A0(0, v3);
      v5 = (char *)(String - v4);
      do
      {
        v6 = *v4;
        v4[(_DWORD)v5] = *v4;
        ++v4;
      }
      while ( v6 );
      if ( sub_438150(String) )
      {
        v7 = atoi(String);
        v2 = dword_4B9914;
        v8 = v7 + 1;
        if ( v8 > dword_4B9914 )
        {
          v2 = v8;
          dword_4B9914 = v8;
        }
      }
      else
      {
        v2 = dword_4B9914;
      }
    }
    *(_DWORD *)dword_4B9910 = sub_465E40(54 * v2, (int)"AI_style.cpp", 27);
    if ( v16 > 0 )
    {
      do
      {
        v9 = (char *)sub_4646A0(0, v0);
        v10 = (char *)(String - v9);
        do
        {
          v11 = *v9;
          v9[(_DWORD)v10] = *v9;
          ++v9;
        }
        while ( v11 );
        if ( sub_438150(String) )
        {
          v12 = (_WORD *)(*(_DWORD *)dword_4B9910 + 54 * atoi(String));
          v12[23] = sub_4646D0(1, v0);
          for ( i = 0; i < 17; ++i )
            v12[i] = sub_4646D0(i + 2, v0);
          v12[17] = sub_4646D0(19, v0);
          v12[18] = sub_4646D0(20, v0);
          v12[19] = sub_4646D0(21, v0);
          v12[20] = sub_4646D0(22, v0);
          v12[21] = sub_4646D0(23, v0);
          v12[22] = sub_4646D0(24, v0);
          v12[24] = sub_4646D0(25, v0);
          v12[25] = sub_4646D0(26, v0);
          v12[26] = sub_4646D0(27, v0);
        }
        ++v0;
      }
      while ( v0 < v16 );
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
