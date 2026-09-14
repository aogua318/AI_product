// 函数 0x47d1a0  sub_47D1A0  size=0x169  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47D1A0(
        int *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // esi
  int v15; // ecx
  int v16; // eax
  _BYTE *v17; // edx
  int v18; // eax
  int *v19; // edi
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // edi
  int *v25; // esi
  int *v26; // eax
  int v28; // [esp+8h] [ebp-4h]

  v13 = a2;
  sub_47CCD0(this, a2);
  v15 = *(this + 1106);
  if ( v15 >= 100 )
    return 0;
  if ( a10 )
  {
    v18 = *(this + 1106);
  }
  else
  {
    v16 = v15 - 1;
    if ( v15 - 1 >= 0 )
    {
      v17 = (char *)this + 44 * v16 + 58;
      do
      {
        if ( !*v17 )
          break;
        v17 -= 44;
        --v16;
      }
      while ( v16 >= 0 );
    }
    v18 = v16 + 1;
    if ( v15 > v18 )
    {
      v19 = this + 11 * v15 + 6;
      v28 = v15 - v18;
      do
      {
        v20 = v28-- == 1;
        qmemcpy(v19, v19 - 11, 0x2Cu);
        v19 -= 11;
      }
      while ( !v20 );
      v13 = a2;
    }
  }
  v21 = (int)(this + 11 * v18 + 6);
  *(_DWORD *)(v21 + 8) = a4;
  *(_DWORD *)(v21 + 4) = a5;
  *(_DWORD *)(v21 + 12) = a3;
  *(_DWORD *)(v21 + 16) = a6;
  *(_DWORD *)(v21 + 20) = a9;
  *(_DWORD *)(v21 + 24) = a11;
  *(_BYTE *)(v21 + 32) = a7;
  *(_BYTE *)(v21 + 33) = a8;
  *(_BYTE *)(v21 + 34) = a10;
  *(_DWORD *)(v21 + 28) = a12;
  *(_DWORD *)v21 = v13;
  *(_DWORD *)(v21 + 36) = a13;
  ++*(this + 1106);
  v22 = 0;
  if ( *(__int16 *)(v13 + 292) > 0 )
  {
    v23 = 0;
    do
    {
      *(_BYTE *)(v23 + *(_DWORD *)(v13 + 296) + 7) = 0;
      ++v22;
      v23 += 288;
    }
    while ( v22 < *(__int16 *)(v13 + 292) );
  }
  v24 = 0;
  if ( *(this + 1106) > 0 )
  {
    v25 = this + 6;
    do
    {
      *(_WORD *)(*v25 + 300) = -1;
      dword_8EED70 = 1;
      sub_483170(0);
      ++v24;
      v25 += 11;
    }
    while ( v24 < *(this + 1106) );
    v13 = a2;
  }
  if ( *(_WORD *)(v13 + 302) )
    sub_47E3A0(1);
  v26 = (int *)sub_482E20(v13);
  sub_47C950(v26);
  return 1;
}
