// 函数 0x423a20  sub_423A20  size=0x15A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_423A20(unsigned int a1, unsigned int a2)
{
  int result; // eax
  unsigned int v3; // ecx
  const void *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // edi
  int v12; // eax
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h]

  result = sub_42B3B0(a1, a2);
  if ( a1 < dword_4D0BC8 && a2 < dword_4D0BCC )
  {
    v3 = 0;
    v4 = (const void *)(*(_DWORD *)(dword_4D0BF0 + 4 * a2) + a1 * (dword_4D0BD4 / 8));
    v14 = 0;
    if ( dword_4D0BD4 / 8 > 0 )
    {
      memcpy(&v14, v4, dword_4D0BD4 / 8);
      v3 = v14;
    }
    result = v3;
    v14 = v3;
    if ( v3 != 4 )
    {
      if ( v3 == 5 )
      {
        v14 = 4;
        result = 4;
      }
      else if ( v3 >= 5 )
      {
        return result;
      }
      while ( 1 )
      {
        switch ( result )
        {
          case 0:
            v15 = 9;
            break;
          case 1:
          case 3:
          case 4:
            v15 = 8;
            break;
          case 2:
            v15 = 11;
            break;
          default:
            break;
        }
        v5 = sub_4640D0(v3);
        v6 = 10;
        if ( v5 % 10 )
          break;
        v7 = sub_4640D0(10);
        v3 = 5;
        v14 = v7 % 5;
        result = v7 % 5;
      }
      v13 = 0;
      do
      {
        v8 = sub_4640D0(v6) % 3;
        v9 = sub_4640D0(3) % 3;
        v10 = sub_4640D0(3) % 3;
        v11 = a2 + v10 - sub_4640D0(3) % 3;
        v12 = sub_4640D0(3);
        result = sub_438420(a1 + v8 - v9, v11, dword_4B1184[v14], v12 % v15);
        if ( result )
          break;
        result = v13 + 1;
        v13 = result;
      }
      while ( result < 10 );
    }
  }
  return result;
}
