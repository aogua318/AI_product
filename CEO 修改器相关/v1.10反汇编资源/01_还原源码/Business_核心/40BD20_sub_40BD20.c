// 函数 0x40bd20  sub_40BD20  size=0xF6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40BD20(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  char v7; // cl
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  int v17; // edx
  _DWORD *v18; // esi
  int v19; // [esp+14h] [ebp+8h]
  int v20; // [esp+18h] [ebp+Ch]

  v5 = a5;
  v7 = *(_BYTE *)(10 * a2 + a1[37] + 6);
  if ( v7 == 16 )
    v5 = (a5 + 1) >> 1;
  if ( v7 == 8 )
    v5 >>= 1;
  v8 = (int *)sub_483C60(
                a3,
                a4,
                *(unsigned __int8 *)(10 * a2 + a1[37] + 4),
                *(unsigned __int8 *)(10 * a2 + a1[37] + 5),
                v5);
  v9 = --*v8;
  v10 = --v8[1];
  ++v8[2];
  v11 = ++v8[3];
  if ( v9 < 0 )
    return 0;
  if ( v10 < 0 )
    return 0;
  v13 = a1[6];
  if ( v8[2] >= v13 || v11 >= a1[7] )
    return 0;
  v19 = v10;
  if ( v10 <= v11 )
  {
    v14 = v10 * v13;
    v20 = v10 * v13;
    while ( 1 )
    {
      v15 = *v8;
      if ( *v8 <= v8[2] )
        break;
LABEL_20:
      v14 += a1[6];
      v19 = ++v10;
      v20 = v14;
      if ( v10 > v8[3] )
        return 1;
    }
    v16 = v15 + v14;
    v17 = 2 * v16;
    v18 = (_DWORD *)(a1[35] + 4 * v16);
    while ( *v18 == -1 || (v15 == *v8 || v19 == v8[1]) && *(_WORD *)(v17 + a1[30]) == 0xFFFF )
    {
      ++v15;
      ++v18;
      v17 += 2;
      if ( v15 > v8[2] )
      {
        v10 = v19;
        v14 = v20;
        goto LABEL_20;
      }
    }
    return 0;
  }
  return 1;
}
