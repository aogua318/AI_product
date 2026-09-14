// 函数 0x488230  sub_488230  size=0x139  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_488230(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int v8; // edi
  int v9; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int *v17; // esi
  __int16 *v18; // [esp+Ch] [ebp+8h]

  if ( !*(this + 8) )
    return 0;
  v6 = *this;
  if ( !*this || !*(this + 7) || !*(this + 5) )
    return 0;
  v8 = a3 * *(_DWORD *)(v6 + 24);
  dword_8F2B2C = a3;
  v9 = a2 + v8;
  dword_8F2B38 = 0;
  dword_8F2B24 = a2;
  if ( a4 >= *(this + 4) )
    return 0;
  v18 = (__int16 *)(*(this + 5) + 4 * a4);
  *(_WORD *)(*(_DWORD *)(*this + 4 * *(this + 1) + 120) + 2 * v9) = *v18 / *(this + 2) + sub_4640D0() % v18[1];
  if ( a5 )
  {
    v11 = *this;
    v12 = *(_DWORD *)(*this + 24);
    dword_8F2B14 = *(this + 4);
    v13 = *(_DWORD *)(v11 + 28);
    dword_8F2B28 = v12;
    v14 = *(this + 1);
    dword_8F2B1C = v13;
    v15 = *(_DWORD *)(v11 + 4 * v14 + 120);
    dword_8F2B34 = *(this + 7);
    dword_8F2B10 = *(this + 5);
    dword_8F2B0C = v15;
    v16 = *(this + 8);
    dword_8F2B08 = v11;
    dword_8F2B18 = v16;
    dword_8F2B30 = *(this + 2);
    dword_8F2B20 = 1;
    return sub_487B20(a2, a3, a4);
  }
  else
  {
    v17 = (int *)*this;
    if ( v17[16] )
      sub_485C20(v17, a2, a3);
    return 1;
  }
}
