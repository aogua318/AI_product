// 函数 0x47f010  sub_47F010  size=0x1D9  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__thiscall sub_47F010(int this)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx
  int v4; // edi
  char *v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int *v9; // eax
  COLORREF v10; // ebx
  struct tagRECT *v11; // eax
  __int16 *v12; // ecx
  int v13; // [esp-18h] [ebp-3Ch]
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-10h] [ebp-34h]
  COLORREF v16; // [esp-8h] [ebp-2Ch]
  _DWORD v17[4]; // [esp+Ch] [ebp-18h] BYREF
  char Src[4]; // [esp+1Ch] [ebp-8h] BYREF
  int v19; // [esp+20h] [ebp-4h] BYREF

  sub_464B60(v17);
  result = sub_47EEA0((__int16 *)this);
  v3 = (_DWORD *)dword_8F2ABC;
  if ( *result > *(_DWORD *)(dword_8F2ABC + 28) )
    goto LABEL_25;
  if ( result[1] > *(_DWORD *)(dword_8F2ABC + 32) )
    goto LABEL_25;
  if ( result[2] < *(_DWORD *)(dword_8F2ABC + 20) )
    goto LABEL_25;
  result = (_DWORD *)result[3];
  if ( (int)result < *(_DWORD *)(dword_8F2ABC + 24) )
    goto LABEL_25;
  sub_47EF00(this, Src, &v19);
  v4 = *(unsigned __int8 *)(this + 274);
  if ( !*(_BYTE *)(this + 274) )
  {
    v5 = sub_47D310((char *)(*(_DWORD *)this + 148), 1000, 512);
    dword_8F2AC0 = (int)v5;
    if ( !v5 || !*((_DWORD *)v5 + 75) || (v4 = *(_DWORD *)v5, *(unsigned __int8 *)(this + 274) < *(int *)v5) )
      v4 = 16;
    goto LABEL_19;
  }
  v5 = sub_47D310((char *)(*(_DWORD *)this + 148), v4, 512);
  dword_8F2AC0 = (int)v5;
  if ( !v5 )
    goto LABEL_23;
  v6 = *(_DWORD *)v5;
  v7 = *(unsigned __int8 *)(this + 274) - *(_DWORD *)v5;
  if ( v7 < 0 )
    v7 = v6 - *(unsigned __int8 *)(this + 274);
  if ( v7 < 4 )
    goto LABEL_18;
  v5 = sub_47D310(0, v4, 512);
  dword_8F2AC0 = (int)v5;
  if ( !v5 )
  {
LABEL_23:
    v10 = sub_47E1F0(v19);
    v16 = sub_47E1F0(*(unsigned int *)Src);
    v11 = (struct tagRECT *)sub_47EEA0((__int16 *)this);
    result = sub_46D4E0(hdc, (int *)dword_8F2ABC, (LPCSTR)(this + 18), (HGDIOBJ)v4, v11, v10, v16, 0x25u);
    goto LABEL_24;
  }
  v6 = *(_DWORD *)v5;
  v8 = *(unsigned __int8 *)(this + 274) - *(_DWORD *)v5;
  if ( v8 < 0 )
    v8 = v6 - *(unsigned __int8 *)(this + 274);
  if ( v8 < 4 )
LABEL_18:
    v4 = v6;
LABEL_19:
  if ( !v5 || !*((_DWORD *)v5 + 75) || v4 < *(_DWORD *)v5 )
    goto LABEL_23;
  sub_47B910(v5, 2, 1);
  v15 = *(unsigned __int8 *)(this + 275);
  v14 = *(_DWORD *)Src;
  v13 = v19;
  v9 = sub_47EEA0((__int16 *)this);
  result = (_DWORD *)sub_47C220(
                       (int *)dword_8F2AC0,
                       (int *)dword_8F2ABC,
                       v9,
                       (const char *)(this + 18),
                       v13,
                       v14,
                       v15,
                       v4,
                       0,
                       255);
LABEL_24:
  v3 = (_DWORD *)dword_8F2ABC;
LABEL_25:
  v12 = *(__int16 **)(this + 268);
  if ( v12 )
    return (_DWORD *)sub_466CA0(
                       v12,
                       v3,
                       *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 276),
                       *(__int16 *)(this + 12) + *(__int16 *)(*(_DWORD *)this + 278));
  return result;
}
