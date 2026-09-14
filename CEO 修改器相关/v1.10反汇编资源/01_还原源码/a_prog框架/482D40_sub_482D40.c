// 函数 0x482d40  sub_482D40  size=0xDE  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_482D40(int this, int *a2, HDC a3)
{
  HDC v4; // eax
  int *v5; // ecx
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // ebx
  int v9; // edi
  int v10; // ecx

  if ( !*(_DWORD *)(this + 288) )
  {
    v4 = a3;
    if ( !a3 )
      v4 = hdcSrc;
    v5 = a2;
    if ( !a2 )
      v5 = &dword_8EEDEC;
    hdc = v4;
    v6 = *(_WORD *)(this + 280);
    dword_8F2ABC = (int)v5;
    if ( v6 == -1 )
    {
      v7 = *(_WORD *)(this + 282);
      if ( v7 != -1 )
        sub_468D20(
          v5,
          *(__int16 *)(this + 276),
          *(__int16 *)(this + 278),
          *(__int16 *)(this + 284),
          *(__int16 *)(this + 286),
          v7);
    }
    else
    {
      sub_466CA0(
        (__int16 *)(**(_DWORD **)(this + 16) + 24 * v6),
        v5,
        *(__int16 *)(this + 276),
        *(__int16 *)(this + 278));
    }
    v8 = 0;
    if ( *(__int16 *)(this + 292) > 0 )
    {
      v9 = 0;
      do
      {
        v10 = v9 + *(_DWORD *)(this + 296);
        if ( !*(_BYTE *)(v10 + 6) )
          sub_482000(v10);
        ++v8;
        v9 += 288;
      }
      while ( v8 < *(__int16 *)(this + 292) );
    }
  }
}
