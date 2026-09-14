// 函数 0x476d50  sub_476D50  size=0x1D6  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_476D50@<eax>(int *a1@<eax>, int *a2@<ecx>)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // edi
  int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // edi
  int v16; // edi
  char v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]
  int v20; // [esp+14h] [ebp-4h]

  v3 = a2[3];
  v4 = (unsigned __int8)byte_4B7D08[v3];
  v5 = (unsigned __int8)byte_4B7D18[v3];
  v18 = v5;
  if ( a2[4] == 2 )
  {
    v6 = 18;
    v19 = 18 * (v4 + v5);
    if ( a2[5] )
    {
      v7 = 8;
      do
      {
        *a1++ = sub_474E40(v4);
        --v7;
      }
      while ( v7 );
      v19 -= v4;
      v6 = 9;
    }
    do
    {
      *a1++ = sub_474E40(v4);
      --v6;
    }
    while ( v6 );
    v8 = 18;
    do
    {
      *a1++ = sub_474E40(v18);
      --v8;
    }
    while ( v8 );
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return v19;
  }
  else
  {
    v10 = *a2;
    v17 = v10;
    if ( v10 >= 0 )
    {
      v20 = 0;
      if ( (v10 & 8) != 0 )
      {
        a1 += 6;
      }
      else
      {
        v13 = 6;
        do
        {
          *a1++ = sub_474E40(v4);
          --v13;
        }
        while ( v13 );
        LOBYTE(v10) = v17;
        v20 = 6 * v4;
      }
      if ( (v10 & 4) != 0 )
      {
        a1 += 5;
      }
      else
      {
        v14 = 5;
        do
        {
          *a1++ = sub_474E40(v4);
          --v14;
        }
        while ( v14 );
        v20 += v4 + 4 * v4;
        LOBYTE(v10) = v17;
      }
      if ( (v10 & 2) != 0 )
      {
        a1 += 5;
      }
      else
      {
        v15 = 5;
        do
        {
          *a1++ = sub_474E40(v18);
          --v15;
        }
        while ( v15 );
        LOBYTE(v10) = v17;
        v20 += v18 + 4 * v18;
      }
      if ( (v10 & 1) != 0 )
      {
        a1[5] = 0;
        return v20;
      }
      else
      {
        v16 = 5;
        do
        {
          *a1++ = sub_474E40(v18);
          --v16;
        }
        while ( v16 );
        *a1 = 0;
        return v18 + v20 + 4 * v18;
      }
    }
    else
    {
      v11 = 11;
      do
      {
        *a1++ = sub_474E40(v4);
        --v11;
      }
      while ( v11 );
      v12 = 10;
      do
      {
        *a1++ = sub_474E40(v18);
        --v12;
      }
      while ( v12 );
      *a1 = 0;
      return v4 + 10 * (v4 + v18);
    }
  }
}
