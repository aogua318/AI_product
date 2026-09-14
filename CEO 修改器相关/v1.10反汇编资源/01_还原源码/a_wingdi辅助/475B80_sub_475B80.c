// 函数 0x475b80  sub_475B80  size=0x179  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_475B80(int *a1, int a2, int *a3)
{
  int *v3; // esi
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  char *v9; // esi
  int v10; // eax
  int v12; // [esp+Ch] [ebp-81Ch] BYREF
  int *v13; // [esp+10h] [ebp-818h]
  int *v14; // [esp+14h] [ebp-814h]
  int v15; // [esp+18h] [ebp-810h]
  int v16; // [esp+1Ch] [ebp-80Ch]
  int v17; // [esp+20h] [ebp-808h]
  int v18[192]; // [esp+24h] [ebp-804h] BYREF
  _BYTE v19[512]; // [esp+324h] [ebp-504h] BYREF
  char v20; // [esp+524h] [ebp-304h] BYREF
  int v21[64]; // [esp+724h] [ebp-104h] BYREF

  v3 = a1;
  v4 = a1[6];
  v5 = a1[4];
  v16 = a2;
  v13 = a1;
  v14 = a3;
  v6 = 0;
  v15 = v4;
  sub_475B30(a1);
  if ( a1[16] == 1 )
    v7 = 4 * a1[17] + 4;
  else
    v7 = a1[3];
  a1[5] = v7;
  if ( v5 == 1 || v15 == 3 )
    v15 = 0;
  sub_475570(v21, v18, (__int16 **)a1);
  v17 = 0;
  while ( 1 )
  {
    sub_475770(v21, (int)v19, (int)v18, v3, v17 >> 2);
    v8 = 0;
    v9 = &v20;
    do
    {
      if ( v15 < 0 )
      {
        v12 = *v14;
        v6 += sub_47A8E0(v9 - 512, 0, v16, &v12);
        v10 = sub_47A8E0(v9, 1, v16, v14);
      }
      else
      {
        v10 = sub_47ACD0(&v19[128 * (v8 + 4 * v15)], v16, v14);
      }
      ++v8;
      v6 += v10;
      v9 += 128;
    }
    while ( v8 < 3 );
    if ( ++v17 >= 12 )
      break;
    v3 = v13;
  }
  return v6;
}
