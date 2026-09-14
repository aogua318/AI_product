// 函数 0x47fa30  sub_47FA30  size=0x318  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47FA30(int this)
{
  int *result; // eax
  CHAR *v3; // eax
  CHAR v4; // cl
  int v5; // ebx
  char *v6; // eax
  HGDIOBJ v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  _WORD *v11; // edi
  char v12; // cl
  char v13; // cl
  int *v14; // eax
  char v15; // al
  UINT v16; // ebx
  int v17; // eax
  _WORD *v18; // edi
  char v19; // cl
  char v20; // cl
  COLORREF v21; // edi
  int v22; // [esp-18h] [ebp-128h]
  struct tagRECT *v23; // [esp-18h] [ebp-128h]
  struct tagRECT *v24; // [esp-18h] [ebp-128h]
  HGDIOBJ v25; // [esp-14h] [ebp-124h]
  COLORREF v26; // [esp-14h] [ebp-124h]
  COLORREF v27; // [esp-14h] [ebp-124h]
  int v28; // [esp+4h] [ebp-10Ch]
  COLORREF v29; // [esp+4h] [ebp-10Ch]
  HGDIOBJ v30; // [esp+8h] [ebp-108h] BYREF
  CHAR chText[256]; // [esp+Ch] [ebp-104h] BYREF

  result = sub_47F9F0((__int16 *)this);
  if ( *result > *(_DWORD *)(dword_8F2ABC + 28) )
    return result;
  if ( result[1] > *(_DWORD *)(dword_8F2ABC + 32) )
    return result;
  if ( result[2] < *(_DWORD *)(dword_8F2ABC + 20) )
    return result;
  result = (int *)result[3];
  if ( (int)result < *(_DWORD *)(dword_8F2ABC + 24) )
    return result;
  v3 = (CHAR *)(this + 28);
  do
  {
    v4 = *v3;
    chText[(_DWORD)v3 - 28 - this] = *v3;
    ++v3;
  }
  while ( v4 );
  v5 = *(unsigned __int8 *)(this + 24);
  v30 = (HGDIOBJ)v5;
  if ( v5 )
  {
    v6 = sub_47D310((char *)(*(_DWORD *)this + 148), v5, 512);
    dword_8F2AC0 = (int)v6;
    if ( !v6 )
      goto LABEL_33;
    v7 = *(HGDIOBJ *)v6;
    v8 = *(unsigned __int8 *)(this + 24) - *(_DWORD *)v6;
    if ( v8 < 0 )
      v8 = (int)v7 - *(unsigned __int8 *)(this + 24);
    if ( v8 < 4 )
      goto LABEL_21;
    v6 = sub_47D310(0, v5, 512);
    dword_8F2AC0 = (int)v6;
    if ( !v6 )
      goto LABEL_33;
    v7 = *(HGDIOBJ *)v6;
    v9 = *(unsigned __int8 *)(this + 24) - *(_DWORD *)v6;
    if ( v9 < 0 )
      v9 = (int)v7 - *(unsigned __int8 *)(this + 24);
    if ( v9 < 4 )
LABEL_21:
      v30 = v7;
  }
  else
  {
    v6 = sub_47D310((char *)(*(_DWORD *)this + 148), 1000, 512);
    dword_8F2AC0 = (int)v6;
    if ( v6 && *((_DWORD *)v6 + 75) && *(unsigned __int8 *)(this + 24) >= *(int *)v6 )
      v30 = *(HGDIOBJ *)v6;
    else
      v30 = (HGDIOBJ)16;
  }
  if ( v6 && *((_DWORD *)v6 + 75) && (int)v30 >= *(_DWORD *)v6 )
  {
    if ( dword_8F2AC8 == this )
    {
      v10 = *(__int16 *)(this + 20);
      v11 = (_WORD *)((char *)&v30 + 3);
      v28 = *(__int16 *)(this + 22);
      if ( dword_8F2ACC )
      {
        do
        {
          v12 = *((_BYTE *)v11 + 1);
          v11 = (_WORD *)((char *)v11 + 1);
        }
        while ( v12 );
        *v11 = 95;
      }
      else
      {
        do
        {
          v13 = *((_BYTE *)v11 + 1);
          v11 = (_WORD *)((char *)v11 + 1);
        }
        while ( v13 );
        *v11 = 32;
      }
    }
    else
    {
      v10 = *(__int16 *)(this + 16);
      v28 = *(__int16 *)(this + 18);
    }
    sub_47B910(v6, (*(unsigned __int8 *)(this + 27) >> 1) & 3, *(_BYTE *)(this + 26) == 0);
    v25 = v30;
    v22 = *(unsigned __int8 *)(this + 25);
    v14 = sub_47F9F0((__int16 *)this);
    return (int *)sub_47C220((int *)dword_8F2AC0, (int *)dword_8F2ABC, v14, chText, v28, v10, v22, (int)v25, 0, 255);
  }
LABEL_33:
  if ( *(_BYTE *)(this + 26) )
  {
    v16 = 0;
  }
  else
  {
    v15 = (*(_BYTE *)(this + 27) >> 1) & 3;
    v16 = 36;
    if ( v15 == 1 )
      v16 = 38;
    if ( v15 == 2 )
      v16 |= 1u;
  }
  if ( dword_8F2AC8 == this )
  {
    v29 = sub_47E1F0(*(__int16 *)(this + 20));
    v17 = sub_47E1F0(*(__int16 *)(this + 22));
    v18 = (_WORD *)((char *)&v30 + 3);
    if ( dword_8F2ACC )
    {
      do
      {
        v19 = *((_BYTE *)v18 + 1);
        v18 = (_WORD *)((char *)v18 + 1);
      }
      while ( v19 );
      *v18 = 95;
    }
    else
    {
      do
      {
        v20 = *((_BYTE *)v18 + 1);
        v18 = (_WORD *)((char *)v18 + 1);
      }
      while ( v20 );
      *v18 = 32;
    }
    v26 = v17;
    v23 = (struct tagRECT *)sub_47F9F0((__int16 *)this);
    return (int *)sub_46D4E0(hdc, (int *)dword_8F2ABC, chText, v30, v23, v26, v29, v16);
  }
  else
  {
    v21 = sub_47E1F0(*(__int16 *)(this + 16));
    v27 = sub_47E1F0(*(__int16 *)(this + 18));
    v24 = (struct tagRECT *)sub_47F9F0((__int16 *)this);
    return (int *)sub_46D4E0(hdc, (int *)dword_8F2ABC, chText, v30, v24, v27, v21, v16);
  }
}
