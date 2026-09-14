// 函数 0x46ab50  sub_46AB50  size=0x195  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46AB50(__int16 *this, _DWORD *a2, int a3, int a4, void (__cdecl *a5)(int, __int16 *, int))
{
  int result; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // edx
  int v9; // esi
  __int16 *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v20; // [esp+4h] [ebp-24h]
  int v21; // [esp+8h] [ebp-20h]
  int v22; // [esp+Ch] [ebp-1Ch]
  int v23; // [esp+10h] [ebp-18h]
  int v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+1Ch] [ebp-Ch]
  int v27; // [esp+20h] [ebp-8h]
  __int16 v28; // [esp+24h] [ebp-4h]
  __int16 *v29; // [esp+24h] [ebp-4h]
  __int16 *v30; // [esp+30h] [ebp+8h]
  int v31; // [esp+34h] [ebp+Ch]
  int v32; // [esp+38h] [ebp+10h]

  result = *(_DWORD *)(this + 9);
  if ( result )
  {
    v28 = *(this + 5);
    if ( v28 )
    {
      v27 = a2[5];
      v6 = a4 + *(this + 1);
      v22 = a2[6];
      v20 = a2[7];
      v21 = a2[8];
      v32 = v6;
      if ( v6 < v21 && v6 + *(this + 3) > a2[6] )
      {
        v7 = a3 + *this;
        if ( v7 < a2[7] && v7 + *(this + 2) > v27 )
        {
          v8 = (int)a2[3] >> 3;
          v23 = a2[2];
          v9 = a2[9] + v32 * v23 + v7 * v8;
          v10 = *(__int16 **)(this + 9);
          v25 = *(this + 4) >> 3;
          v26 = v8;
          v30 = v10;
          Size = v25;
          dword_8DBCFC = v8;
          if ( v28 > 0 )
          {
            v24 = v28;
            while ( 1 )
            {
              v11 = *v10;
              v12 = v10[1];
              v32 += v12;
              v13 = v11 + v7;
              v14 = v30[2];
              v15 = v23 * v12 + v8 * v11 + v9;
              if ( v32 >= v22 && v32 < v21 )
              {
                v29 = v30 + 3;
                v31 = v30[2];
                v16 = v15;
                if ( v13 < v27 )
                {
                  v31 = v14 - (v27 - v13);
                  v16 = v15 + v8 * (v27 - v13);
                  v29 = (__int16 *)((char *)v29 + v25 * (v27 - v13));
                }
                if ( v14 + v13 < v20 )
                  v17 = v31;
                else
                  v17 = v20 - v14 - v13 + v31;
                if ( v17 > 0 )
                  a5(v16, v29, v17);
                v8 = v26;
              }
              v7 = v14 + v13;
              v9 = v8 * v14 + v15;
              v18 = 6;
              if ( *(this + 6) != -1 )
                v18 = v25 * v30[2] + 6;
              v30 = (__int16 *)((char *)v30 + v18);
              if ( !--v24 )
                break;
              v10 = v30;
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}
