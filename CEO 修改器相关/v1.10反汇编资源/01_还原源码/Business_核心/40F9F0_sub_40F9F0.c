// 函数 0x40f9f0  sub_40F9F0  size=0x20A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40F9F0(int a1, int a2)
{
  __int16 *v2; // esi
  bool v3; // zf
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int16 v8; // cx
  char *v9; // edi
  __int16 v10; // ax
  char *v11; // ebx
  int v13; // [esp+18h] [ebp-118h] BYREF
  int v14; // [esp+1Ch] [ebp-114h] BYREF
  int v15; // [esp+20h] [ebp-110h]
  int v16; // [esp+24h] [ebp-10Ch]
  int v17; // [esp+28h] [ebp-108h]
  char Buffer[256]; // [esp+2Ch] [ebp-104h] BYREF

  v2 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  v3 = *((_BYTE *)v2 + 3) == 0;
  v4 = *(_DWORD *)dword_4C4434 + 72 * *v2;
  v15 = a2;
  v16 = v4;
  if ( !v3 )
    return 0;
  v17 = sub_40F570((_DWORD *)(dword_4C43DC + a1 * dword_4C43C8), 1);
  if ( (double)v17 > dbl_4D10C0[23735 * a2] )
  {
    if ( a2 == dword_8703A0 )
      sub_460EA0();
    return 0;
  }
  v5 = sub_40F570(v2, 0);
  v6 = v17;
  *((_DWORD *)v2 + 23) = v5;
  v7 = v16;
  *((_BYTE *)v2 + 2) = a2;
  v8 = *(_WORD *)(v7 + 2);
  v16 = -v6;
  *v2 = v8;
  *((_BYTE *)v2 + 3) = 1;
  sub_42EDA0((double)-v6);
  *((_DWORD *)v2 + 3) = dword_4CD11C;
  sub_486530(*((_DWORD *)v2 + 20), *(__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *v2), word_4D10BA[94940 * a2], 0, 0, 0);
  if ( dword_4B1024 == a1 )
    sub_40DD00(a1);
  if ( v2[2] == -1 )
    v9 = (char *)(*(_DWORD *)dword_4D1088 + 1408);
  else
    v9 = (char *)(*(_DWORD *)dword_4D1088 + 1320);
  if ( *v9 >= word_4D03D2 )
  {
    sub_40D7C0(v2, (int)&v14, (int)&v13);
    v10 = v2[2];
    v11 = (char *)&unk_4D10B8 + 189880 * a2 + 16;
    if ( v10 == -1 )
      sprintf(Buffer, v9 + 8, v11, v17);
    else
      sprintf(Buffer, v9 + 8, v11, v17, *((unsigned __int8 *)v2 + 6), *(_DWORD *)dword_870814 + 72 * v10);
    sub_42B930(v14, v13, v15, Buffer, v9);
  }
  return 1;
}
