// 函数 0x4137e0  sub_4137E0  size=0x217  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4137E0(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // esi
  unsigned int v5; // esi
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  char v11; // cl
  int v12; // eax
  unsigned __int8 *v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [esp+Ch] [ebp-Ch] BYREF
  int v19; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h]
  int v21; // [esp+20h] [ebp+8h]

  v3 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(dword_4D10A8 + a1 * dword_4D1094 + 14));
  v21 = dword_4D10A8 + a1 * dword_4D1094;
  sub_42C290(&v19, &v18);
  v20 = 0;
  while ( 1 )
  {
    v4 = sub_4640D0() % 16;
    v5 = v19 + v4 - sub_4640D0() % 16;
    v6 = sub_4640D0() % 16;
    v7 = v18 + v6 - sub_4640D0() % 16;
    if ( v7 < v3[7] )
    {
      v8 = v3[6];
      if ( v5 < v8 )
      {
        v9 = *(_DWORD *)(v3[35] + 4 * (v5 + v7 * v8));
        if ( v9 >= 0 )
        {
          v10 = v3[45] + v9 * v3[40];
          v11 = *(_BYTE *)(v10 + 11);
          switch ( v11 )
          {
            case 3:
              v12 = dword_4C4378 + dword_4C4364 * *(__int16 *)(v10 + 12);
              if ( *(_WORD *)(v12 + 2) != 0xFFFF )
              {
                v13 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * *(__int16 *)(v12 + 2));
                *a2 = *v13;
                *a3 = 0;
                return sub_42C210(*v13, 0);
              }
              goto LABEL_16;
            case 7:
              v15 = dword_870868 + dword_870854 * *(__int16 *)(v10 + 12);
              if ( *(_WORD *)(v15 + 8) != 0xFFFF && *(_WORD *)(v15 + 10) != 0xFFFF )
              {
                *a2 = *(__int16 *)(v15 + 8);
                *a3 = 0;
                return sub_42C210(*(__int16 *)(v15 + 8), 0);
              }
              goto LABEL_16;
            case 0:
              v16 = sub_4275A0(dword_4D0C84 + dword_4D0C70 * *(__int16 *)(v10 + 12));
              if ( v16 != -1 )
              {
                *a2 = v16;
                *a3 = 1;
                return sub_42C210(v16, 1);
              }
              goto LABEL_16;
          }
          if ( v11 == 8 )
            break;
        }
      }
    }
LABEL_16:
    if ( ++v20 >= 10 )
    {
      *a2 = *(char *)(v21 + 20);
      return 0;
    }
  }
  v17 = dword_4D1080 + dword_4D106C * *(__int16 *)(v10 + 12);
  *a2 = *(__int16 *)(v17 + 4);
  *a3 = 2;
  return sub_42C210(*(__int16 *)(v17 + 4), 1);
}
