// 函数 0x401ce0  sub_401CE0  size=0x2C6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_401CE0@<eax>(int a1@<eax>, int a2, int a3)
{
  int v4; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  unsigned int v14; // esi
  int *v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  int j; // eax
  int v19; // eax
  int v20; // esi
  int v21; // [esp+14h] [ebp-34h] BYREF
  int v22; // [esp+18h] [ebp-30h]
  int v23; // [esp+1Ch] [ebp-2Ch]
  int v24; // [esp+20h] [ebp-28h]
  double *v25; // [esp+24h] [ebp-24h]
  int v26; // [esp+28h] [ebp-20h]
  int v27; // [esp+2Ch] [ebp-1Ch]
  int v28; // [esp+30h] [ebp-18h]
  int v29; // [esp+34h] [ebp-14h]
  int i; // [esp+38h] [ebp-10h]
  int v31; // [esp+3Ch] [ebp-Ch]
  int v32; // [esp+40h] [ebp-8h]
  int v33; // [esp+44h] [ebp-4h]

  sub_464B60(&v21);
  v4 = dword_4CCAAC + a2 * dword_4CCA98;
  v25 = (double *)((char *)&unk_4D10B8 + 189880 * *(char *)(v4 + 224));
  if ( (double)dword_4CCC34 > v25[1] )
    return -1;
  v28 = dword_4B32C0;
  v27 = dword_87084C;
  v29 = dword_4B1028;
  dword_4B1028 = a2;
  v26 = dword_4C2D38;
  dword_4C2D38 = dword_4CCAAC + a2 * dword_4CCA98;
  dword_4B32C0 = -1;
  if ( a1 )
  {
    v7 = sub_40CDD0(a1);
    sub_464CE0(v7);
    ++v21;
    ++v22;
    --v23;
    --v24;
  }
  else
  {
    v6 = sub_464D00(
           dword_4B1108 - 1,
           dword_4B1108 - 1,
           *(_DWORD *)(v4 + 196) - dword_4B1108,
           *(_DWORD *)(v4 + 200) - dword_4B1108);
    sub_464CE0(v6);
  }
  v8 = sub_4640D0() % 4;
  v9 = v24;
  v10 = v22;
  v11 = v21;
  v33 = v8;
  v12 = v23;
  for ( i = 0; i < 4; ++i )
  {
    v31 = v10;
    if ( v10 <= v9 )
    {
      do
      {
        v13 = v11;
        v32 = v11;
        if ( v11 <= v12 )
        {
          do
          {
            sub_434280(0, v13, v10, v33);
            if ( dword_87084C )
            {
              ((void (*)(void))sub_434400)();
              v14 = *(_DWORD *)(dword_4C2D38 + 24);
              v15 = dword_4B32D4;
              while ( 1 )
              {
                v16 = v32 + 4 * *(v15 - 1);
                v17 = v10 + 4 * *v15;
                if ( v16 >= v14 || v17 >= *(_DWORD *)(dword_4C2D38 + 28) )
                  break;
                if ( *(_WORD *)(*(_DWORD *)(dword_4C2D38 + 124) + 2 * (v16 + v17 * v14)) != 0xFFFF )
                {
                  v10 = v31;
                  break;
                }
                v15 += 2;
                if ( (int)v15 >= (int)dword_4B32F4 )
                {
                  for ( j = 0; j < 6; ++j )
                  {
                    if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * a3 + 48 + j) )
                      break;
                  }
                  v10 = v31;
                  v19 = sub_433EB0(a2, j, v32, v31, v33);
                  v20 = v19;
                  if ( v19 != -1 )
                  {
                    dword_4B32C0 = v28;
                    dword_4B1028 = v29;
                    dword_87084C = v27;
                    dword_4C2D38 = v26;
                    *(_WORD *)(v19 * dword_870854 + dword_870868 + 8) = a3;
                    sub_42EDA0((double)-dword_4CCC34);
                    return v20;
                  }
                  break;
                }
                v10 = v31;
              }
            }
            v12 = v23;
            v13 = v32 + 1;
            v32 = v13;
          }
          while ( v13 <= v23 );
          v9 = v24;
          v11 = v21;
        }
        v31 = ++v10;
      }
      while ( v10 <= v9 );
      v10 = v22;
    }
    if ( ++v33 == 4 )
      v33 = 0;
  }
  sub_434400(v11);
  dword_4B1028 = v29;
  dword_4B32C0 = v28;
  dword_87084C = v27;
  dword_4C2D38 = v26;
  return -1;
}
