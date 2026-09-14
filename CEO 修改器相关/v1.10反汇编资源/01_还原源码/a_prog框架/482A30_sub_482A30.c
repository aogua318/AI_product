// 函数 0x482a30  sub_482A30  size=0x30B  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_482A30(int this)
{
  char v2; // al
  int *v3; // eax
  char v4; // al
  int *v5; // eax
  char v6; // al
  int *v7; // eax
  char v9; // al
  int *v10; // eax
  int *v11; // eax
  int v12; // edx
  __int16 v13; // dx
  int *v14; // eax
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  bool v18; // cc
  int *v19; // eax
  BOOL v20; // eax
  char v21; // cl
  int *v22; // eax
  int *v23; // eax
  BOOL v24; // eax
  unsigned __int8 v25; // cl
  char v26; // al
  int *v27; // eax
  int *v28; // eax
  BOOL v29; // eax
  unsigned __int8 v30; // cl
  char v31; // al
  int *v32; // eax
  int v33; // [esp-8h] [ebp-20h]
  int v34; // [esp-8h] [ebp-20h]
  int v35; // [esp-8h] [ebp-20h]
  int v36; // [esp-8h] [ebp-20h]
  int v37; // [esp-4h] [ebp-1Ch]
  int v38; // [esp-4h] [ebp-1Ch]
  int v39; // [esp-4h] [ebp-1Ch]
  int v40; // [esp-4h] [ebp-1Ch]
  int v41; // [esp+8h] [ebp-10h] BYREF
  int v42; // [esp+Ch] [ebp-Ch]
  int v43; // [esp+10h] [ebp-8h]
  int v44; // [esp+14h] [ebp-4h]

  sub_464B60(&v41);
  if ( !dword_8F2AB8 )
  {
    v38 = dword_8EED8C;
    v34 = dword_8EED88;
    v19 = sub_47F470((__int16 *)this);
    v20 = sub_464B90(v19, v34, v38);
    if ( v20 != (*(_BYTE *)(this + 8) & 1) )
    {
      v21 = *(_BYTE *)(this + 8) ^ (v20 ^ *(_BYTE *)(this + 8)) & 1;
      *(_BYTE *)(this + 8) = v21;
      if ( (v21 & 8) != 0 )
      {
        v22 = sub_47F470((__int16 *)this);
        sub_47C950(v22);
      }
    }
    v39 = dword_8EED8C;
    v35 = dword_8EED88;
    v23 = sub_47F530((__int16 *)this);
    v24 = sub_464B90(v23, v35, v39);
    v25 = *(_BYTE *)(this + 8);
    if ( v24 != ((v25 >> 1) & 1) )
    {
      v26 = v25 ^ (v25 ^ (2 * v24)) & 2;
      *(_BYTE *)(this + 8) = v26;
      if ( (v26 & 0x10) != 0 )
      {
        v27 = sub_47F530((__int16 *)this);
        sub_47C950(v27);
      }
    }
    if ( sub_47F5B0((int *)this) )
    {
      if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
      {
        sub_4828A0(this);
        dword_8EED70 = 0;
        *(_BYTE *)(this + 7) = 1;
      }
      else
      {
        v40 = dword_8EED8C;
        v36 = dword_8EED88;
        v28 = sub_47F5B0((int *)this);
        v29 = sub_464B90(v28, v36, v40);
        v30 = *(_BYTE *)(this + 8);
        if ( v29 != ((v30 >> 2) & 1) )
        {
          v31 = v30 ^ (v30 ^ (4 * v29)) & 4;
          *(_BYTE *)(this + 8) = v31;
          if ( (v31 & 0x20) != 0 )
          {
            v32 = sub_47F5B0((int *)this);
            sub_47C950(v32);
          }
        }
      }
    }
    if ( sub_47F880((__int16 *)this, dword_8EED88, dword_8EED8C) )
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
        v3 = sub_47F470((__int16 *)this);
        sub_47C950(v3);
        dword_8F2AD0 = 0;
        dword_8EED70 = 0;
      }
      v4 = *(_BYTE *)(this + 8);
      if ( (v4 & 0x10) != 0 )
      {
        *(_BYTE *)(this + 8) = v4 & 0xEF;
        v5 = sub_47F530((__int16 *)this);
        sub_47C950(v5);
        dword_8F2AD0 = 0;
        dword_8EED70 = 0;
      }
      v6 = *(_BYTE *)(this + 8);
      if ( (v6 & 0x20) != 0 )
      {
        *(_BYTE *)(this + 8) = v6 & 0xDF;
        v7 = sub_47F5B0((int *)this);
        sub_47C950(v7);
        dword_8EED70 = 0;
        return 0;
      }
    }
    return 0;
  }
  v9 = *(_BYTE *)(this + 8);
  if ( (v9 & 1) != 0 )
  {
    *(_BYTE *)(this + 8) = v9 | 8;
    v10 = sub_47F470((__int16 *)this);
LABEL_14:
    sub_47C950(v10);
    dword_8EED70 = 0;
    dword_8F2AD0 = this;
    return 0;
  }
  if ( (v9 & 2) != 0 )
  {
    *(_BYTE *)(this + 8) = v9 | 0x10;
    v10 = sub_47F530((__int16 *)this);
    goto LABEL_14;
  }
  if ( (v9 & 4) != 0 )
  {
    v11 = sub_47F5B0((int *)this);
    v41 = *v11;
    v42 = v11[1];
    v43 = v11[2];
    v12 = v11[3];
    *(_BYTE *)(this + 8) |= 0x20u;
    v44 = v12;
    sub_47C950(&v41);
    v13 = v42;
    *(_WORD *)(this + 24) = v41 - dword_8EED88;
    *(_WORD *)(this + 26) = v13 - dword_8EED8C;
    dword_8EED70 = 0;
    return 0;
  }
  v37 = dword_8EED8C;
  v33 = dword_8EED88;
  v14 = sub_47F430((__int16 *)this);
  if ( !sub_464B90(v14, v33, v37) )
    return 0;
  v15 = sub_47F5B0((int *)this);
  v16 = *v15;
  v41 = *v15;
  v17 = v15[1];
  v42 = v17;
  v43 = v15[2];
  v44 = v15[3];
  if ( *(_WORD *)(this + 20) )
    v18 = dword_8EED8C < v17;
  else
    v18 = dword_8EED88 < v16;
  if ( v18 )
    sub_481940((int *)this, (HWND)(*(_DWORD *)(this + 16) - *(__int16 *)(this + 22)));
  else
    sub_481940((int *)this, (HWND)(*(_DWORD *)(this + 16) + *(__int16 *)(this + 22)));
  dword_8EED70 = 0;
  *(_BYTE *)(this + 7) = 1;
  return 0;
}
