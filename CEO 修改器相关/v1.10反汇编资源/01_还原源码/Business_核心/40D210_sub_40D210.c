// 函数 0x40d210  sub_40D210  size=0x16B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __fastcall sub_40D210(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+Ch] [ebp-24h] BYREF
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  BOOL v15; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+24h] [ebp-Ch]
  int v18; // [esp+28h] [ebp-8h]

  sub_464B60(&v11);
  if ( a2 >= dword_4D0E80 )
    return 1;
  if ( a3 >= dword_4D0E84 )
    return 1;
  v7 = *(_DWORD *)(dword_4D0EF4 + 4 * (a2 + a3 * dword_4D0E80));
  if ( v7 == -1 )
    return 1;
  v8 = dword_4D0F1C + v7 * dword_4D0F08;
  if ( *(_BYTE *)(v8 + 11) )
    return 1;
  v9 = dword_4C43DC + dword_4C43C8 * *(__int16 *)(v8 + 12);
  if ( *(__int16 *)(v9 + 4) == a1 && a1 != -1 )
    return 0;
  v10 = sub_40CD60((_DWORD *)v9);
  sub_464CE0(v10);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( v14 + 1 < (unsigned int)dword_4D0E84 )
    v15 = *(_WORD *)(dword_4D0EE4 + 2 * (v11 + (v14 + 1) * dword_4D0E80)) > 0;
  if ( v13 + 1 < (unsigned int)dword_4D0E80 && *(__int16 *)(dword_4D0EE4 + 2 * (v13 + 1 + v14 * dword_4D0E80)) > 0 )
    v16 = 1;
  if ( v12 - 1 < (unsigned int)dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v13 + (v12 - 1) * dword_4D0E80)) > 0 )
    v17 = 1;
  if ( v11 - 1 < (unsigned int)dword_4D0E80 && *(__int16 *)(dword_4D0EE4 + 2 * (v11 - 1 + v12 * dword_4D0E80)) > 0 )
    v18 = 1;
  return *(&v15 + a4) && v15 + v16 + v17 + v18 == 1;
}
