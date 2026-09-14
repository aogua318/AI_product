// 函数 0x401bd0  sub_401BD0  size=0x102  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_401BD0@<eax>(int a1@<eax>, int a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi
  char v8; // cl
  int i; // ecx
  int v10; // eax
  int v11; // [esp+8h] [ebp-4h]
  int v12; // [esp+14h] [ebp+8h]

  v3 = dword_4CD128;
  v11 = dword_4CD128;
  if ( a2 == 5 )
  {
    v3 = dword_4CD128 + 5;
    v11 = dword_4CD128 + 5;
  }
  v4 = dword_4D0C90 - 1;
  result = 9 * a1;
  v12 = *(_DWORD *)dword_870814 + 8 * result;
  dword_4B9900 = 0;
  if ( dword_4D0C90 - 1 >= 0 )
  {
    v6 = *(_DWORD *)dword_4D0C8C;
    do
    {
      v7 = v4;
      result = 388 * (v4 < 0 ? 0 : v4);
      if ( v4 > 0 )
      {
        v8 = *(_BYTE *)(result + v6 + 12);
        result = 388 * v4 + v6 - 376;
        do
        {
          if ( *(_BYTE *)result != v8 )
            break;
          --v7;
          result -= 388;
        }
        while ( v7 > 0 );
      }
      for ( i = v7; i <= v4; ++i )
      {
        result = v6 + 388 * (i < 0 ? 0 : i);
        if ( *(char *)(result + 12) <= v3
          && *(char *)(result + 13) > (unsigned int)v3
          && *(_BYTE *)(result + 78) == *(_BYTE *)(v12 + 12)
          && (a3 == -1 || *(_WORD *)(result + 2 * *(char *)(116 * a3 + *(_DWORD *)dword_87081C + 2) + 80) != 0xFFFF) )
        {
          v10 = dword_4B9900;
          dword_4B9770[dword_4B9900] = i;
          result = v10 + 1;
          dword_4B9900 = result;
        }
        v6 = *(_DWORD *)dword_4D0C8C;
        v3 = v11;
      }
      v4 = v7 - 1;
    }
    while ( v7 - 1 >= 0 );
  }
  return result;
}
