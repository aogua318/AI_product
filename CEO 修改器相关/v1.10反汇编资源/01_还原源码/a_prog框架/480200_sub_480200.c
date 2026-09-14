// 函数 0x480200  sub_480200  size=0x387  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_480200(__int16 *this)
{
  int result; // eax
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  LONG v9; // eax
  LONG v10; // edi
  int v11; // ecx
  int v12; // edi
  char *v13; // edx
  char *v14; // eax
  void *v15; // ecx
  int v16; // edx
  int v17; // edx
  _DWORD *v18; // edi
  __int16 *v19; // ecx
  int i; // ebx
  unsigned int v21; // edx
  int v22; // ebx
  int v23; // edi
  int v24; // edx
  COLORREF v25; // edi
  COLORREF v26; // eax
  int v27; // eax
  int v28; // eax
  __int16 v29; // dx
  int v30; // edx
  struct tagRECT rc; // [esp+4h] [ebp-28h] BYREF
  LONG v32; // [esp+14h] [ebp-18h]
  COLORREF v33; // [esp+18h] [ebp-14h]
  COLORREF v34; // [esp+1Ch] [ebp-10h]
  int v35; // [esp+20h] [ebp-Ch]
  unsigned int v36; // [esp+24h] [ebp-8h]
  HGDIOBJ v37; // [esp+28h] [ebp-4h]

  sub_464B60(&rc);
  result = (int)sub_47FFB0(this);
  if ( *(_DWORD *)result <= *(_DWORD *)(dword_8F2ABC + 28)
    && *(_DWORD *)(result + 4) <= *(_DWORD *)(dword_8F2ABC + 32)
    && *(_DWORD *)(result + 8) >= *(_DWORD *)(dword_8F2ABC + 20) )
  {
    result = *(_DWORD *)(result + 12);
    if ( result >= *(_DWORD *)(dword_8F2ABC + 24) )
    {
      v3 = sub_47E1F0(*(this + 11));
      v4 = *(this + 12);
      v33 = v3;
      v5 = sub_47E1F0(v4);
      v6 = *(_DWORD *)this;
      v7 = *(__int16 *)(*(_DWORD *)this + 276);
      v8 = *(this + 6);
      v34 = v5;
      rc.left = *(this + 5) + v7;
      v9 = v8 + *(__int16 *)(v6 + 278);
      v10 = rc.left + *(this + 7);
      rc.bottom = *((unsigned __int8 *)this + 21) + v9 + 1;
      v11 = *(this + 8);
      rc.right = v10;
      v12 = *((unsigned __int8 *)this + 18);
      v13 = (char *)(v6 + 148);
      rc.top = v9;
      v32 = v9 + v11;
      v37 = (HGDIOBJ)v12;
      if ( v12 )
      {
        v14 = sub_47D310(v13, v12, 512);
        dword_8F2AC0 = (int)v14;
        if ( !v14 )
          goto LABEL_19;
        v15 = *(void **)v14;
        v16 = v12 - *(_DWORD *)v14;
        if ( v16 < 0 )
          v16 = (int)v15 - v12;
        if ( v16 >= 4 )
        {
          v14 = sub_47D310(0, v12, 512);
          dword_8F2AC0 = (int)v14;
          if ( !v14 )
            goto LABEL_19;
          v15 = *(void **)v14;
          v17 = v12 - *(_DWORD *)v14;
          if ( v17 < 0 )
            v17 = (int)v15 - v12;
          if ( v17 >= 4 )
            goto LABEL_19;
        }
      }
      else
      {
        v14 = sub_47D310(v13, 1000, 512);
        dword_8F2AC0 = (int)v14;
        if ( !v14 || !*((_DWORD *)v14 + 75) || (v15 = *(void **)v14, *(int *)v14 > 0) )
        {
          v37 = (HGDIOBJ)16;
LABEL_19:
          v18 = *(_DWORD **)(*(_DWORD *)this + 16);
          v36 = 0;
          if ( v18 )
            v36 = v18[2];
          if ( *(this + 32) < v36 )
          {
            v19 = (__int16 *)(*v18 + 24 * *(this + 32));
            sub_466CA0(v19, (_DWORD *)dword_8F2ABC, rc.left + *(this + 30), rc.top + *(this + 31) - v19[3] - v19[1]);
            v14 = (char *)dword_8F2AC0;
          }
          for ( i = *((_DWORD *)this + 12); ; ++i )
          {
            v35 = i;
            if ( v36 )
            {
              v21 = *(this + 33);
              if ( v21 < v36 )
              {
                sub_466CA0(
                  (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v21),
                  (_DWORD *)dword_8F2ABC,
                  rc.left + *(this + 30),
                  rc.top + *(this + 31));
                v14 = (char *)dword_8F2AC0;
              }
            }
            if ( i >= *((_DWORD *)this + 11) )
            {
              v29 = *(this + 11);
              if ( v29 == -1 )
                goto LABEL_53;
              sub_468D20((int *)dword_8F2ABC, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, v29);
            }
            else if ( v14 && *((_DWORD *)v14 + 75) && (int)v37 >= *(_DWORD *)v14 )
            {
              if ( i == *((_DWORD *)this + 13) )
              {
                v22 = *(this + 15);
                v23 = *(this + 16);
              }
              else if ( i == *((_DWORD *)this + 14) )
              {
                v22 = *(this + 13);
                v23 = *(this + 14);
              }
              else
              {
                v24 = *((_DWORD *)this + 18);
                if ( v24 )
                  v23 = *(__int16 *)(v24 + 2 * i);
                else
                  v23 = *(this + 12);
                v22 = *(this + 11);
              }
              sub_47B910(v14, 0, 1);
              sub_47C220(
                (int *)dword_8F2AC0,
                (int *)dword_8F2ABC,
                &rc.left,
                (const char *)(*((_DWORD *)this + 9) + v35 * *((_DWORD *)this + 10)),
                v23,
                v22,
                *((unsigned __int8 *)this + 19),
                (int)v37,
                0,
                255);
              i = v35;
            }
            else
            {
              if ( i == *((_DWORD *)this + 13) )
              {
                v25 = sub_47E1F0(*(this + 15));
                v26 = sub_47E1F0(*(this + 16));
              }
              else
              {
                v27 = *((_DWORD *)this + 14);
                if ( i != v27 || v27 == -1 )
                {
                  v28 = *((_DWORD *)this + 18);
                  if ( v28 )
                    v26 = sub_47E1F0(*(__int16 *)(v28 + 2 * i));
                  else
                    v26 = v34;
                  v25 = v33;
                }
                else
                {
                  v25 = sub_47E1F0(*(this + 13));
                  v26 = sub_47E1F0(*(this + 14));
                }
              }
              sub_46D4E0(
                hdc,
                (int *)dword_8F2ABC,
                (LPCSTR)(*((_DWORD *)this + 9) + i * *((_DWORD *)this + 10)),
                v37,
                &rc,
                v26,
                v25,
                0x24u);
            }
            v14 = (char *)dword_8F2AC0;
LABEL_53:
            v30 = *((unsigned __int8 *)this + 21) + *((unsigned __int8 *)this + 20);
            rc.top += v30;
            rc.bottom += v30;
            if ( rc.bottom > v32 )
              rc.bottom = v32;
            if ( rc.top >= v32 )
            {
              result = *(this + 34);
              if ( result < v36 )
                return sub_466CA0(
                         (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * result),
                         (_DWORD *)dword_8F2ABC,
                         rc.left + *(this + 30),
                         rc.top + *(this + 31));
              return result;
            }
          }
        }
      }
      v37 = v15;
      goto LABEL_19;
    }
  }
  return result;
}
