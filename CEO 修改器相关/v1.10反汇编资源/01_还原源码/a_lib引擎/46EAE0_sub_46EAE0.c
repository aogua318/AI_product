// 函数 0x46eae0  sub_46EAE0  size=0x4C8  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46EAE0(_DWORD *Src, int a2, int a3, _DWORD *a4, int a5, void (__cdecl *a6)(int, int, int))
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
  void *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // cx
  int v26; // edx
  int v27; // ebx
  char *v28; // eax
  int v29; // ecx
  unsigned __int8 *v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  unsigned __int8 *v38; // [esp+10h] [ebp-2Ch]
  int v39; // [esp+14h] [ebp-28h]
  int v40; // [esp+18h] [ebp-24h]
  int v41; // [esp+1Ch] [ebp-20h]
  int v42; // [esp+20h] [ebp-1Ch]
  int v43; // [esp+24h] [ebp-18h]
  int v44; // [esp+28h] [ebp-14h]
  int v45; // [esp+2Ch] [ebp-10h]
  unsigned __int8 *Srca; // [esp+44h] [ebp+8h]
  char v47; // [esp+54h] [ebp+18h]
  int v48; // [esp+54h] [ebp+18h]

  v43 = Src[3] / 8;
  if ( a5 )
  {
    if ( (dword_8DBE78 & 1) == 0 )
    {
      dword_8DBE78 |= 1u;
      sub_464A40(dword_8DBE70);
      atexit(sub_4A1080);
    }
    sub_464A60(dword_8DBE70, ".", 0xFFFFFFFF, 0, 0);
    v6 = Src[6];
    v7 = Src[7];
    v45 = Src[5];
    v8 = Src[8];
    dword_8DBE54 = (int)Src;
    v9 = *a4;
    v40 = v8;
    v10 = a4[1];
    v42 = v6;
    v44 = v7;
    v41 = *a4;
    dword_8DBE68 = 0;
    dword_8DBE64 = sub_46DE50(2 * v10 + 2048);
    dword_8DBE5C = (int)(a4 + 2);
    Srca = (unsigned __int8 *)(a4 + 2);
    dword_8DBE58 = a2;
    dword_8DBE6C = a3;
    dword_8DBE4C = 0;
    v11 = sub_46DDB0(8 * v9 + 80);
    dword_8DBE60 = v11;
    v38 = (unsigned __int8 *)a4 + a5;
    if ( a4 + 2 < (_DWORD *)((char *)a4 + a5) )
    {
      v12 = dword_8DBE6C;
      v13 = dword_8DBE4C;
      while ( v13 < v41 )
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
            v12 += v18;
            dword_8DBE6C = v12;
            if ( v12 >= v40 )
              break;
          }
          else
          {
            dword_8DBE58 += v18;
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
              v26 = dword_8DBE68;
              v27 = dword_8DBE60;
              Srca += 2;
              v28 = (char *)(dword_8DBE64 + 2 * dword_8DBE68);
              *(_DWORD *)(dword_8DBE60 + 8 * v13) = v28;
              *(_WORD *)(v27 + 8 * v13 + 4) = v19;
              dword_8DBE50 = (int)v28;
              dword_8DBE4C = v13 + 1;
              dword_8DBE68 = v19 + v26;
              sub_465930(v28, v25, v19);
              v12 = dword_8DBE6C;
              if ( dword_8DBE6C >= v42 && dword_8DBE58 >= v45 && dword_8DBE58 + v19 < v44 )
              {
                a6(
                  *(_DWORD *)(*(_DWORD *)(dword_8DBE54 + 40) + 4 * dword_8DBE6C) + v43 * dword_8DBE58,
                  dword_8DBE50,
                  v19);
                dword_8DBE58 += v19;
                goto LABEL_59;
              }
              v23 = dword_8DBE58;
              dword_8DBE58 += v19;
              if ( dword_8DBE6C >= v42 )
              {
                if ( v23 < v45 )
                {
                  v29 = v45 - v23;
                  v23 = v45;
                  v19 -= v29;
                  dword_8DBE50 += 2 * v29;
                }
                if ( v19 > 0 )
                {
                  if ( v23 + v19 >= v44 )
                    v19 = v44 - v23;
                  if ( v19 > 0 )
                  {
LABEL_30:
                    a6(*(_DWORD *)(*(_DWORD *)(dword_8DBE54 + 40) + 4 * v12) + v43 * v23, dword_8DBE50, v19);
                    goto LABEL_59;
                  }
                }
              }
              goto LABEL_60;
            }
            if ( v16 != 192 )
              goto LABEL_61;
            v47 = *Srca;
            v39 = (*Srca >> 1) & 0x3F;
            v30 = Srca + 2;
            v31 = Srca[1] | ((*Srca & 1) << 8);
            Srca += 2;
            if ( v47 < 0 )
            {
              v31 = *v30 | (v31 << 8);
              Srca = v30 + 1;
            }
            v32 = dword_8DBE68;
            dword_8DBE68 += v19;
            v33 = dword_8DBE64 + 2 * v32;
            v34 = dword_8DBE60;
            *(_DWORD *)(dword_8DBE60 + 8 * v13) = v33;
            *(_WORD *)(v34 + 8 * v13++ + 4) = v19;
            v48 = v33;
            dword_8DBE50 = v33;
            dword_8DBE4C = v13;
            sub_46EA70(v13 - v31 - 1, v39, v19);
            v21 = dword_8DBE58;
            if ( v12 >= v42 && dword_8DBE58 >= v45 && dword_8DBE58 + v19 < v44 )
            {
              v22 = v48;
LABEL_22:
              a6(*(_DWORD *)(*(_DWORD *)(dword_8DBE54 + 40) + 4 * v12) + v43 * v21, v22, v19);
              dword_8DBE58 += v19;
LABEL_59:
              v12 = dword_8DBE6C;
LABEL_60:
              v13 = dword_8DBE4C;
              goto LABEL_61;
            }
            v35 = dword_8DBE58;
            dword_8DBE58 += v19;
            if ( v12 >= v42 )
            {
              if ( v35 < v45 )
              {
                v36 = v45 - v35;
                v35 = v45;
                v19 -= v36;
                v48 += 2 * v36;
              }
              if ( v19 > 0 )
              {
                if ( v35 + v19 >= v44 )
                  v19 = v44 - v35;
                if ( v19 > 0 )
                {
                  dword_8DBE50 = *(_DWORD *)(*(_DWORD *)(dword_8DBE54 + 40) + 4 * v12) + v43 * v35;
                  a6(dword_8DBE50, v48, v19);
                  goto LABEL_59;
                }
              }
            }
          }
          else
          {
            v20 = (void *)(dword_8DBE64 + 2 * dword_8DBE68);
            dword_8DBE68 += v19;
            *(_DWORD *)(v11 + 8 * v13) = v20;
            *(_WORD *)(v11 + 8 * v13++ + 4) = v19;
            dword_8DBE50 = (int)v20;
            dword_8DBE4C = v13;
            memcpy(v20, Srca, 2 * v19);
            v21 = dword_8DBE58;
            Srca += 2 * v19;
            if ( v12 >= v42 && dword_8DBE58 >= v45 && dword_8DBE58 + v19 < v44 )
            {
              v22 = dword_8DBE50;
              goto LABEL_22;
            }
            v23 = dword_8DBE58;
            dword_8DBE58 += v19;
            if ( v12 >= v42 )
            {
              if ( v23 < v45 )
              {
                v24 = v45 - v23;
                v23 = v45;
                v19 -= v24;
                dword_8DBE50 += 2 * v24;
              }
              if ( v19 > 0 )
              {
                if ( v23 + v19 >= v44 )
                  v19 = v44 - v23;
                if ( v19 > 0 )
                  goto LABEL_30;
              }
            }
          }
        }
LABEL_61:
        if ( Srca >= v38 )
          break;
        v11 = dword_8DBE60;
      }
    }
    sub_464B40(dword_8DBE70);
  }
  return 1;
}
