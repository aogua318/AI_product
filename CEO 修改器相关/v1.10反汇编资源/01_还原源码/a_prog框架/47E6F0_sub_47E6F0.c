// 函数 0x47e6f0  sub_47E6F0  size=0x1A3  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__thiscall sub_47E6F0(__int16 *this)
{
  int v2; // eax
  bool v3; // zf
  void *result; // eax
  int v5; // edi
  char *v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int *v10; // eax
  struct tagRECT *v11; // eax
  const char *v12; // [esp-20h] [ebp-3Ch]
  int v13; // [esp-1Ch] [ebp-38h]
  int v14; // [esp-14h] [ebp-30h]
  COLORREF v15; // [esp-10h] [ebp-2Ch]
  _DWORD v16[4]; // [esp+8h] [ebp-14h] BYREF
  LPCSTR lpchText; // [esp+18h] [ebp-4h]

  sub_464B60(v16);
  v2 = sub_47E540((int)this);
  if ( v2 != -1 )
    sub_466CA0(
      (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v2),
      (_DWORD *)dword_8F2ABC,
      *(this + 5) + *(__int16 *)(*(_DWORD *)this + 276),
      *(this + 6) + *(__int16 *)(*(_DWORD *)this + 278));
  v3 = *((_BYTE *)this + 28) == 0;
  result = this + 14;
  lpchText = (LPCSTR)(this + 14);
  if ( !v3 && *(this + 13) != -1 )
  {
    v5 = *((unsigned __int8 *)this + 24);
    if ( !*((_BYTE *)this + 24) )
    {
      v6 = sub_47D310((char *)(*(_DWORD *)this + 148), 1000, 512);
      dword_8F2AC0 = (int)v6;
      if ( !v6 || !*((_DWORD *)v6 + 75) || (v5 = *(_DWORD *)v6, *((unsigned __int8 *)this + 24) < *(int *)v6) )
        v5 = 16;
      goto LABEL_19;
    }
    v6 = sub_47D310((char *)(*(_DWORD *)this + 148), v5, 512);
    dword_8F2AC0 = (int)v6;
    if ( v6 )
    {
      v7 = *(_DWORD *)v6;
      v8 = *((unsigned __int8 *)this + 24) - *(_DWORD *)v6;
      if ( v8 < 0 )
        v8 = v7 - *((unsigned __int8 *)this + 24);
      if ( v8 < 4 )
        goto LABEL_18;
      v6 = sub_47D310(0, v5, 512);
      dword_8F2AC0 = (int)v6;
      if ( v6 )
      {
        v7 = *(_DWORD *)v6;
        v9 = *((unsigned __int8 *)this + 24) - *(_DWORD *)v6;
        if ( v9 < 0 )
          v9 = v7 - *((unsigned __int8 *)this + 24);
        if ( v9 >= 4 )
        {
LABEL_19:
          if ( v6 && *((_DWORD *)v6 + 75) && v5 >= *(_DWORD *)v6 )
          {
            sub_47B910(v6, 2, 1);
            v14 = *((unsigned __int8 *)this + 25);
            v13 = *(this + 13);
            v12 = lpchText;
            v10 = sub_47E590(this);
            return (void *)sub_47C220((int *)dword_8F2AC0, (int *)dword_8F2ABC, v10, v12, v13, -1, v14, v5, 0, 255);
          }
          goto LABEL_23;
        }
LABEL_18:
        v5 = v7;
        goto LABEL_19;
      }
    }
LABEL_23:
    v15 = sub_47E1F0(*(this + 13));
    v11 = (struct tagRECT *)sub_47E590(this);
    return sub_46D4E0(hdc, (int *)dword_8F2ABC, lpchText, (HGDIOBJ)v5, v11, v15, 0xFFFFFFFF, 0x25u);
  }
  return result;
}
