// 函数 0x439130  sub_439130  size=0x128  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_439130(int a1)
{
  __int16 *v1; // esi
  int v2; // ebx
  int v3; // ecx
  char *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  char v8; // dl
  __int16 *v9; // eax
  char v10; // dl
  __int16 *v12; // [esp+Ch] [ebp-18h]
  unsigned int v13; // [esp+10h] [ebp-14h] BYREF
  unsigned int v14; // [esp+14h] [ebp-10h] BYREF
  char *v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]
  int v18; // [esp+2Ch] [ebp+8h]

  v1 = (__int16 *)(dword_89E57C + a1 * dword_89E568);
  v12 = v1;
  if ( (*((_BYTE *)v1 + 19) & 0xF) != 0 )
    v2 = v1[3];
  else
    v2 = v1[2];
  v3 = v1[1];
  v4 = byte_4B33E0;
  v18 = v2;
  v17 = *v1;
  v16 = v3;
  v15 = byte_4B33E0;
  while ( 1 )
  {
    sub_483D50(*((_DWORD *)v1 + 5), *(__int16 *)v4, *((__int16 *)v4 + 1), &v14, &v13);
    if ( v14 < dword_4D0E80 && v13 < dword_4D0E84 )
    {
      v5 = *(_DWORD *)(dword_4D0EF0 + 4 * (v14 + v13 * dword_4D0E80));
      if ( v5 != -1 )
        break;
    }
LABEL_18:
    v4 += 4;
    v15 = v4;
    if ( (int)v4 >= (int)byte_4B33F0 )
      return 0;
  }
  while ( 1 )
  {
    v6 = dword_4D0F1C + v5 * dword_4D0F08;
    if ( *(_BYTE *)(v6 + 11) == 1 )
    {
      v7 = dword_89E568 * *(__int16 *)(v6 + 12);
      v8 = *(_BYTE *)(v7 + dword_89E57C + 19);
      v9 = (__int16 *)(dword_89E57C + v7);
      v10 = v8 & 0xF;
      if ( (!v10 || v10 == 2 || v10 == 1 || v10 == 3) && v9[2] == v2 && *v9 == v17 && v9[1] == v16 )
        return 1;
    }
    v5 = *(_DWORD *)(v6 + 20);
    v2 = v18;
    if ( v5 == -1 )
    {
      v1 = v12;
      v4 = v15;
      goto LABEL_18;
    }
  }
}
