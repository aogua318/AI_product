// 函数 0x485560  sub_485560  size=0xCD  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_485560(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  char v8; // cl
  int *v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v14; // edi
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // edx
  int v18; // [esp+14h] [ebp+8h]

  v6 = a5;
  v8 = *(_BYTE *)(10 * a2 + *(this + 37) + 6);
  if ( v8 == 16 )
    v6 = (a5 + 1) >> 1;
  if ( v8 == 8 )
    v6 >>= 1;
  v9 = sub_483C60(
         a3,
         a4,
         *(unsigned __int8 *)(10 * a2 + *(this + 37) + 4),
         *(unsigned __int8 *)(10 * a2 + *(this + 37) + 5),
         v6);
  *v9 -= a6;
  v9[1] -= a6;
  v9[2] += a6;
  v10 = *v9;
  v9[3] += a6;
  v11 = v9[1];
  v12 = v9[3];
  if ( v10 < 0 || v11 < 0 || v9[2] >= *(this + 6) || v12 >= *(this + 7) )
    return 0;
  v14 = v9[1];
  if ( v11 <= v12 )
  {
    v15 = v11 * *(this + 6);
    v18 = v14 * *(this + 6);
    while ( 1 )
    {
      v16 = *v9;
      if ( *v9 <= v9[2] )
        break;
LABEL_17:
      v15 += *(this + 6);
      ++v14;
      v18 = v15;
      if ( v14 > v9[3] )
        return 1;
    }
    v17 = (_DWORD *)(*(this + 35) + 4 * (v16 + v15));
    while ( *v17 == -1 )
    {
      ++v16;
      ++v17;
      if ( v16 > v9[2] )
      {
        v15 = v18;
        goto LABEL_17;
      }
    }
    return 0;
  }
  return 1;
}
