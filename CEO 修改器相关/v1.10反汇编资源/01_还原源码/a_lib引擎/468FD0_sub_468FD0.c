// 函数 0x468fd0  sub_468FD0  size=0x1FF  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_468FD0(int *this, int *a2, int a3, char Src)
{
  int v4; // eax
  int v6; // ebx
  int v7; // esi
  int *v8; // ecx
  int v9; // edx
  int v10; // edx
  int result; // eax
  signed int v12; // edi
  int v13; // ecx
  int v14; // ebx
  int *v15; // esi
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  char *v19; // esi
  int v20; // [esp+10h] [ebp-1F58h]
  int v22; // [esp+18h] [ebp-1F50h]
  int v23; // [esp+1Ch] [ebp-1F4Ch]
  int v24; // [esp+20h] [ebp-1F48h]
  int v25; // [esp+20h] [ebp-1F48h]
  _DWORD v26[2000]; // [esp+24h] [ebp-1F44h] BYREF

  v4 = a3;
  if ( a3 > 1000 )
  {
    a3 = 1000;
    v4 = 1000;
  }
  v6 = -1;
  v7 = 10000;
  v24 = 10000;
  v23 = -1;
  if ( v4 > 0 )
  {
    v8 = a2 + 1;
    v9 = v4;
    do
    {
      if ( *v8 > v6 )
      {
        v23 = *v8;
        v6 = *v8;
      }
      if ( *v8 < v7 )
      {
        v24 = *v8;
        v7 = *v8;
      }
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = *(this + 2);
  result = *(this + 1);
  v12 = *(this + 3) / 8;
  v20 = *(this + 2);
  if ( v7 < 0 )
  {
    v24 = 0;
    v7 = 0;
  }
  if ( v6 >= result )
  {
    v23 = --result;
    v6 = result;
  }
  v13 = v7;
  if ( v7 <= v6 )
  {
    result = v10 / v12;
    do
    {
      v26[2 * v13] = result;
      v26[2 * v13++ + 1] = -1;
    }
    while ( v13 <= v6 );
  }
  v14 = a3;
  if ( a3 > 0 )
  {
    v15 = a2;
    result = 8 * a3 - 8;
    do
    {
      sub_468DE0(this, *v15, v15[1], *(int *)((char *)a2 + result), *(int *)((char *)a2 + result + 4), (int)v26);
      v15 += 2;
      --v14;
      result = (int)v15 - 8 - (_DWORD)a2;
    }
    while ( v14 );
    v7 = v24;
  }
  v16 = v7;
  if ( v7 <= v23 )
  {
    result = v7 * v20;
    v25 = v7 * v20;
    do
    {
      if ( v16 >= *(this + 6) && v16 < *(this + 8) )
      {
        v17 = v26[2 * v16];
        result = v26[2 * v16 + 1];
        if ( v17 <= result )
        {
          if ( v17 < *(this + 5) )
            v17 = *(this + 5);
          v18 = *(this + 7);
          if ( result >= v18 )
            result = v18 - 1;
          v19 = (char *)(v25 + *(this + 9) + v12 * v17);
          result = result - v17 + 1;
          if ( result > 0 )
          {
            v22 = result;
            do
            {
              if ( v12 > 0 )
              {
                result = (int)memcpy(v19, &Src, v12);
                v19 += v12;
              }
              --v22;
            }
            while ( v22 );
          }
        }
      }
      v25 += v20;
      ++v16;
    }
    while ( v16 <= v23 );
  }
  return result;
}
