// 函数 0x479b70  sub_479B70  size=0x120  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __cdecl sub_479B70(unsigned int *a1, signed int *a2, int a3)
{
  unsigned int *v3; // esi
  signed int result; // eax
  int v6; // ebx
  int v7; // ebx
  signed int *v8; // esi
  signed int v9; // ebx
  signed int v10; // edx
  int v11; // ebx
  int v12; // ebx
  unsigned int *v13; // esi
  int v14; // ebx
  signed int v16; // [esp+18h] [ebp+Ch]

  v3 = a1;
  if ( *(_DWORD *)(a3 + 16) )
  {
    result = *(_DWORD *)(a3 + 20);
    v16 = result;
    if ( result > 0 )
    {
      v6 = *(_DWORD *)(a3 + 20);
      do
      {
        *v3 = sub_474DE0(4);
        v3[1] = sub_474DE0(4);
        v3 += 2;
        --v6;
      }
      while ( v6 );
      result = v16;
    }
    if ( result < 32 )
    {
      v7 = 32 - result;
      do
      {
        *v3++ = sub_474DE0(4);
        --v7;
      }
      while ( v7 );
      result = v16;
    }
    v8 = (signed int *)a1;
    if ( result > 0 )
    {
      v9 = result;
      do
      {
        if ( *v8 )
        {
          *a2 = sub_474DE0(6);
          result = v16;
          ++a2;
        }
        v10 = v8[1];
        v8 += 2;
        if ( v10 )
        {
          *a2 = sub_474DE0(6);
          result = v16;
          ++a2;
        }
        --v9;
      }
      while ( v9 );
    }
    if ( result < 32 )
    {
      v11 = 32 - result;
      do
      {
        result = *v8++;
        if ( result )
        {
          *a2 = sub_474DE0(6);
          result = sub_474DE0(6);
          a2[1] = result;
          a2 += 2;
        }
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    v12 = 32;
    do
    {
      result = sub_474DE0(4);
      *v3++ = result;
      --v12;
    }
    while ( v12 );
    v13 = a1;
    v14 = 32;
    do
    {
      if ( *v13++ )
      {
        result = sub_474DE0(6);
        *a2++ = result;
      }
      --v14;
    }
    while ( v14 );
  }
  return result;
}
