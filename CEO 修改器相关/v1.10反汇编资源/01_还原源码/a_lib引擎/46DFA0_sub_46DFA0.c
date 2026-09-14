// 函数 0x46dfa0  sub_46DFA0  size=0x589  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46DFA0(_DWORD *Src, int a2, int a3, unsigned __int8 *a4, int a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // edi
  char v14; // al
  unsigned __int8 *v15; // esi
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // esi
  void *v20; // ebx
  size_t v21; // esi
  void *v22; // eax
  int v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // dx
  void *v26; // ebx
  int v27; // ecx
  int v28; // ebx
  void *v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned __int8 *v33; // ecx
  int v34; // edx
  char *v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // [esp+14h] [ebp-2Ch]
  int v40; // [esp+18h] [ebp-28h]
  int v41; // [esp+1Ch] [ebp-24h]
  unsigned __int16 v42; // [esp+20h] [ebp-20h]
  void *v43; // [esp+20h] [ebp-20h]
  char *v44; // [esp+20h] [ebp-20h]
  int v45; // [esp+24h] [ebp-1Ch]
  char v46; // [esp+24h] [ebp-1Ch]
  int v47; // [esp+24h] [ebp-1Ch]
  int v48; // [esp+28h] [ebp-18h]
  int v49; // [esp+2Ch] [ebp-14h]
  int v50; // [esp+30h] [ebp-10h]
  unsigned __int8 *Srca; // [esp+48h] [ebp+8h]

  if ( Src[3] != 16 )
    return 0;
  if ( a5 )
  {
    if ( (dword_8DBE18 & 1) == 0 )
    {
      dword_8DBE18 |= 1u;
      sub_464A40(dword_8DBE10);
      atexit(sub_4A1060);
    }
    sub_464A60(dword_8DBE10, ".", 0xFFFFFFFF, 0, 0);
    v6 = Src[6];
    v7 = Src[7];
    v49 = Src[5];
    v8 = Src[8];
    dword_8DBDE8 = (int)Src;
    v9 = *(_DWORD *)a4;
    v39 = v8;
    v10 = *((_DWORD *)a4 + 1);
    v50 = v6;
    v48 = v7;
    v40 = *(_DWORD *)a4;
    dword_8DBDFC = 0;
    dword_8DBDF8 = sub_46DE50(2 * v10 + 2048);
    dword_8DBDF0 = (int)(a4 + 8);
    Srca = a4 + 8;
    dword_8DBDEC = a2;
    dword_8DBE00 = a3;
    dword_8DBDE0 = 0;
    v11 = sub_46DDB0(8 * v9 + 80);
    dword_8DBDF4 = v11;
    if ( a4 + 8 < &a4[a5] )
    {
      v12 = dword_8DBDEC;
      v13 = dword_8DBDE0;
      while ( v13 < v40 )
      {
        v14 = *Srca;
        v15 = Srca + 1;
        v16 = *Srca++ & 0xC0;
        if ( v16 == 64 )
        {
          if ( (v14 & 0x20) != 0 )
          {
            v17 = ((v14 & 0xF) << 8) | *v15;
            Srca = v15 + 1;
            if ( (v14 & 8) != 0 )
              v17 |= 0xFFFFF000;
          }
          else
          {
            v17 = v14 & 0xF;
          }
          v18 = v17 + 1;
          if ( (v14 & 0x10) != 0 )
          {
            dword_8DBE00 += v18;
            if ( dword_8DBE00 >= v39 )
              break;
          }
          else
          {
            v12 += v18;
            dword_8DBDEC = v12;
          }
        }
        else
        {
          v19 = (v14 & 0x3F) + 1;
          if ( v16 )
          {
            if ( v16 == 128 )
            {
              v25 = *(_WORD *)Srca;
              Srca += 2;
              v42 = v25;
              if ( dword_8DBE00 < v50 || v12 < v49 || v12 + v19 >= v48 )
              {
                v27 = dword_8DBDFC;
                v28 = dword_8DBDF4;
                v29 = (void *)(dword_8DBDF8 + 2 * dword_8DBDFC);
                *(_DWORD *)(dword_8DBDF4 + 8 * v13) = v29;
                *(_WORD *)(v28 + 8 * v13 + 4) = v19;
                ::Src = v29;
                dword_8DBDE0 = v13 + 1;
                dword_8DBDFC = v19 + v27;
                sub_465930((char *)v29, v25, v19);
                v30 = dword_8DBDEC;
                v12 = v19 + dword_8DBDEC;
                dword_8DBDEC += v19;
                if ( dword_8DBE00 >= v50 )
                {
                  if ( v30 < v49 )
                  {
                    v31 = v49 - v30;
                    v30 = v49;
                    v19 -= v31;
                  }
                  if ( v19 > 0 )
                  {
                    if ( v30 + v19 >= v48 )
                      v19 = v48 - v30;
                    if ( v19 > 0 )
                    {
                      sub_465930(
                        (char *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDE8 + 40) + 4 * dword_8DBE00) + 2 * v30),
                        v42,
                        v19);
                      v12 = dword_8DBDEC;
                    }
                  }
                }
              }
              else
              {
                v26 = (void *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDE8 + 40) + 4 * dword_8DBE00) + 2 * v12);
                ::Src = v26;
                sub_46DEF0((int)v26, v19);
                sub_465930((char *)v26, v42, v19);
                v12 = v19 + dword_8DBDEC;
                dword_8DBDEC += v19;
              }
              v13 = dword_8DBDE0;
            }
            else if ( v16 == 192 )
            {
              v46 = *Srca;
              v41 = (*Srca >> 1) & 0x3F;
              v32 = Srca[1] | ((*Srca & 1) << 8);
              v33 = Srca + 2;
              v43 = (void *)v32;
              Srca += 2;
              if ( v46 < 0 )
              {
                v32 = *v33 | (v32 << 8);
                v43 = (void *)v32;
                Srca = v33 + 1;
              }
              if ( dword_8DBE00 < v50 || v12 < v49 || (v47 = v12 + v19, v12 + v19 >= v48) )
              {
                v34 = dword_8DBDFC;
                dword_8DBDFC += v19;
                v35 = (char *)(dword_8DBDF8 + 2 * v34);
                v36 = dword_8DBDF4;
                *(_DWORD *)(dword_8DBDF4 + 8 * v13) = v35;
                *(_WORD *)(v36 + 8 * v13++ + 4) = v19;
                v44 = v35;
                ::Src = v35;
                dword_8DBDE0 = v13;
                sub_46DF20(v13 - v32 - 1, v41, v19);
                v37 = v12;
                v12 += v19;
                dword_8DBDEC = v12;
                if ( dword_8DBE00 >= v50 )
                {
                  if ( v37 < v49 )
                  {
                    v38 = v49 - v37;
                    v37 = v49;
                    v19 -= v38;
                    v44 += 2 * v38;
                  }
                  if ( v19 > 0 )
                  {
                    if ( v37 + v19 >= v48 )
                      v19 = v48 - v37;
                    if ( v19 > 0 )
                    {
                      ::Src = (void *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDE8 + 40) + 4 * dword_8DBE00) + 2 * v37);
                      memcpy(::Src, v44, 2 * v19);
                    }
                  }
                }
              }
              else
              {
                ::Src = (void *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDE8 + 40) + 4 * dword_8DBE00) + 2 * v12);
                sub_46DEF0((int)::Src, v19);
                v13 = dword_8DBDE0;
                v12 += v19;
                dword_8DBDEC = v47;
                sub_46DF20(dword_8DBDE0 - (_DWORD)v43 - 1, v41, v19);
              }
            }
          }
          else if ( dword_8DBE00 < v50 || v12 < v49 || (v45 = v12 + v19, v12 + v19 >= v48) )
          {
            v22 = (void *)(dword_8DBDF8 + 2 * dword_8DBDFC);
            dword_8DBDFC += v19;
            *(_DWORD *)(v11 + 8 * v13) = v22;
            *(_WORD *)(v11 + 8 * v13++ + 4) = v19;
            ::Src = v22;
            dword_8DBDE0 = v13;
            memcpy(v22, Srca, 2 * v19);
            Srca += 2 * v19;
            v23 = v12;
            v12 += v19;
            dword_8DBDEC = v12;
            if ( dword_8DBE00 >= v50 )
            {
              if ( v23 < v49 )
              {
                v24 = v49 - v23;
                v23 = v49;
                v19 -= v24;
                ::Src = (char *)::Src + 2 * v24;
              }
              if ( v19 > 0 )
              {
                if ( v23 + v19 >= v48 )
                  v19 = v48 - v23;
                if ( v19 > 0 )
                  memcpy(
                    (void *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDE8 + 40) + 4 * dword_8DBE00) + 2 * v23),
                    ::Src,
                    2 * v19);
              }
            }
          }
          else
          {
            v20 = (void *)(*(_DWORD *)(*(_DWORD *)(dword_8DBDE8 + 40) + 4 * dword_8DBE00) + 2 * v12);
            *(_DWORD *)(v11 + 8 * v13) = v20;
            *(_WORD *)(v11 + 8 * v13 + 4) = v19;
            v21 = 2 * v19;
            ++v13;
            ::Src = v20;
            dword_8DBDE0 = v13;
            memcpy(v20, Srca, v21);
            v12 = v45;
            Srca += v21;
            dword_8DBDEC = v45;
          }
        }
        if ( Srca >= &a4[a5] )
          break;
        v11 = dword_8DBDF4;
      }
    }
    sub_464B40(dword_8DBE10);
  }
  return 1;
}
