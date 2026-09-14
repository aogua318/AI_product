// 函数 0x46a6b0  sub_46A6B0  size=0x492  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A6B0(char *this, int a2, int Src, int a4, int a5)
{
  int v5; // edi
  int v6; // eax
  int result; // eax
  __int16 v9; // ax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // kr00_4
  int v19; // ebx
  int v20; // ecx
  unsigned int v21; // esi
  int v22; // eax
  int v23; // kr04_4
  int v24; // ecx
  int v25; // ebx
  unsigned int v26; // esi
  int v27; // eax
  int v28; // kr08_4
  _WORD *v29; // ecx
  bool v30; // sf
  int v31; // ebx
  int v32; // edx
  unsigned int v33; // esi
  int v34; // eax
  int v35; // kr0C_4
  char *v36; // esi
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // kr10_4
  __int16 v41; // cx
  int v42; // eax
  size_t v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // esi
  char *v47; // eax
  _DWORD *v48; // eax
  char *v49; // esi
  void *v50; // [esp-14h] [ebp-40h]
  size_t v51; // [esp-10h] [ebp-3Ch]
  size_t v52; // [esp-8h] [ebp-34h]
  __int16 v53; // [esp+8h] [ebp-24h]
  __int16 v54; // [esp+8h] [ebp-24h]
  int v55; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v56; // [esp+10h] [ebp-1Ch]
  size_t Size; // [esp+14h] [ebp-18h]
  void *v58; // [esp+18h] [ebp-14h]
  int v59; // [esp+1Ch] [ebp-10h] BYREF
  int v60; // [esp+20h] [ebp-Ch]
  int v61; // [esp+24h] [ebp-8h]
  char *v62; // [esp+28h] [ebp-4h]

  v5 = a2;
  v6 = 2 * *(_DWORD *)(a2 + 4) * *(_DWORD *)(a2 + 8);
  v62 = this;
  result = (int)sub_465E40(4 * v6, "a_lib\\a_pic.cpp", 80);
  v58 = (void *)result;
  if ( result )
  {
    *(_DWORD *)(this + 10) = 0;
    v9 = *(_WORD *)(v5 + 12);
    *((_WORD *)this + 4) = v9;
    v10 = *(_DWORD *)v5;
    v11 = *(_DWORD *)(v5 + 4);
    Size = v9 >> 3;
    v12 = -Src;
    *(_WORD *)this = -(__int16)Src;
    v53 = v12;
    v13 = -a4;
    *((_WORD *)this + 1) = -(__int16)a4;
    v14 = 0;
    v61 = v10;
    a2 = v11;
    v55 = v13;
    v60 = -1;
    if ( v10 > 0 )
    {
      v15 = v11;
      do
      {
        v16 = 0;
        if ( v15 > 0 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v14 < *(_DWORD *)v5 )
            {
              if ( v16 < *(_DWORD *)(v5 + 4) )
              {
                v18 = *(_DWORD *)(v5 + 12);
                Src = 0;
                if ( v18 / 8 > 0 )
                {
                  memcpy(&Src, (const void *)(*(_DWORD *)(*(_DWORD *)(v5 + 40) + 4 * v16) + v14 * (v18 / 8)), v18 / 8);
                  v15 = a2;
                }
                v17 = Src;
              }
              else
              {
                v17 = -1;
              }
            }
            else
            {
              v17 = -1;
            }
            if ( v17 != a5 )
              break;
            if ( (int)++v16 >= v15 )
              goto LABEL_16;
          }
          v60 = v14;
          if ( v14 != -1 )
            break;
        }
LABEL_16:
        ++v14;
      }
      while ( v14 < v61 );
    }
    v19 = 0;
    a4 = -1;
    if ( a2 > 0 )
    {
      v20 = v61;
      do
      {
        v21 = 0;
        if ( v20 > 0 )
        {
          while ( 1 )
          {
            if ( v21 < *(_DWORD *)v5 )
            {
              if ( (unsigned int)v19 < *(_DWORD *)(v5 + 4) )
              {
                v23 = *(_DWORD *)(v5 + 12);
                Src = 0;
                if ( v23 / 8 > 0 )
                {
                  memcpy(&Src, (const void *)(*(_DWORD *)(*(_DWORD *)(v5 + 40) + 4 * v19) + v21 * (v23 / 8)), v23 / 8);
                  v20 = v61;
                }
                v22 = Src;
              }
              else
              {
                v22 = -1;
              }
            }
            else
            {
              v22 = -1;
            }
            if ( v22 != a5 )
              break;
            if ( (int)++v21 >= v20 )
              goto LABEL_31;
          }
          a4 = v19;
          if ( v19 != -1 )
            break;
        }
LABEL_31:
        ++v19;
      }
      while ( v19 < a2 );
    }
    *((_WORD *)v62 + 2) = -1;
    v24 = v61 - 1;
    Src = v61 - 1;
    if ( v61 - 1 >= 0 )
    {
      v25 = a2;
      do
      {
        v26 = 0;
        if ( v25 > 0 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v24 < *(_DWORD *)v5 )
            {
              if ( v26 < *(_DWORD *)(v5 + 4) )
              {
                v28 = *(_DWORD *)(v5 + 12);
                v59 = 0;
                if ( v28 / 8 > 0 )
                {
                  memcpy(&v59, (const void *)(*(_DWORD *)(*(_DWORD *)(v5 + 40) + 4 * v26) + Src * (v28 / 8)), v28 / 8);
                  v24 = Src;
                  v25 = a2;
                }
                v27 = v59;
              }
              else
              {
                v27 = -1;
              }
            }
            else
            {
              v27 = -1;
            }
            if ( v27 != a5 )
              break;
            if ( (int)++v26 >= v25 )
              goto LABEL_46;
          }
          *((_WORD *)v62 + 2) = v24 - v60 + 1;
        }
