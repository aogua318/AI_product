// 函数 0x438a50  sub_438A50  size=0x1CA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_438A50(__int16 a1, __int16 a2, int a3, unsigned __int8 a4, __int16 a5)
{
  int v5; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // [esp+8h] [ebp-20h] BYREF
  unsigned int v15; // [esp+Ch] [ebp-1Ch] BYREF
  int v16; // [esp+10h] [ebp-18h] BYREF
  int v17; // [esp+14h] [ebp-14h]
  int v18; // [esp+18h] [ebp-10h] BYREF
  int v19; // [esp+1Ch] [ebp-Ch] BYREF
  int v20; // [esp+20h] [ebp-8h] BYREF
  int v21; // [esp+24h] [ebp-4h] BYREF

  v5 = dword_4CCAAC + dword_4CCA98 * a1;
  if ( !sub_419950(v5, a4, &v19, &v18) )
    return -1;
  v7 = sub_4656D0(&unk_89E564);
  v17 = v7;
  if ( v7 == -1 )
    return -1;
  v8 = dword_89E57C + v7 * dword_89E568;
  if ( a3 )
    sub_419920((_DWORD *)(dword_4CCAAC + dword_4CCA98 * a2), &v20, &v21);
  else
    sub_40D7C0((_DWORD *)(dword_4C43DC + dword_4C43C8 * a2), (int)&v20, (int)&v21);
  sub_438820(&v15, &v16, v19, v18, v20, v21, &v14);
  v9 = sub_486480(0, v14, v15, v16, 0, 0, 0, 0, 0);
  *(_DWORD *)(v8 + 20) = v9;
  if ( v9 == -1 )
  {
    sub_464E10(v17);
    return -1;
  }
  *(_WORD *)v8 = v19;
  *(_WORD *)(v8 + 2) = v18;
  *(_WORD *)(v8 + 6) = a2;
  *(_WORD *)(v8 + 4) = a1;
  *(_BYTE *)(v8 + 16) = a4;
  *(_BYTE *)(v8 + 17) = a5;
  *(_BYTE *)(v8 + 18) = a3;
  v10 = dword_4CD11C;
  *(_BYTE *)(v8 + 19) &= ~0x10u;
  *(_DWORD *)(v8 + 24) = v10;
  *(_DWORD *)(v8 + 28) = *(_DWORD *)(dword_4CC8BC * *(__int16 *)(v5 + 2 * a4 + 240) + dword_4CC8D0 + 12);
  sub_419C10((__int16 *)v5, a4, a5);
  v11 = v17;
  *(_DWORD *)(v8 + 8) = -1;
  *(_DWORD *)(v8 + 12) = -1;
  v12 = *(_DWORD *)(v8 + 20);
  *(_BYTE *)(v8 + 19) &= 0xF0u;
  sub_483BD0(v12, 1, v11);
  v13 = 8 * word_4D10BA[94940 * *(char *)(v5 + 224)];
  if ( v13 > 0x38 )
    v13 = 56;
  sub_4868E0(*(_DWORD *)(v8 + 20), v13);
  return v11;
}
