// 函数 0x401480  sub_401480  size=0x33F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_401480(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // et2
  int v9; // ebx
  int *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int result; // eax
  int v37; // [esp+Ch] [ebp-40h]
  int v38; // [esp+10h] [ebp-3Ch]
  unsigned int v39; // [esp+18h] [ebp-34h]
  int v40; // [esp+1Ch] [ebp-30h]
  int v41; // [esp+24h] [ebp-28h]
  int v42; // [esp+28h] [ebp-24h]
  int *v43; // [esp+2Ch] [ebp-20h]
  int v44; // [esp+30h] [ebp-1Ch]
  int v45; // [esp+34h] [ebp-18h]
  int v46; // [esp+38h] [ebp-14h]
  unsigned int v47; // [esp+3Ch] [ebp-10h] BYREF
  unsigned int v48; // [esp+40h] [ebp-Ch] BYREF
  int v49; // [esp+44h] [ebp-8h]
  int v50; // [esp+48h] [ebp-4h]

  v5 = dword_4CCAAC + a1 * dword_4CCA98;
  v41 = sub_4640D0() % 4;
  v6 = 0;
  v46 = 0;
  if ( a4 > 0 )
  {
    while ( v6 < 3 * a4 )
    {
      v40 = v6 + 1;
      v44 = -10000;
      v42 = 80;
      do
      {
        v7 = sub_4640D0() % *(_DWORD *)(v5 + 24);
        v45 = v7;
        v8 = sub_4640D0() % *(_DWORD *)(v5 + 28);
        v50 = 0;
        v9 = v8;
        v49 = v8;
        if ( sub_40BD20(v5, 0, v7, v8, v41) )
        {
          v10 = &dword_4B32D0;
          v43 = &dword_4B32D0;
          while ( 1 )
          {
            v11 = *v10;
            v12 = v7 + 2 * *v10;
            v13 = v10[1];
            v14 = *v10 + v12;
            v15 = v13 + v9 + 2 * v13;
            v47 = v14;
            v48 = v15;
            v16 = *(_DWORD *)(v5 + 24);
            if ( v14 >= v16 || v15 >= *(_DWORD *)(v5 + 28) )
            {
              v39 = v13 + v49;
              if ( v11 + v45 < v16 && v39 < *(_DWORD *)(v5 + 28) )
              {
                if ( *(_WORD *)(*(_DWORD *)(v5 + 124) + 2 * (v11 + v45 + v39 * v16)) != 0xFFFF )
                  goto LABEL_50;
                v14 = v47;
              }
              v17 = v49 + 2 * v13;
              v18 = v45 + 2 * v11;
              if ( v18 < v16
                && v17 < *(_DWORD *)(v5 + 28)
                && *(_WORD *)(*(_DWORD *)(v5 + 124) + 2 * (v18 + v17 * v16)) != 0xFFFF )
              {
                goto LABEL_50;
              }
              v15 = v48;
            }
            if ( v14 < v16
              && v15 < *(_DWORD *)(v5 + 28)
              && *(_WORD *)(*(_DWORD *)(v5 + 124) + 2 * (v14 + v15 * v16)) != 0xFFFF )
            {
              goto LABEL_50;
            }
            v10 = v43 + 2;
            v43 = v10;
            if ( (int)v10 >= (int)&dword_4B32F0 )
              break;
            v7 = v45;
            v9 = v49;
          }
          v19 = abs32(v45 - a2);
          v20 = abs32(v49 - a3);
          if ( v19 < v20 )
            v19 >>= 1;
          else
            v20 >>= 1;
          v21 = v19 + v20;
          if ( v21 >= 32 )
          {
            v22 = v50;
          }
          else
          {
            v22 = 16 * (32 - v21);
            v50 = v22;
          }
          v23 = *(__int16 *)(v5 + 762);
          if ( v23 != -1 )
          {
            do
            {
              v24 = dword_4D1080 + v23 * dword_4D106C;
              v25 = *(_DWORD *)(v5 + 180) + *(_DWORD *)(v5 + 160) * *(__int16 *)(v24 + 6);
              sub_483850(*(__int16 *)(v25 + 2), *(__int16 *)(v25 + 4), &v47, &v48);
              v26 = abs32(v47 - v45);
              v27 = abs32(v48 - v49);
              if ( v26 < v27 )
                v26 >>= 1;
              else
                v27 >>= 1;
              v28 = v26 + v27;
              if ( v28 < 32 )
                v50 += 16 * (v28 - 32);
              v23 = *(__int16 *)(v24 + 10);
            }
            while ( v23 != -1 );
            v22 = v50;
          }
          v29 = *(__int16 *)(v5 + 758);
          if ( v29 != -1 )
          {
            do
            {
              v30 = dword_8703D0 + v29 * dword_8703BC;
              v31 = *(_DWORD *)(v5 + 180) + *(_DWORD *)(v5 + 160) * *(__int16 *)(v30 + 6);
              sub_483850(*(__int16 *)(v31 + 2), *(__int16 *)(v31 + 4), &v47, &v48);
              v32 = abs32(v47 - v45);
              v33 = abs32(v48 - v49);
              if ( v32 < v33 )
                v32 >>= 1;
              else
                v33 >>= 1;
              v34 = v32 + v33;
              if ( v34 > 32 )
                v34 = 32;
              v35 = 32 - v34;
              v29 = *(__int16 *)(v30 + 4);
              v50 += v35;
            }
            while ( v29 != -1 );
            v22 = v50;
          }
          if ( (v45 & 1) != 0 || (v49 & 1) != 0 )
            v22 -= 99;
          if ( v22 > v44 )
          {
            v44 = v22;
            v37 = v45;
            v38 = v49;
          }
        }
LABEL_50:
        --v42;
      }
      while ( v42 );
      if ( v44 != -10000 )
      {
        if ( sub_40BE20(a1, v37, v38, v41, a5) != -1 )
          ++v46;
        result = v46;
        if ( v46 == a4 )
          return result;
      }
      if ( v46 >= a4 )
        return v46;
      v6 = v40;
    }
  }
  return v46;
}
