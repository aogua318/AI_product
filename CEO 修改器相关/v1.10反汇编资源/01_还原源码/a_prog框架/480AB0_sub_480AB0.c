// 函数 0x480ab0  sub_480AB0  size=0x365  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__thiscall sub_480AB0(int this)
{
  void *result; // eax
  int *v3; // eax
  int v4; // ecx
  __int16 v5; // dx
  __int16 v6; // dx
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // ebx
  int v19; // edx
  _DWORD *v20; // edx
  __int16 v21; // cx
  int v22; // eax
  int v23; // eax
  __int16 *v24; // ecx
  _DWORD v25[2]; // [esp+4h] [ebp-18h] BYREF
  void *v26; // [esp+Ch] [ebp-10h]
  int v27; // [esp+10h] [ebp-Ch]
  int v28; // [esp+14h] [ebp-8h]
  int v29; // [esp+18h] [ebp-4h]

  result = sub_464B60(v25);
  if ( *(int *)(this + 32) < 1 )
    return result;
  v3 = sub_480990((__int16 *)this);
  sub_464CE0(v25, v3);
  result = (void *)v25[0];
  v4 = dword_8F2ABC;
  if ( v25[0] > *(_DWORD *)(dword_8F2ABC + 28) )
    return result;
  if ( v25[1] > *(_DWORD *)(dword_8F2ABC + 32) )
    return result;
  result = v26;
  if ( (int)v26 < *(_DWORD *)(dword_8F2ABC + 20) || v27 < *(_DWORD *)(dword_8F2ABC + 24) )
    return result;
  v5 = *(_WORD *)(this + 24);
  if ( v5 != -1 )
  {
    sub_466CA0(
      (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v5),
      (_DWORD *)dword_8F2ABC,
      *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276),
      *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 278));
LABEL_10:
    v4 = dword_8F2ABC;
    goto LABEL_11;
  }
  v6 = *(_WORD *)(this + 28);
  if ( v6 != -1 )
  {
    sub_468D20(
      (int *)dword_8F2ABC,
      *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276),
      *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 278),
      *(__int16 *)(this + 12),
      *(__int16 *)(this + 14),
      v6);
    goto LABEL_10;
  }
LABEL_11:
  if ( *(_WORD *)(this + 26) != 0xFFFF )
    sub_464CE0(v25, (_DWORD *)(v4 + 20));
  switch ( *(_BYTE *)(this + 16) )
  {
    case 0:
      v7 = *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 278);
      v8 = *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276);
      v9 = v8 + *(_DWORD *)(this + 36) * *(__int16 *)(this + 12) / *(_DWORD *)(this + 32);
      v10 = v7 + *(__int16 *)(this + 14);
      v29 = v9;
      v28 = v10;
      goto LABEL_20;
    case 1:
      v11 = *(__int16 *)(this + 14);
      v12 = v11 * *(_DWORD *)(this + 36) / *(_DWORD *)(this + 32);
      v8 = *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276);
      v13 = *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 278);
      v29 = v8 + *(__int16 *)(this + 12);
      v7 = v11 + v13 - v12;
      v28 = v7 + v12;
      goto LABEL_19;
    case 2:
      v14 = *(__int16 *)(this + 12);
      v15 = v14 * *(_DWORD *)(this + 36) / *(_DWORD *)(this + 32);
      v8 = v14 + *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276) - v15;
      v16 = *(__int16 *)(*(_DWORD *)this + 278);
      v17 = *(__int16 *)(this + 10);
      v29 = v8 + v15;
      v7 = v17 + v16;
      v28 = v7 + *(__int16 *)(this + 14);
      goto LABEL_19;
    case 3:
      v18 = *(__int16 *)(*(_DWORD *)this + 278);
      v19 = *(__int16 *)(this + 10);
      v8 = *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276);
      v29 = v8 + *(__int16 *)(this + 12);
      v7 = v19 + v18;
      v28 = v7 + *(_DWORD *)(this + 36) * *(__int16 *)(this + 14) / *(_DWORD *)(this + 32);
      goto LABEL_19;
    default:
      v8 = v28;
      v7 = v28;
LABEL_19:
      v9 = v29;
      v10 = v28;
LABEL_20:
      if ( *(_WORD *)(this + 26) == 0xFFFF )
      {
        result = sub_468D20((int *)dword_8F2ABC, v8, v7, v9 - v8, v10 - v7, *(_WORD *)(this + 30));
      }
      else
      {
        v20 = (_DWORD *)dword_8F2ABC;
        if ( *(_DWORD *)(dword_8F2ABC + 20) < v8 )
          *(_DWORD *)(dword_8F2ABC + 20) = v8;
        if ( v20[6] < v7 )
          v20[6] = v7;
        if ( v20[7] > v9 )
          v20[7] = v9;
        if ( v20[8] > v10 )
          v20[8] = v10;
        sub_466CA0(
          (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * *(__int16 *)(this + 26)),
          (_DWORD *)dword_8F2ABC,
          *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276),
          *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 278));
        result = (void *)sub_464CE0((_DWORD *)(dword_8F2ABC + 20), v25);
      }
      v21 = *(_WORD *)(this + 18);
      if ( v21 != -1 )
      {
        switch ( *(_BYTE *)(this + 16) )
        {
          case 0:
            *(_WORD *)(this + 20) = v29;
            *(_WORD *)(this + 22) = (v28 + v7) / 2;
            break;
          case 1:
            v22 = v8 + v29 - ((v8 + v29) >> 31);
            *(_WORD *)(this + 22) = v7;
            goto LABEL_37;
          case 2:
            v23 = (v28 + v7) / 2;
            *(_WORD *)(this + 20) = v8;
            *(_WORD *)(this + 22) = v23;
            break;
          case 3:
            v22 = v8 + v29 - ((v8 + v29) >> 31);
            *(_WORD *)(this + 22) = v28;
LABEL_37:
            *(_WORD *)(this + 20) = v22 >> 1;
            break;
          default:
            break;
        }
        v24 = (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v21);
        if ( (*(_BYTE *)(this + 17) & 8) != 0 )
        {
          *(_WORD *)(this + 20) += -*v24 - v24[2] / 2;
          *(_WORD *)(this + 22) += -v24[1] - v24[3] / 2;
        }
        result = (void *)sub_466CA0(v24, (_DWORD *)dword_8F2ABC, *(__int16 *)(this + 20), *(__int16 *)(this + 22));
      }
      break;
  }
  return result;
}
