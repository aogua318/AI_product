// 函数 0x482180  sub_482180  size=0x1DE  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_482180(int this)
{
  int *v2; // eax
  char v3; // bl
  int v4; // eax
  __int16 *v5; // ecx
  int v6; // edi
  unsigned int v7; // eax
  void *v8; // ecx
  int *v9; // eax
  char v11; // bl
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char v15; // bl
  int v16; // edi
  int v17; // ecx
  void *v18; // ecx
  int *v19; // eax
  int v20; // edi
  int v21; // ecx
  void *v22; // ecx
  int *v23; // eax
  int v24[4]; // [esp+4h] [ebp-10h] BYREF

  sub_464B60(v24);
  if ( (*(_BYTE *)(this + 9) & 1) == 0 )
    return 0;
  v2 = sub_47E590((void *)this);
  v24[0] = *v2;
  v24[1] = v2[1];
  v24[2] = v2[2];
  v24[3] = v2[3];
  if ( dword_8F2AB8 )
  {
    if ( dword_8F2AB8 == 1 )
    {
      v11 = *(_BYTE *)(this + 9);
      if ( (v11 & 4) != 0 )
      {
        if ( *(_WORD *)(this + 18) == 0xFFFF )
        {
          dword_8EED70 = 0;
          *(_BYTE *)(this + 7) = 1;
          return 0;
        }
        v12 = sub_47E540(this);
        *(_BYTE *)(this + 9) = v11 | 8;
        dword_8EED70 = 0;
        if ( v12 != sub_47E540(v13) )
        {
LABEL_9:
          v9 = sub_47E590(v8);
          sub_47C950(v9);
          sub_47C950(v24);
          return 0;
        }
      }
    }
    else if ( dword_8F2AB8 == 2 )
    {
      v3 = *(_BYTE *)(this + 9);
      if ( (v3 & 8) != 0 )
      {
        v4 = sub_47E540(this);
        *(_BYTE *)(this + 9) = v3 & 0xF7;
        v6 = v4;
        dword_8EED70 = 0;
        v7 = *(unsigned __int8 *)(this + 9);
        if ( (v7 & 4) != 0 )
        {
          LOBYTE(v7) = ~(_BYTE)v7;
          *(_BYTE *)(this + 7) = 1;
          sub_4810E0(v5, (HWND)((v7 >> 1) & 1));
        }
        if ( v6 != sub_47E540(this) )
          goto LABEL_9;
      }
    }
    return 0;
  }
  v14 = sub_47E8A0((void *)this, dword_8EED88, dword_8EED8C);
  v15 = *(_BYTE *)(this + 9);
  if ( !v14 )
  {
    if ( (v15 & 4) != 0 )
    {
      v20 = sub_47E540(this);
      *(_BYTE *)(this + 9) = v15 & 0xFB;
      if ( v20 != sub_47E540(v21) )
      {
        v23 = sub_47E590(v22);
        sub_47C950(v23);
        sub_47C950(v24);
      }
    }
    return 0;
  }
  if ( (v15 & 4) == 0 )
  {
    v16 = sub_47E540(this);
    *(_BYTE *)(this + 9) = v15 | 4;
    if ( v16 != sub_47E540(v17) )
    {
      v19 = sub_47E590(v18);
      sub_47C950(v19);
      sub_47C950(v24);
    }
  }
  *(_WORD *)(*(_DWORD *)this + 300) = (this - *(_DWORD *)(*(_DWORD *)this + 296)) / 0x120u;
  return 0;
}
