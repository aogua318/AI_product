// 函数 0x404320  sub_404320  size=0x27E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_404320(char *this)
{
  int v1; // edi
  double v2; // st7
  double *v3; // esi
  double *v4; // ebx
  int v5; // edx
  double v6; // st7
  __int16 v7; // cx
  double v8; // st6
  double v9; // st6
  double v10; // st4
  double v11; // st6
  double v12; // st6
  int v13; // eax
  double v14; // st6
  int v15; // ecx
  double v16; // st5
  double v17; // st4
  double v18; // st5
  int v19; // [esp+4h] [ebp-20h]
  int *v20; // [esp+8h] [ebp-1Ch]
  char *v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+10h] [ebp-14h]
  int *v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+1Ch] [ebp-8h]
  int v27; // [esp+1Ch] [ebp-8h]
  int v28; // [esp+1Ch] [ebp-8h]
  int v29; // [esp+20h] [ebp-4h]

  v1 = 0;
  if ( dword_870818 > 0 )
  {
    v2 = 0.00390625;
    v24 = (int *)(this + 5112);
    v29 = 0;
    v22 = 0;
    v3 = (double *)(this + 7064);
    v4 = (double *)(this + 880);
    v21 = (char *)(&unk_4CE918 - (_UNKNOWN *)this);
    do
    {
      v20 = (int *)((char *)dword_870824 + v29);
      if ( *((_BYTE *)dword_870824 + v29 + 11) )
      {
        v5 = v22 + *(_DWORD *)dword_870814;
        v19 = v22 + *(_DWORD *)dword_870814;
        if ( *(_BYTE *)(v22 + *(_DWORD *)dword_870814 + 13) )
        {
          v6 = (double)((int)((double)(int)sub_412490(v1) + *(v3 - 880) / 12.0 - (double)((int)(v4[1] + *v4 + v4[2]) / 3))
                      / 10000);
          *(double *)((char *)v3 + (_DWORD)v21) = *(double *)((char *)v3 + (_DWORD)v21) + v6;
          if ( !word_4B9EF4[v1] )
          {
            v7 = word_4B9E20[v1];
            if ( v7 )
            {
              v6 = v6 * (double)(50 * v7 + 1);
            }
            else
            {
              v25 = 1;
              if ( word_4B9918[v1] + word_4B9D4C[v1] >= 1 )
                v25 = word_4B9918[v1] + word_4B9D4C[v1];
              v6 = v6 / (double)v25;
            }
          }
          v26 = v24[106];
          if ( v26 )
            v8 = (double)v26;
          else
            v8 = (double)*(int *)((char *)dword_870824 + v29 + 72);
          v9 = v8 * 0.00390625;
          if ( *v24 )
            v10 = (double)*v24;
          else
            v10 = (double)*(int *)((char *)dword_870824 + v29 + 68);
          v5 = v19;
          v11 = v6 * (v9 - v10 * 0.00390625);
          v2 = 0.00390625;
          *v3 = v11;
        }
        v12 = *(v3 - 350);
        v13 = 0;
        while ( v1 != dword_4B10E4[v13] )
        {
          if ( ++v13 >= 7 )
            goto LABEL_23;
        }
        v12 = v12 + (double)*((int *)this + v13 + 1498) * (double)*(int *)(v5 + 24) / 3.0;
LABEL_23:
        v27 = 1;
        if ( word_4B9918[v1] + word_4B9D4C[v1] >= 1 )
          v27 = word_4B9918[v1] + word_4B9D4C[v1];
        v14 = v12 / (double)v27;
        *(double *)((char *)v3 + (_DWORD)v21) = (*(v3 - 106) / 6.0 + v14) * (double)*(int *)(v5 + 24)
                                              + *(double *)((char *)v3 + (_DWORD)v21);
        v15 = *v24;
        v28 = *v24;
        if ( *(_BYTE *)(v5 + 12) == 2 )
        {
          if ( v15 )
            v18 = (double)v28;
          else
            v18 = (double)*(int *)((char *)dword_870824 + v29 + 68);
          v16 = v18 * v2;
          v17 = (double)v20[20];
        }
        else
        {
          if ( v15 )
            v16 = (double)v28 * v2;
          else
            v16 = (double)*(int *)((char *)dword_870824 + v29 + 68) * v2;
          v17 = (double)v20[19];
        }
        v3[106] = v14 * (double)*(int *)(v5 + 24) * (v16 - v17 * v2);
      }
      ++v24;
      v22 += 72;
      v29 += 112;
      ++v1;
      v4 += 4;
      ++v3;
    }
    while ( v1 < dword_870818 );
  }
}
