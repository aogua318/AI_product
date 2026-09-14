// 函数 0x482450  sub_482450  size=0x442  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_482450(int this)
{
  char v2; // al
  int *v3; // eax
  char v4; // al
  int *v5; // eax
  int *v6; // eax
  char v8; // al
  int *v9; // eax
  int *v10; // eax
  int v11; // edx
  __int16 v12; // dx
  __int16 v13; // di
  int *v14; // eax
  bool v15; // zf
  int v16; // ecx
  int v17; // edx
  bool v18; // cc
  char v19; // al
  int v20; // edi
  int v21; // eax
  char v22; // cl
  int *v23; // eax
  char v24; // al
  int v25; // edi
  int v26; // eax
  unsigned __int8 v27; // cl
  char v28; // al
  int *v29; // eax
  int v30; // edi
  int v31; // eax
  unsigned __int8 v32; // cl
  char v33; // al
  int *v34; // eax
  int v35; // [esp+Ch] [ebp-10h] BYREF
  int v36; // [esp+10h] [ebp-Ch]
  int v37; // [esp+14h] [ebp-8h]
  int v38; // [esp+18h] [ebp-4h]

  sub_464B60(&v35);
  if ( !dword_8F2AB8 )
  {
    v19 = *(_BYTE *)(this + 8);
    if ( (v19 & 8) != 0 && (v19 & 1) != 0 )
      v20 = *(__int16 *)(this + 44);
    else
      v20 = *(__int16 *)(this + 42);
    v21 = 0;
    if ( v20 != -1 )
      v21 = sub_467130(
              (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v20),
              *(__int16 *)(this + 28) + *(__int16 *)(this + 54) + *(__int16 *)(*(_DWORD *)this + 276),
              *(__int16 *)(this + 30) + *(__int16 *)(this + 56) + *(__int16 *)(*(_DWORD *)this + 278),
              dword_8EED88,
              dword_8EED8C);
    if ( v21 != (*(_BYTE *)(this + 8) & 1) )
    {
      v22 = *(_BYTE *)(this + 8) ^ (v21 ^ *(_BYTE *)(this + 8)) & 1;
      *(_BYTE *)(this + 8) = v22;
      if ( (v22 & 8) != 0 )
      {
        v23 = sub_47E990((__int16 *)this);
        sub_47C950(v23);
      }
    }
    v24 = *(_BYTE *)(this + 8);
    if ( (v24 & 0x10) != 0 && (v24 & 2) != 0 )
      v25 = *(__int16 *)(this + 48);
    else
      v25 = *(__int16 *)(this + 46);
    v26 = 0;
    if ( v25 != -1 )
      v26 = sub_467130(
              (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v25),
              *(__int16 *)(this + 28) + *(__int16 *)(this + 58) + *(__int16 *)(*(_DWORD *)this + 276),
              *(__int16 *)(this + 30) + *(__int16 *)(this + 60) + *(__int16 *)(*(_DWORD *)this + 278),
              dword_8EED88,
              dword_8EED8C);
    v27 = *(_BYTE *)(this + 8);
    if ( v26 != ((v27 >> 1) & 1) )
    {
      v28 = v27 ^ (v27 ^ (2 * v26)) & 2;
      *(_BYTE *)(this + 8) = v28;
      if ( (v28 & 0x10) != 0 )
      {
        v29 = sub_47EAD0((__int16 *)this);
        sub_47C950(v29);
      }
    }
    if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
    {
      sub_4823C0((__int16 *)this);
      dword_8EED70 = 0;
      *(_BYTE *)(this + 7) = 1;
    }
    else
    {
      v30 = *(__int16 *)(this + 50);
      v31 = 0;
      if ( v30 != -1 )
        v31 = sub_467130(
                (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v30),
                *(__int16 *)(this + 28) + *(__int16 *)(this + 62) + *(__int16 *)(*(_DWORD *)this + 276),
                *(__int16 *)(this + 30) + *(__int16 *)(this + 64) + *(__int16 *)(*(_DWORD *)this + 278),
                dword_8EED88,
                dword_8EED8C);
      v32 = *(_BYTE *)(this + 8);
      if ( v31 != ((v32 >> 2) & 1) )
      {
        v33 = v32 ^ (v32 ^ (4 * v31)) & 4;
        *(_BYTE *)(this + 8) = v33;
        if ( (v33 & 0x20) != 0 )
        {
          if ( sub_47EC10((int *)this) )
          {
            v34 = sub_47EC10((int *)this);
            sub_47C950(v34);
          }
        }
      }
    }
    if ( sub_47ED10((__int16 *)this, dword_8EED88, dword_8EED8C) )
      *(_WORD *)(*(_DWORD *)this + 300) = (this - *(_DWORD *)(*(_DWORD *)this + 296)) / 0x120u;
    return 0;
  }
  if ( dword_8F2AB8 != 1 )
  {
    if ( dword_8F2AB8 == 2 )
    {
      v2 = *(_BYTE *)(this + 8);
      if ( (v2 & 8) != 0 )
      {
        *(_BYTE *)(this + 8) = v2 & 0xF7;
        v3 = sub_47E990((__int16 *)this);
        sub_47C950(v3);
        dword_8F2AD0 = 0;
        dword_8EED70 = 0;
      }
      v4 = *(_BYTE *)(this + 8);
      if ( (v4 & 0x10) != 0 )
      {
        *(_BYTE *)(this + 8) = v4 & 0xEF;
        v5 = sub_47EAD0((__int16 *)this);
        sub_47C950(v5);
        dword_8F2AD0 = 0;
        dword_8EED70 = 0;
      }
      if ( (*(_BYTE *)(this + 8) & 0x20) != 0 && sub_47EC10((int *)this) )
      {
        *(_BYTE *)(this + 8) &= ~0x20u;
        v6 = sub_47EC10((int *)this);
        sub_47C950(v6);
        dword_8EED70 = 0;
        return 0;
      }
    }
    return 0;
  }
  v8 = *(_BYTE *)(this + 8);
  if ( (v8 & 1) != 0 )
  {
    *(_BYTE *)(this + 8) = v8 | 8;
    v9 = sub_47E990((__int16 *)this);
LABEL_15:
    sub_47C950(v9);
    dword_8F2AD0 = this;
    dword_8EED70 = 0;
    return 0;
  }
  if ( (v8 & 2) != 0 )
  {
    *(_BYTE *)(this + 8) = v8 | 0x10;
    v9 = sub_47EAD0((__int16 *)this);
    goto LABEL_15;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( sub_47EC10((int *)this) )
    {
      v10 = sub_47EC10((int *)this);
      v35 = *v10;
      v36 = v10[1];
      v37 = v10[2];
      v11 = v10[3];
      *(_BYTE *)(this + 8) |= 0x20u;
      v38 = v11;
      sub_47C950(&v35);
      v12 = v36;
      *(_WORD *)(this + 24) = v35 - dword_8EED88;
      *(_WORD *)(this + 26) = v12 - dword_8EED8C;
      dword_8EED70 = 0;
      return 0;
    }
    return 0;
  }
  v13 = *(_WORD *)(this + 32);
  if ( v13 == -1
    || !sub_467130(
          (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v13),
          *(__int16 *)(this + 28) + *(__int16 *)(*(_DWORD *)this + 276),
          *(__int16 *)(this + 30) + *(__int16 *)(*(_DWORD *)this + 278),
          dword_8EED88,
          dword_8EED8C)
    || !sub_47EC10((int *)this) )
  {
    return 0;
  }
  v14 = sub_47EC10((int *)this);
  v15 = *(_WORD *)(this + 20) == 0;
  v16 = *v14;
  v35 = *v14;
  v17 = v14[1];
  v36 = v17;
  v37 = v14[2];
  v38 = v14[3];
  if ( v15 )
    v18 = dword_8EED88 < v16;
  else
    v18 = dword_8EED8C < v17;
  if ( v18 )
    sub_481500(this, (HWND)(*(_DWORD *)(this + 16) - *(__int16 *)(this + 22)));
  else
    sub_481500(this, (HWND)(*(_DWORD *)(this + 16) + *(__int16 *)(this + 22)));
  dword_8EED70 = 0;
  *(_BYTE *)(this + 7) = 1;
  return 0;
}