LABEL_46:
        if ( *((_WORD *)v62 + 2) != 0xFFFF )
          break;
        Src = --v24;
      }
      while ( v24 >= 0 );
    }
    v29 = v62;
    v31 = a2 - 1;
    v30 = a2 - 1 < 0;
    *((_WORD *)v62 + 3) = -1;
    if ( !v30 )
    {
      v32 = v61;
      do
      {
        v33 = 0;
        if ( v32 > 0 )
        {
          while ( 1 )
          {
            if ( v33 < *(_DWORD *)v5 )
            {
              if ( (unsigned int)v31 < *(_DWORD *)(v5 + 4) )
              {
                v35 = *(_DWORD *)(v5 + 12);
                a2 = 0;
                if ( v35 / 8 > 0 )
                {
                  memcpy(&a2, (const void *)(*(_DWORD *)(*(_DWORD *)(v5 + 40) + 4 * v31) + v33 * (v35 / 8)), v35 / 8);
                  v29 = v62;
                }
                v34 = a2;
                v32 = v61;
              }
              else
              {
                v34 = -1;
              }
            }
            else
            {
              v34 = -1;
            }
            if ( v34 != a5 )
              break;
            if ( (int)++v33 >= v32 )
              goto LABEL_62;
          }
          v29[3] = v31 - a4 + 1;
        }
LABEL_62:
        if ( v29[3] != 0xFFFF )
          break;
        --v31;
      }
      while ( v31 >= 0 );
    }
    v36 = (char *)v58;
    *v29 = v60 + v53;
    v29[1] = a4 + v55;
    v29[5] = 0;
    v59 = 0;
    v61 = 0;
    v54 = 0;
    a2 = 0;
    if ( (__int16)v29[3] > 0 )
    {
      while ( 1 )
      {
        v37 = *((__int16 *)v62 + 2);
        v38 = 0;
        Src = 0;
        if ( v37 > 0 )
          break;
LABEL_85:
        v45 = *((__int16 *)v62 + 3);
        if ( ++a2 >= v45 )
          goto LABEL_86;
      }
      v56 = a2 + a4;
      while ( 1 )
      {
        if ( (unsigned int)(v38 + v60) < *(_DWORD *)v5 )
        {
          if ( v56 < *(_DWORD *)(v5 + 4) )
          {
            v40 = *(_DWORD *)(v5 + 12);
            v55 = 0;
            if ( v40 / 8 > 0 )
            {
              memcpy(&v55, (const void *)(*(_DWORD *)(*(_DWORD *)(v5 + 40) + 4 * v56) + v40 / 8 * (v38 + v60)), v40 / 8);
              v38 = Src;
            }
            v39 = v55;
          }
          else
          {
            v39 = -1;
          }
        }
        else
        {
          v39 = -1;
        }
        Src = v39;
        if ( !v59 )
        {
          if ( v39 == a5 )
            goto LABEL_84;
          v41 = v38 - v61;
          *((_WORD *)v36 + 1) = a2 - v54;
          *(_WORD *)v36 = v41;
          v52 = Size;
          *((_WORD *)v36 + 2) = 1;
          memcpy(v36 + 6, &Src, v52);
          v42 = *((__int16 *)v62 + 2);
          v59 = 1;
          if ( v38 != v42 - 1 )
            goto LABEL_84;
          v61 = v42;
          goto LABEL_83;
        }
        if ( v39 == a5 )
          break;
        memcpy(&v36[Size * *((__int16 *)v36 + 2) + 6], &Src, Size);
        ++*((_WORD *)v36 + 2);
        if ( v38 == *((__int16 *)v62 + 2) - 1 )
        {
          v61 = *((__int16 *)v62 + 2);
LABEL_83:
          v54 = a2;
          ++*((_WORD *)v62 + 5);
          v43 = Size * *((__int16 *)v36 + 2);
          v59 = 0;
          v36 += v43 + 6;
          goto LABEL_84;
        }
        if ( v59 == 2 )
          goto LABEL_83;
LABEL_84:
        v44 = *((__int16 *)v62 + 2);
        Src = ++v38;
        if ( v38 >= v44 )
          goto LABEL_85;
      }
      v61 = v38;
      goto LABEL_83;
    }
LABEL_86:
    v46 = v36 - (_BYTE *)v58;
    v47 = v62;
    *(_DWORD *)(v62 + 14) = v46;
    if ( v46 <= 0 )
    {
      *(_DWORD *)(v47 + 18) = 0;
      *((_WORD *)v47 + 11) = 0;
    }
    else
    {
      v48 = sub_465E40(v46, "a_lib\\a_pic.cpp", 186);
      v49 = v62;
      v51 = *(_DWORD *)(v62 + 14);
      v50 = v58;
      *(_DWORD *)(v62 + 18) = v48;
      memcpy(v48, v50, v51);
      *((_WORD *)v49 + 11) = 1;
      ++dword_8DBCB0;
    }
    sub_465FE0((int)v58, "a_lib\\a_pic.cpp", 195);
    return 1;
  }
  return result;
}
