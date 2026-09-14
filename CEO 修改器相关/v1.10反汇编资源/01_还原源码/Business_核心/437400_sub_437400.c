// 函数 0x437400  sub_437400  size=0x12F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_437400(int a1)
{
  int result; // eax
  signed int v2; // ecx
  int v3; // ebx
  int v4; // edi
  char v5; // al
  char v6; // al
  char *v7; // eax
  char v8; // cl
  signed int v9; // [esp+0h] [ebp-40Ch]
  char v10[1024]; // [esp+8h] [ebp-404h] BYREF

  sub_46A390(v10, 1024);
  result = strcmp(v10, "}");
  if ( result )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = v10[v2];
      if ( v5 != 32 && v5 != 9 )
        break;
      ++v2;
    }
    v9 = v2;
    if ( v2 < (int)strlen(v10) )
    {
      while ( 1 )
      {
        v6 = v10[v2];
        if ( (v6 == 32 || v6 == 9) && !v3 )
          break;
        if ( v6 == 40 )
        {
          ++v3;
        }
        else if ( v6 == 41 )
        {
          ++v4;
        }
        if ( v4 == v3 && (v4 > 0 || !v6) )
        {
          v7 = &v10[v9];
          v10[v2 + 1] = 0;
          do
          {
            v8 = *v7;
            v7[a1 - (_DWORD)&v10[v9]] = *v7;
            ++v7;
          }
          while ( v8 );
          return 1;
        }
        ++v2;
      }
    }
    return 0;
  }
  return result;
}
