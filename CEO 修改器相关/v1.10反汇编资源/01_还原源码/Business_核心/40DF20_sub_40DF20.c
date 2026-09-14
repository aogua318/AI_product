// 函数 0x40df20  sub_40DF20  size=0x339  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40DF20(int a1, int a2)
{
  int v2; // esi
  bool v3; // zf
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // ebx
  int v10; // edi
  __int16 v11; // ax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v19; // [esp+14h] [ebp-118h] BYREF
  int v20; // [esp+18h] [ebp-114h]
  int v21; // [esp+1Ch] [ebp-110h] BYREF
  int v22; // [esp+20h] [ebp-10Ch]
  int v23; // [esp+24h] [ebp-108h]
  char Buffer[256]; // [esp+28h] [ebp-104h] BYREF

  v2 = dword_4C43DC + a1 * dword_4C43C8;
  v22 = a1;
  v3 = *(_BYTE *)(v2 + 3) == 1;
  v20 = a2;
  if ( !v3 )
    return 0;
  do
  {
    v4 = sub_40CD20((__int16 *)v2);
    if ( v4 == word_4C43E4[v5] )
      break;
    ++v5;
  }
  while ( v5 < 3 );
  v6 = dword_4CD128 >= 50 ? word_4C4410[6 * v5 + a2] : word_4C43EC[6 * v5 + a2];
  if ( v6 == -1 )
    return 0;
  *(_BYTE *)(v2 + 7) = a2;
  v7 = *(_DWORD *)dword_4C4434 + 72 * v6;
  v8 = *(char *)(v2 + 2);
  *(_WORD *)v2 = v6;
  *(_BYTE *)(v2 + 3) = 4;
  v23 = v7;
  if ( v8 == dword_8703A0 )
    sub_4458B0(0);
  v9 = (char *)&unk_4D10B8 + 189880 * *(char *)(v2 + 2);
  switch ( v20 )
  {
    case 0:
      v10 = *(_DWORD *)dword_4D1088 + 880;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 888), v9 + 16);
      break;
    case 1:
      v10 = *(_DWORD *)dword_4D1088 + 1144;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 1152), v9 + 16);
      break;
    case 2:
      v10 = *(_DWORD *)dword_4D1088 + 1232;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 1240), v9 + 16);
      break;
    case 3:
      v10 = *(_DWORD *)dword_4D1088 + 968;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 976), v9 + 16);
      break;
    case 4:
      v10 = *(_DWORD *)dword_4D1088 + 1056;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 1064), v9 + 16);
      break;
    case 5:
      v11 = *(_WORD *)(v2 + 4);
      v10 = *(_DWORD *)dword_4D1088 + 792;
      if ( v11 == -1 )
        sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 800), v9 + 16, byte_4A2869);
      else
        sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 800), v9 + 16, *(_DWORD *)dword_870814 + 72 * v11);
      break;
    default:
      v10 = v22;
      break;
  }
  sub_40D7C0((_DWORD *)v2, (int)&v21, (int)&v19);
  sub_42B930(v21, v19, *(char *)(v2 + 2), Buffer, v10);
  memset((void *)(v2 + 16), 0, 0x3Cu);
  v23 = -*(_DWORD *)(v23 + 60);
  sub_42EDA0((double)v23);
  v12 = *(_DWORD *)(v2 + 24);
  v13 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v2 + 16) & 0x3FFFFFFF | 0x40000000;
  v14 = *(_DWORD *)(v2 + 40) & 0x3FFFFFFF | 0x40000000;
  *(_DWORD *)(v2 + 24) = v12 & 0x3FFFFFFF | 0x40000000;
  v15 = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 32) = v13 & 0x3FFFFFFF | 0x40000000;
  v16 = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(v2 + 40) = v14;
  v17 = *(_DWORD *)(v2 + 64) & 0x3FFFFFFF | 0x40000000;
  *(_DWORD *)(v2 + 48) = v15 & 0x3FFFFFFF | 0x40000000;
  *(_DWORD *)(v2 + 56) = v16 & 0x3FFFFFFF | 0x40000000;
  *(_DWORD *)(v2 + 64) = v17;
  *(_DWORD *)(v2 + 12) = dword_4CD11C;
  if ( dword_4C2D18 || dword_4CD13C )
    sub_45A730(v22);
  return 1;
}
