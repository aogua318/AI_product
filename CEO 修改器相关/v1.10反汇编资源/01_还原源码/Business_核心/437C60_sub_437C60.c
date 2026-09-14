// 函数 0x437c60  sub_437C60  size=0x295  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_437C60(int this, const char *a2)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // eax
  CHAR v5; // dl
  int v6; // esi
  CHAR v7; // al
  CHAR *v8; // edx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // edi
  int v15; // edx
  CHAR v16; // al
  bool v17; // cc
  int v18; // [esp+Ch] [ebp-1C4h]
  int v20; // [esp+14h] [ebp-1BCh] BYREF
  double v21[10]; // [esp+18h] [ebp-1B8h] BYREF
  CHAR Text[100]; // [esp+68h] [ebp-168h] BYREF
  CHAR String[256]; // [esp+CCh] [ebp-104h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = strlen(a2);
  if ( v4 <= 0 )
  {
LABEL_6:
    v6 = v20;
  }
  else
  {
    while ( 1 )
    {
      v5 = String[a2 - String + v3];
      if ( v5 == 40 )
        break;
      String[v3] = v5;
      if ( !v5 )
        goto LABEL_6;
      if ( ++v3 >= v4 )
      {
        String[v3] = 0;
        goto LABEL_6;
      }
    }
    v2 = 1;
    String[v3] = 0;
    v6 = v3 + 1;
  }
  if ( String[0] < 48 || String[0] > 57 )
  {
    if ( !strcmp(String, "go") )
    {
      v7 = a2[v6];
      v8 = (CHAR *)&a2[v6];
      v9 = 0;
      if ( v7 != 41 )
      {
        do
        {
          ++v8;
          String[v9] = v7;
          v7 = *v8;
          ++v9;
        }
        while ( *v8 != 41 );
      }
      String[v9] = 0;
      if ( !sub_437530((char *)this, String) )
      {
        MessageBoxA(hWnd, String, "load task .. fail", 0);
        exit(1);
      }
    }
    else
    {
      v10 = this;
      if ( !sub_4649B0(String, &v20) )
      {
        sprintf(Text, "%s\nline%d", "task.cpp", 412);
        MessageBoxA(hWnd, Text, "error function not exist", 0);
LABEL_11:
        exit(1);
      }
      v11 = *(__int16 *)(*(_DWORD *)(this + 6520) + 2 * v20);
      v12 = 0;
      v18 = v11;
      if ( v11 > 0 )
      {
        do
        {
          v13 = 0;
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            v16 = a2[v6];
            if ( v16 == 40 )
            {
              ++v14;
            }
            else if ( v16 == 41 )
            {
              ++v15;
            }
            v17 = v15 <= v14;
            if ( v15 == v14 )
            {
              if ( v16 == 44 )
                break;
              v17 = v15 <= v14;
            }
            if ( !v17 )
              break;
            String[v13++] = v16;
            ++v6;
          }
          String[v13] = 0;
          ++v6;
          v21[v12++] = sub_437C60(String);
        }
        while ( v12 < v18 );
        v11 = v18;
        v10 = this;
      }
      (*(void (__cdecl **)(double *, int))(*(_DWORD *)(v10 + 6524) + 4 * v20))(v21, v11);
    }
  }
  else
  {
    if ( v2 )
    {
      sprintf(Text, "%s\nline%d", "task.cpp", 388);
      MessageBoxA(hWnd, Text, &byte_4A36CC, 0);
      goto LABEL_11;
    }
    atof(String);
  }
}
