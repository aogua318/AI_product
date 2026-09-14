// 函数 0x483170  sub_483170  size=0x22D  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483170(int this, int a2)
{
  int result; // eax
  __int16 v4; // ax
  __int16 v5; // ax
  int v6; // ebx
  int v7; // esi
  __int16 v8; // ax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  _BYTE *v12; // eax
  bool v13; // zf
  __int16 v14; // ax
  int v15; // eax
  int v16; // edx
  bool v17; // zf
  int v18; // edx
  _BYTE *v19; // ecx

  if ( *(_DWORD *)(this + 288) )
    return -1;
  v4 = *(_WORD *)(this + 300);
  if ( v4 == -1 || *(_WORD *)(288 * v4 + *(_DWORD *)(this + 296) + 4) != 2 )
  {
    if ( !dword_8EED70 )
      return -1;
  }
  else
  {
    dword_8EED70 = 1;
  }
  v5 = *(_WORD *)(this + 300);
  v6 = a2;
  v7 = -1;
  dword_8F2AB8 = a2;
  if ( v5 != -1 && *(_BYTE *)(288 * v5 + *(_DWORD *)(this + 296) + 6) )
    *(_WORD *)(this + 300) = -1;
  if ( a2 != 6 )
  {
    if ( !a2 )
    {
      v8 = *(_WORD *)(this + 300);
      if ( v8 == -1 || !dword_8EED90 )
      {
LABEL_17:
        *(_WORD *)(this + 300) = -1;
      }
      else
      {
        v9 = 9 * v8;
        v10 = *(_DWORD *)(this + 296);
        v9 *= 32;
        v11 = *(__int16 *)(v10 + v9 + 4);
        v12 = (_BYTE *)(v9 + v10);
        switch ( v11 )
        {
          case 1:
            v13 = (v12[9] & 8) == 0;
            goto LABEL_16;
          case 2:
            v13 = (v12[8] & 0x38) == 0;
LABEL_16:
            if ( v13 )
              goto LABEL_17;
            break;
          case 3:
            v17 = (v12[9] & 8) == 0;
            goto LABEL_32;
          case 4:
            v17 = (v12[8] & 0x38) == 0;
LABEL_32:
            if ( v17 )
              *(_WORD *)(this + 300) = -1;
            break;
          case 7:
            if ( (v12[17] & 4) == 0 )
              goto LABEL_35;
            break;
          default:
LABEL_35:
            *(_WORD *)(this + 300) = -1;
            break;
        }
      }
    }
    if ( dword_8F2AC8 && a2 == 5 && !*(_BYTE *)(dword_8F2AC8 + 26) )
      *(_WORD *)(this + 300) = -1;
    v14 = *(_WORD *)(this + 300);
    if ( v14 == -1 )
    {
      v7 = sub_4830E0(this);
    }
    else
    {
      sub_482F80(*(_DWORD *)(this + 296) + 288 * v14);
      v15 = *(__int16 *)(this + 300);
      v16 = *(_DWORD *)(this + 296);
      if ( *(_BYTE *)(288 * v15 + v16 + 7) )
      {
        v7 = *(__int16 *)(this + 300);
        *(_BYTE *)(288 * v15 + v16 + 7) = 0;
      }
    }
    goto LABEL_25;
  }
  result = 0;
  if ( *(__int16 *)(this + 292) <= 0 )
  {
LABEL_25:
    if ( dword_8EED70 )
    {
      if ( sub_481E70(this, dword_8EED88, dword_8EED8C) )
      {
        dword_8EED70 = 0;
        if ( v7 == -1 && v6 == 1 )
          return -2;
      }
    }
    return v7;
  }
  v18 = *(_DWORD *)(this + 296);
  v19 = (_BYTE *)(v18 + 7);
  while ( !*v19 )
  {
    ++result;
    v19 += 288;
    if ( result >= *(__int16 *)(this + 292) )
    {
      v6 = a2;
      goto LABEL_25;
    }
  }
  *(_BYTE *)(288 * result + v18 + 7) = 0;
  dword_8EED70 = 0;
  return result;
}
