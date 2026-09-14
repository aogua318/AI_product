// 函数 0x40ff00  sub_40FF00  size=0x330  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40FF00(int a1, int a2, int a3, int a4)
{
  __int16 v4; // di
  int v5; // eax
  int v6; // esi
  __int16 *v7; // ebx
  int v8; // eax
  int v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edi
  int v15; // ebx
  int v16; // edi
  char *v17; // eax
  int v18; // edx
  char v19; // cl
  __int16 v20; // ax
  int v21; // ebx
  int v22; // ebx
  int v23; // [esp+Ch] [ebp-184h] BYREF
  int v24; // [esp+10h] [ebp-180h]
  int v25; // [esp+14h] [ebp-17Ch]
  int v26; // [esp+18h] [ebp-178h]
  int v27; // [esp+1Ch] [ebp-174h]
  int v28; // [esp+20h] [ebp-170h]
  int v29; // [esp+24h] [ebp-16Ch]
  char Buffer[256]; // [esp+28h] [ebp-168h] BYREF
  _BYTE v31[100]; // [esp+128h] [ebp-68h] BYREF

  v4 = a1;
  v27 = a1;
  sub_464B60(&v23);
  v5 = sub_4656D0(&unk_4C43C4);
  v29 = v5;
  if ( v5 == -1 )
    return -1;
  v6 = dword_4C43DC + v5 * dword_4C43C8;
  v7 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * a1);
  if ( v7[16] )
  {
    if ( v7[16] == 2 )
    {
      *(_BYTE *)(v6 + 3) = 4;
      v8 = v7[1];
    }
    else
    {
      v8 = v27;
    }
  }
  else
  {
    *(_BYTE *)(v6 + 3) = 0;
    v8 = *v7;
  }
  v9 = sub_486480(v8, a2, a3, a4, 0, 1, 0, 0, 0);
  *(_DWORD *)(v6 + 80) = v9;
  if ( v9 == -1 )
  {
    sub_464E10(v29);
    return -1;
  }
  v11 = sub_485A70(v9);
  sub_464CE0(v11);
  v28 = v24;
  if ( v24 <= v26 )
  {
    v12 = v25;
    v13 = v23;
    do
    {
      if ( v13 <= v12 )
      {
        do
        {
          sub_4385B0(v13, v28);
          v12 = v25;
          ++v13;
        }
        while ( v13 <= v25 );
        v13 = v23;
      }
      ++v28;
    }
    while ( v28 <= v26 );
    v4 = v27;
  }
  *(_WORD *)v6 = v4;
  *(_BYTE *)(v6 + 2) = -1;
  *(_DWORD *)(v6 + 12) = dword_4CD11C;
  memset((void *)(v6 + 16), 0, 0x3Cu);
  *(_WORD *)(v6 + 4) = v7[17];
  *(_WORD *)(v6 + 84) = -1;
  v14 = sub_4640D0() % 50;
  *(_DWORD *)(v6 + 8) = *((_DWORD *)v7 + 9) * (v14 - sub_4640D0() % 50 + 100) / 100;
  *(_BYTE *)(v6 + 6) = sub_4640D0() % 60 + 40;
  sub_40F570((_DWORD *)v6, 1);
  sub_483BD0(*(_DWORD *)(v6 + 80), 0, v29);
  sub_40F6A0((__int16 *)v6);
  if ( v7[16] )
  {
    *(_DWORD *)(v6 + 16) &= 0x3FFFFFFFu;
    *(_DWORD *)(v6 + 24) &= 0x3FFFFFFFu;
    *(_DWORD *)(v6 + 32) &= 0x3FFFFFFFu;
    *(_DWORD *)(v6 + 40) &= 0x3FFFFFFFu;
    *(_DWORD *)(v6 + 48) &= 0x3FFFFFFFu;
    *(_DWORD *)(v6 + 56) &= 0x3FFFFFFFu;
    *(_DWORD *)(v6 + 64) &= 0x3FFFFFFFu;
    ++dword_4D046C;
    result = v29;
    *(_DWORD *)(v6 + 88) = -1;
  }
  else
  {
    v15 = sub_40CD20((__int16 *)v6) - 2;
    v16 = sub_40F570((_DWORD *)v6, 1);
    v17 = (char *)sub_4646A0(0, v15);
    v18 = v31 - v17;
    do
    {
      v19 = *v17;
      v17[v18] = *v17;
      ++v17;
    }
    while ( v19 );
    v20 = *(_WORD *)(v6 + 4);
    if ( v20 == -1 )
    {
      v21 = *(_DWORD *)dword_4D1088 + 2816;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 2824), v31, v16);
      sub_42B930(a2, a3, -1, Buffer, v21);
    }
    else
    {
      v22 = *(_DWORD *)dword_4D1088 + 2728;
      sprintf(
        Buffer,
        (const char *const)(*(_DWORD *)dword_4D1088 + 2736),
        v31,
        *(unsigned __int8 *)(v6 + 6),
        *(_DWORD *)dword_870814 + 72 * v20,
        v16);
      sub_42B930(a2, a3, -1, Buffer, v22);
    }
    result = v29;
    *(_DWORD *)(v6 + 88) = -1;
  }
  return result;
}
