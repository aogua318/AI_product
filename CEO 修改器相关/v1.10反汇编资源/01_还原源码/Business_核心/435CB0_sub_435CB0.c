// 函数 0x435cb0  sub_435CB0  size=0x186  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_435CB0@<eax>(__int16 *a1@<edi>, char a2)
{
  int v2; // ebx
  int v3; // esi
  __int16 *v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int16 v12; // ax
  int v13; // eax
  int v14; // [esp-18h] [ebp-3Ch]
  int v15; // [esp+8h] [ebp-1Ch] BYREF
  int v16; // [esp+Ch] [ebp-18h]
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  __int16 *v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  sub_464B60(&v15);
  v2 = sub_4656D0(&unk_4C43C4);
  v20 = v2;
  if ( v2 == -1 )
    return -1;
  v3 = dword_4C43DC + v2 * dword_4C43C8;
  v4 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *a1);
  *(_BYTE *)(v3 + 3) = *((_BYTE *)a1 + 7);
  v5 = a1[2];
  v14 = *((char *)a1 + 6);
  v6 = a1[1];
  v19 = v4;
  v7 = sub_486480(*v4, v6, v5, v14, 0, 1, 0, 0, 0);
  *(_DWORD *)(v3 + 80) = v7;
  if ( v7 == -1 )
  {
    sub_464E10(v2);
    return -1;
  }
  v9 = sub_485A70(v7);
  sub_464CE0(v9);
  v21 = v16;
  if ( v16 <= v18 )
  {
    v10 = v17;
    v11 = v15;
    do
    {
      if ( v11 <= v10 )
      {
        do
        {
          sub_4385B0(v11, v21);
          v10 = v17;
          ++v11;
        }
        while ( v11 <= v17 );
        v11 = v15;
      }
      ++v21;
    }
    while ( v21 <= v18 );
    v2 = v20;
  }
  v12 = *a1;
  *(_BYTE *)(v3 + 2) = a2;
  *(_WORD *)v3 = v12;
  *(_DWORD *)(v3 + 12) = dword_4CD11C;
  *(_BYTE *)(v3 + 7) = *((_BYTE *)a1 + 11);
  *(_WORD *)(v3 + 4) = a1[4];
  *(_BYTE *)(v3 + 6) = *((_BYTE *)a1 + 10);
  v13 = *((_DWORD *)a1 + 3);
  *(_WORD *)(v3 + 86) = -1;
  *(_DWORD *)(v3 + 8) = v13;
  *(_WORD *)(v3 + 84) = -1;
  sub_40F570((_DWORD *)v3, 1);
  sub_483BD0(*(_DWORD *)(v3 + 80), 0, v2);
  sub_40F6A0((__int16 *)v3);
  sub_486530(*(_DWORD *)(v3 + 80), *v19, word_4D10BA[94940 * *(char *)(v3 + 2)] + 2, 0, 0, 0);
  *(_WORD *)(v3 + 16) = -1;
  *(_DWORD *)(v3 + 88) = -1;
  sub_41B350(v2);
  return v2;
}
