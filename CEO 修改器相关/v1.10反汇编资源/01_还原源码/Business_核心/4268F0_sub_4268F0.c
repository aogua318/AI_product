// 函数 0x4268f0  sub_4268F0  size=0x1E5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4268F0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  __int16 *v11; // edi
  int v12; // ebx
  int v13; // eax
  int v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v5 = a3;
  v6 = (_DWORD *)(dword_4CCAAC + a1 * dword_4CCA98);
  if ( a3 < 0 )
  {
    a3 = 0;
    v5 = 0;
  }
  v7 = v6[6];
  if ( v5 >= v7 )
  {
    a3 = v7 - 1;
    v5 = v7 - 1;
  }
  v8 = a4;
  if ( a4 < 0 )
  {
    a4 = 0;
    v8 = 0;
  }
  v9 = v6[7];
  if ( v8 >= v9 )
  {
    a4 = v9 - 1;
    v8 = v9 - 1;
  }
  if ( dword_4B119C == -1 )
  {
    v10 = a5;
    if ( a5 == -1 )
      v10 = 0;
    dword_4B11A0 = a2;
    v11 = (__int16 *)(*(_DWORD *)dword_4D0C8C + 388 * a2);
    v12 = *v11;
    v13 = sub_486480(v12, v5, v8, v10, 0, 0, 0, 0, 0);
    dword_4B119C = v13;
    if ( v13 == -1 )
      goto LABEL_18;
    sub_4868E0(v13, 1);
  }
  else
  {
    if ( a5 == -1 )
      a5 = *(unsigned __int8 *)(dword_4B119C * v6[40] + v6[45] + 8);
    v11 = (__int16 *)(*(_DWORD *)dword_4D0C8C + 388 * dword_4B11A0);
    v12 = *v11;
    sub_483890(v5, v8, &v16, &v15);
    v16 += (int)v6[8] >> 1;
    v15 += (int)v6[8] >> 1;
    sub_4866A0(dword_4B119C, v16, v15, 0);
    sub_4867D0(dword_4B119C, a5);
  }
  v13 = dword_4B119C;
LABEL_18:
  if ( dword_4B1028 == a1 )
    dword_4B1010 = v13;
  if ( !sub_485560(v12, a3, a4, *(unsigned __int8 *)(v13 * v6[40] + v6[45] + 8), 1) )
    goto LABEL_25;
  dword_4D0C68 = 1;
  if ( *((_BYTE *)v11 + 78) != 2 )
  {
LABEL_24:
    sub_486260(dword_4B119C, 0, 0);
    return dword_4B119C;
  }
  dword_4B11A4 = sub_426330(v6, dword_4B119C);
  if ( dword_4B11A4 == -1 )
  {
LABEL_25:
    dword_4D0C68 = 0;
  }
  else if ( dword_4D0C68 )
  {
    goto LABEL_24;
  }
  sub_486260(dword_4B119C, 3, 32140);
  return dword_4B119C;
}
