// 函数 0x486310  sub_486310  size=0x163  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_486310(int *this, int a2, int a3, int a4, int a5, char a6, int a7, int *a8, char a9, char a10)
{
  int *v10; // ebx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // edx
  char v17; // cl
  char v18; // dl
  char v19; // bl
  int v20; // ebx
  int v21; // [esp+8h] [ebp-4h] BYREF

  v10 = a8;
  if ( a7 )
  {
    sub_483850(this, a3, a4, &v21, (int *)&a8);
    if ( v10 )
    {
      if ( !sub_485630(this, a2, v21, (int)a8, a5, 0) )
        return -1;
    }
    else if ( !sub_485560(this, a2, v21, (int)a8, a5, 0) )
    {
      return -1;
    }
  }
  a8 = this + 39;
  v13 = sub_4656D0(this + 39);
  v14 = v13;
  if ( v13 == -1 )
    return v14;
  v15 = a8[6] + v13 * a8[1];
  *(_WORD *)(v15 + 2) = a3;
  *(_WORD *)(v15 + 4) = a4;
  *(_WORD *)v15 = a2;
  *(_BYTE *)(v15 + 9) = a6;
  v16 = *(unsigned __int8 *)(*(this + 37) + 10 * a2 + 6);
  v17 = a5;
  if ( a5 >= v16 )
    v17 = a5 - v16;
  v18 = a9;
  *(_BYTE *)(v15 + 8) = v17;
  *(_WORD *)(v15 + 6) = 0;
  v19 = *(_BYTE *)(v15 + 10) & 0xF0 | a10 & 1 | (2 * (v18 & 1 | (2 * (a7 & 1 | (2 * ((unsigned __int8)v10 & 1))))));
  *(_BYTE *)(v15 + 10) = v19;
  *(_DWORD *)(v15 + 16) = *(this + 15);
  *(_WORD *)(v15 + 12) = -1;
  *(_WORD *)(v15 + 14) = 0;
  *(_BYTE *)(v15 + 11) = -1;
  *(_BYTE *)(v15 + 10) = v19 & 0x8F;
  v20 = sub_485FE0(this, v14);
  if ( *(this + 16) )
    sub_485B90(this, v14);
  if ( v20 )
    return v14;
  sub_464E10(a8, v14);
  return -1;
}
