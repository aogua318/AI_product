// 函数 0x46ff10  sub_46FF10  size=0x159  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __usercall sub_46FF10@<eax>(_DWORD *a1@<edi>, unsigned int a2)
{
  unsigned int v2; // edx
  int v3; // esi
  _BYTE *v4; // ecx
  unsigned int result; // eax
  _BYTE *v6; // esi
  unsigned int v7; // ebx
  _BYTE *v8; // edx
  _BYTE *v9; // ecx
  _BYTE *v10; // edx
  char v11; // bl
  char v12; // bl
  char v13; // bl
  char v14; // bl
  char v15; // bl
  char v16; // bl
  char v17; // bl
  char v18; // bl
  int v19; // edx
  unsigned int v20; // [esp+Ch] [ebp-10h]
  int v21; // [esp+10h] [ebp-Ch]
  unsigned int v22; // [esp+14h] [ebp-8h]
  char v23; // [esp+1Ah] [ebp-2h]
  char v24; // [esp+1Bh] [ebp-1h]

  v2 = a1[25];
  v21 = a1[34];
  v3 = a1[9];
  v4 = (_BYTE *)(v2 + a1[12]);
  v22 = a1[29];
  result = a1[28];
  if ( v2 <= v3 - 262 )
    v20 = 0;
  else
    v20 = v2 - v3 + 262;
  v24 = v4[result - 1];
  v6 = v4 + 258;
  v23 = v4[result];
  if ( result >= a1[33] )
    v22 >>= 2;
  if ( (unsigned int)v21 > a1[27] )
    v21 = a1[27];
  v7 = a2;
  do
  {
    v8 = (_BYTE *)(v7 + a1[12]);
    if ( v8[result] == v23 && v8[result - 1] == v24 && *v8 == *v4 && v8[1] == v4[1] )
    {
      v9 = v4 + 2;
      v10 = v8 + 2;
      do
      {
        v11 = *++v9;
        if ( v11 != v10[1] )
          break;
        v12 = *++v9;
        if ( v12 != v10[2] )
          break;
        v13 = *++v9;
        if ( v13 != v10[3] )
          break;
        v14 = *++v9;
        if ( v14 != v10[4] )
          break;
        v15 = *++v9;
        if ( v15 != v10[5] )
          break;
        v16 = *++v9;
        if ( v16 != v10[6] )
          break;
        v17 = *++v9;
        if ( v17 != v10[7] )
          break;
        v18 = *++v9;
        v10 += 8;
        if ( v18 != *v10 )
          break;
      }
      while ( v9 < v6 );
      v19 = v9 - v6 + 258;
      v4 = v6 - 258;
      if ( v19 > (int)result )
      {
        a1[26] = a2;
        result = v19;
        if ( v19 >= v21 )
          break;
        v24 = v4[v19 - 1];
        v23 = v4[v19];
      }
    }
    v7 = *(unsigned __int16 *)(a1[14] + 2 * (a2 & a1[11]));
    a2 = v7;
    if ( v7 <= v20 )
      break;
    --v22;
  }
  while ( v22 );
  if ( result > a1[27] )
    return a1[27];
  return result;
}
