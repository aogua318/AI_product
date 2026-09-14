// 函数 0x426f20  sub_426F20  size=0x191  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_426F20(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  __int16 *v8; // ebx
  __int16 *v9; // edx
  bool v10; // zf
  char v11; // al
  int v12; // edx
  int v13; // ebx
  int v14; // edi
  __int16 *v15; // esi
  __int16 *v16; // ecx
  bool v17; // zf
  int v19; // ecx
  int v20; // [esp+Ch] [ebp-4h]
  int v21; // [esp+24h] [ebp+14h]
  int v22; // [esp+28h] [ebp+18h]

  v7 = dword_4D0C84 + a4 * dword_4D0C70;
  v21 = -1;
  v20 = 0;
  if ( !a5 )
  {
    v22 = 0;
    if ( *(char *)(v7 + 23) > 0 )
    {
      v8 = (__int16 *)(v7 + 64);
      while ( 1 )
      {
        v9 = (__int16 *)(dword_4D10A8 + *v8 * dword_4D1094);
        if ( a1 == 2 )
        {
          if ( (*((_BYTE *)v9 + 13) == 2 || *((_BYTE *)v9 + 12) == 2) && *v9 == a2 )
          {
            v10 = v9[1] == a3;
            goto LABEL_14;
          }
        }
        else if ( a1 == 3 && (*((_BYTE *)v9 + 13) == 3 || *((_BYTE *)v9 + 12) == 3) && v9[11] == a6 )
        {
          v10 = v9[12] == a7;
LABEL_14:
          if ( v10 )
            return -1;
        }
        if ( !*((_BYTE *)v9 + 12) )
        {
          v11 = *((_BYTE *)v9 + 11) & 0x10;
          v12 = v9[9] & 0x7FFF;
          if ( v12 + (v11 != 0 ? 0 : 200) > v20 )
          {
            v20 = v12 + (v11 != 0 ? 0 : 200);
            v21 = *v8;
          }
        }
        ++v22;
        ++v8;
        if ( v22 >= *(char *)(v7 + 23) )
        {
          if ( v21 == -1 )
            break;
          return v21;
        }
      }
    }
  }
  v13 = *(char *)(v7 + 22);
  v14 = 0;
  if ( v13 > 0 )
  {
    v15 = (__int16 *)(v7 + 24);
    do
    {
      v16 = (__int16 *)(dword_4D10A8 + *v15 * dword_4D1094);
      if ( a1 == 2 )
      {
        if ( (*((_BYTE *)v16 + 13) == 2 || *((_BYTE *)v16 + 12) == 2) && *v16 == a2 )
        {
          v17 = v16[1] == a3;
          goto LABEL_33;
        }
      }
      else if ( a1 == 3 && (*((_BYTE *)v16 + 13) == 3 || *((_BYTE *)v16 + 12) == 3) && v16[11] == a6 )
      {
        v17 = v16[12] == a7;
LABEL_33:
        if ( v17 )
          return -1;
      }
      if ( !*((_BYTE *)v16 + 12) )
      {
        v19 = v16[9] & 0x7FFF;
        if ( v19 > v20 )
        {
          v20 = v19;
          v21 = *v15;
        }
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v13 );
  }
  return v21;
}
