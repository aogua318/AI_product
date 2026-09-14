// 函数 0x47d050  sub_47D050  size=0x141  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_47D050(_DWORD *this, int a2)
{
  int v2; // ebx
  void *v3; // edx
  bool v4; // zf
  int v5; // ebx
  _BYTE *v6; // eax
  _DWORD *v7; // edx
  int v8; // esi
  int *v9; // eax
  int v10; // edi
  int v11; // ebx
  int *v12; // eax
  int v13; // esi
  int *v14; // eax
  int v15; // edi
  int v16; // ebx
  int *v17; // eax
  _BYTE v18[44]; // [esp+8h] [ebp-38h] BYREF
  _DWORD *v19; // [esp+34h] [ebp-Ch]
  _BYTE *v20; // [esp+38h] [ebp-8h]
  _DWORD *v21; // [esp+3Ch] [ebp-4h]

  v2 = *(this + 1106);
  v20 = this + 11 * a2;
  v3 = v20 + 24;
  v4 = v20[58] == 0;
  v21 = this;
  v19 = v20 + 24;
  if ( v4 )
  {
    v5 = v2 - 1;
    if ( v5 >= 0 )
    {
      v6 = (char *)this + 44 * v5 + 58;
      do
      {
        if ( !*v6 )
          break;
        v6 -= 44;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
  else
  {
    v5 = v2 - 1;
  }
  if ( v5 != a2 )
  {
    qmemcpy(v18, v3, sizeof(v18));
    memcpy_0(v3, v20 + 68, 44 * (v5 - a2));
    v7 = v19;
    qmemcpy(&v21[11 * v5 + 6], v18, 0x2Cu);
    v8 = *v7;
    v9 = (int *)sub_482E20(*v7);
    sub_47C950(v9);
    v10 = 0;
    if ( *(__int16 *)(v8 + 292) > 0 )
    {
      v11 = 0;
      do
      {
        v12 = (int *)sub_481F90(v11 + *(_DWORD *)(v8 + 296));
        sub_47C950(v12);
        ++v10;
        v11 += 288;
      }
      while ( v10 < *(__int16 *)(v8 + 292) );
    }
    v13 = v21[11 * v21[1106] - 5];
    v14 = (int *)sub_482E20(v13);
    sub_47C950(v14);
    v15 = 0;
    if ( *(__int16 *)(v13 + 292) > 0 )
    {
      v16 = 0;
      do
      {
        v17 = (int *)sub_481F90(v16 + *(_DWORD *)(v13 + 296));
        sub_47C950(v17);
        ++v15;
        v16 += 288;
      }
      while ( v15 < *(__int16 *)(v13 + 292) );
    }
  }
}
