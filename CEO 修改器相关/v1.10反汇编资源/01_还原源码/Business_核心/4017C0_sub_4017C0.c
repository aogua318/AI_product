// 函数 0x4017c0  sub_4017C0  size=0x376  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4017C0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ebx
  int v17; // ebx
  unsigned int v18; // ebx
  int v19; // edi
  unsigned int v20; // ebx
  int v21; // ebx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // [esp+14h] [ebp-40h] BYREF
  int v26; // [esp+18h] [ebp-3Ch]
  int v27; // [esp+1Ch] [ebp-38h]
  int v28; // [esp+20h] [ebp-34h]
  int v29; // [esp+24h] [ebp-30h]
  int v30; // [esp+28h] [ebp-2Ch]
  int v31; // [esp+2Ch] [ebp-28h]
  int v32; // [esp+30h] [ebp-24h]
  int v33; // [esp+34h] [ebp-20h]
  int i; // [esp+38h] [ebp-1Ch]
  int v35; // [esp+3Ch] [ebp-18h]
  int v36; // [esp+40h] [ebp-14h]
  unsigned int v37; // [esp+44h] [ebp-10h]
  unsigned int v38; // [esp+48h] [ebp-Ch]
  int v39; // [esp+4Ch] [ebp-8h]
  int v40; // [esp+50h] [ebp-4h]

  sub_464B60(&v25);
  v3 = (_DWORD *)(dword_4CCAAC + a1 * dword_4CCA98);
  v32 = dword_4B11A0;
  v33 = dword_4B119C;
  result = -1;
  v31 = dword_4D0C68;
  dword_4B119C = -1;
  if ( a3 )
  {
    v5 = sub_40CDD0();
    sub_464CE0(v5);
    ++v25;
    ++v26;
    --v27;
    --v28;
    v6 = sub_4640D0() % 4;
    v7 = v26;
    v8 = v25;
    v36 = v6;
    v9 = v28;
    for ( i = 0; i < 4; ++i )
    {
      v39 = v7;
      if ( v7 <= v9 )
      {
        do
        {
          v40 = v8;
          if ( v8 <= v27 )
          {
            do
            {
              v10 = 0;
              v11 = 0;
              v35 = 0;
              while ( !v10 )
              {
                if ( *(_BYTE *)(v11 + a3 + 28) )
                {
                  v12 = dword_4B32D0[2 * v11];
                  v13 = dword_4B32D4[2 * v11];
                  v14 = v3[6];
                  v15 = v12 + v8 + 2 * v12;
                  v16 = v13 + v7 + 2 * v13;
                  v29 = 1;
                  v38 = v15;
                  v37 = v16;
                  if ( v15 >= v14 || v16 >= v3[7] )
                  {
                    if ( v12 + v40 < v14 )
                    {
                      v17 = v13 + v39;
                      if ( (unsigned int)(v13 + v39) < v3[7] )
                      {
                        v30 = v17 * v14;
                        if ( *(_WORD *)(v3[31] + 2 * (v12 + v40 + v17 * v14)) != 0xFFFF )
                          goto LABEL_40;
                        v15 = v38;
                      }
                    }
                    if ( v40 + 2 * v12 < v14 )
                    {
                      v18 = v39 + 2 * v13;
                      if ( v18 < v3[7] )
                      {
                        v30 = v18 * v14;
                        if ( *(_WORD *)(v3[31] + 2 * (v40 + 2 * v12 + v18 * v14)) != 0xFFFF )
                          goto LABEL_40;
                        v15 = v38;
                      }
                    }
                    v16 = v37;
                  }
                  if ( v15 < v14 && v16 < v3[7] && *(_WORD *)(v3[31] + 2 * (v38 + v16 * v14)) != 0xFFFF )
                    goto LABEL_40;
                  v38 = v40 + 4 * v12;
                  v19 = v39;
                  v20 = v39 + 4 * v13;
                  v37 = v20;
                  if ( v38 >= v14 || v20 >= v3[7] )
                  {
                    if ( v12 + v40 < v14 )
                    {
                      v21 = v13 + v39;
                      if ( (unsigned int)(v13 + v39) < v3[7] )
                      {
                        v30 = v21 * v14;
                        if ( *(_WORD *)(v3[31] + 2 * (v12 + v40 + v21 * v14)) != 0xFFFF )
                          goto LABEL_40;
                        v19 = v39;
                      }
                    }
                    v22 = v19 + 2 * v13;
                    v23 = v40 + 2 * v12;
                    if ( v23 < v14 && v22 < v3[7] && *(_WORD *)(v3[31] + 2 * (v23 + v22 * v14)) != 0xFFFF )
                    {
LABEL_40:
                      v7 = v39;
                      v8 = v40;
                      goto LABEL_41;
                    }
                    v20 = v37;
                  }
                  if ( v38 < v14 && v20 < v3[7] && *(_WORD *)(v3[31] + 2 * (v38 + v20 * v14)) != 0xFFFF )
                    goto LABEL_40;
                  v8 = v40;
                  v10 = v29;
                  v11 = v35;
                  v7 = v39;
                }
                v35 = ++v11;
                if ( v11 >= 4 )
                  break;
              }
              sub_4268F0(a1, a2, v8, v7, v36);
              if ( dword_4D0C68 )
              {
                sub_426AE0(a1);
                v24 = sub_4277B0(a1, a2, v8, v7, v36);
                v29 = v24;
                if ( v24 != -1 )
                {
                  sub_42EDA0((double)-*(_DWORD *)(v24 * dword_4D0C70 + dword_4D0C84 + 12));
                  dword_4D0C68 = v31;
                  dword_4B119C = v33;
                  dword_4B11A0 = v32;
                  return v29;
                }
              }
LABEL_41:
              v40 = ++v8;
            }
            while ( v8 <= v27 );
            v9 = v28;
            v8 = v25;
          }
          v39 = ++v7;
        }
        while ( v7 <= v9 );
        v7 = v26;
      }
      if ( ++v36 == 4 )
        v36 = 0;
    }
    sub_426AE0(a1);
    dword_4B11A0 = v32;
    dword_4B119C = v33;
    dword_4D0C68 = v31;
    return -1;
  }
  return result;
}
