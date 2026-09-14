// 函数 0x4853b0  sub_4853B0  size=0x1A4  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_4853B0@<eax>(_DWORD *a1@<esi>, int a2)
{
  __int16 *v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  char v6; // dl
  int *v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // ecx
  int *v11; // edi
  int v12; // eax
  int v13; // edx
  bool v14; // cc
  int v15; // ecx
  __int16 *v17; // [esp+8h] [ebp-78h]
  int v18; // [esp+10h] [ebp-70h] BYREF
  int v19; // [esp+14h] [ebp-6Ch] BYREF
  CHAR Text[100]; // [esp+18h] [ebp-68h] BYREF

  v2 = (__int16 *)(a1[45] + a2 * a1[40]);
  v17 = v2;
  sub_483850(a1, v2[1], v2[2], &v19, &v18);
  if ( (v2[5] & 4) != 0 )
  {
    v3 = a1[37];
    v4 = *((unsigned __int8 *)v2 + 8);
    v5 = 10 * *v2;
    v6 = *(_BYTE *)(v3 + v5 + 6);
    if ( v6 == 8 )
      v4 >>= 1;
    if ( v6 == 16 )
      v4 >>= 1;
    v7 = sub_483C60(v19, v18, *(unsigned __int8 *)(v5 + v3 + 4), *(unsigned __int8 *)(v5 + v3 + 5), v4);
    v8 = v7[1];
    if ( v8 <= v7[3] )
    {
      v9 = v7[2];
      do
      {
        v10 = *v7;
        if ( *v7 <= v9 )
        {
          do
          {
            *(_DWORD *)(a1[35] + 4 * (v10 + v8 * a1[6])) = -1;
            v9 = v7[2];
            ++v10;
          }
          while ( v10 <= v9 );
          v2 = v17;
        }
        ++v8;
      }
      while ( v8 <= v7[3] );
    }
  }
  v11 = (int *)(a1[34] + 4 * (v19 + v18 * a1[6]));
  v12 = *v11;
  v13 = -1;
  v14 = *v11 < -1;
  if ( *v11 == -1 )
  {
LABEL_17:
    MessageBoxA(hWnd, "unputobj failure", "error", 0);
    return 0;
  }
  else
  {
    v15 = a2;
    while ( 1 )
    {
      if ( v14 )
      {
        sprintf(Text, "%s\nline%d", "a_map\\a_map.cpp", 1470);
        MessageBoxA(hWnd, Text, "wrong objid", 0);
        exit(1);
      }
      if ( v12 == a2 )
        break;
      v15 = a1[45] + v12 * a1[40];
      v13 = v12;
      v12 = *(_DWORD *)(v15 + 20);
      v14 = v12 < -1;
      if ( v12 == -1 )
        goto LABEL_17;
    }
    if ( v13 == -1 )
      *v11 = *((_DWORD *)v2 + 5);
    else
      *(_DWORD *)(v15 + 20) = *((_DWORD *)v2 + 5);
    return 1;
  }
}
