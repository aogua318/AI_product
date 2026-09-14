// 函数 0x470070  sub_470070  size=0xF6  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __usercall sub_470070@<eax>(size_t *a1@<esi>)
{
  size_t v1; // ebx
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  size_t v4; // edi
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  _WORD *v7; // ecx
  unsigned int v8; // eax
  __int16 v9; // ax
  size_t v10; // edx
  _WORD *v11; // ecx
  unsigned int v12; // eax
  __int16 v13; // ax
  size_t result; // eax
  unsigned int v15; // edx
  unsigned __int8 *v16; // edi
  _DWORD *v17; // ecx
  size_t v18; // eax

  v1 = a1[9];
  do
  {
    v2 = a1[25];
    v3 = (_DWORD *)a1[27];
    v4 = a1[13] - v2 - (_DWORD)v3;
    if ( v4 )
    {
      if ( v4 == -1 )
      {
        v4 = -2;
        goto LABEL_20;
      }
    }
    else if ( !v2 && !v3 )
    {
      v4 = v1;
      goto LABEL_20;
    }
    if ( v2 >= v1 + a1[9] - 262 )
    {
      memcpy((void *)a1[12], (const void *)(a1[12] + v1), v1);
      v5 = (_DWORD *)a1[17];
      v6 = (_DWORD *)a1[15];
      a1[26] -= v1;
      a1[25] -= v1;
      a1[21] -= v1;
      v7 = (_WORD *)v6 + (_DWORD)v5;
      do
      {
        v8 = (unsigned __int16)*--v7;
        if ( v8 < v1 )
          v9 = 0;
        else
          v9 = v8 - v1;
        v5 = (_DWORD *)((char *)v5 - 1);
        *v7 = v9;
      }
      while ( v5 );
      v10 = v1;
      v11 = (_WORD *)(a1[14] + 2 * v1);
      do
      {
        v12 = (unsigned __int16)*--v11;
        if ( v12 < v1 )
          v13 = 0;
        else
          v13 = v12 - v1;
        --v10;
        *v11 = v13;
      }
      while ( v10 );
      v4 += v1;
    }
LABEL_20:
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 4) )
      break;
    result = sub_46FE20(v4, (_DWORD *)*a1, (void *)(a1[12] + a1[25] + a1[27]));
    a1[27] += result;
    v15 = a1[27];
    if ( v15 >= 3 )
    {
      v16 = (unsigned __int8 *)(a1[12] + a1[25]);
      v17 = (_DWORD *)a1[20];
      v18 = *v16;
      a1[16] = v18;
      result = a1[19] & (v16[1] ^ (v18 << (char)v17));
      a1[16] = result;
    }
  }
  while ( v15 < 0x106 && *(_DWORD *)(*a1 + 4) );
  return result;
}
