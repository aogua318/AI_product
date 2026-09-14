// 函数 0x485fe0  sub_485FE0  size=0x27C  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_485FE0(_DWORD *a1, int a2)
{
  int v2; // ebx
  __int16 *v4; // edi
  char v5; // al
  int result; // eax
  int v7; // edx
  int v8; // eax
  char v9; // cl
  int *v10; // eax
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  __int16 *v18; // [esp+Ch] [ebp-7Ch]
  int v19; // [esp+Ch] [ebp-7Ch]
  int v20; // [esp+10h] [ebp-78h] BYREF
  int v21; // [esp+14h] [ebp-74h]
  int *v22; // [esp+18h] [ebp-70h] BYREF
  int v23; // [esp+1Ch] [ebp-6Ch]
  CHAR Text[100]; // [esp+20h] [ebp-68h] BYREF

  v2 = a2;
  v23 = a2;
  if ( a2 < 0 )
  {
    sprintf(Text, "%s\nline%d", "a_map\\a_map.cpp", 1361);
    goto LABEL_3;
  }
  v4 = (__int16 *)(a1[45] + a2 * a1[40]);
  v18 = v4;
  sub_483850(a1, v4[1], v4[2], &v22, &v20);
  v5 = *((_BYTE *)v4 + 10);
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 8) != 0 )
    {
      if ( !sub_485630(a1, *v4, (int)v22, v20, *((unsigned __int8 *)v4 + 8), 0) )
        return 0;
    }
    else
    {
      result = sub_485560(a1, *v4, (int)v22, v20, *((unsigned __int8 *)v4 + 8), 0);
      if ( !result )
        return result;
    }
    v7 = *((unsigned __int8 *)v4 + 8);
    v8 = 10 * *v4;
    v9 = *(_BYTE *)(v8 + a1[37] + 6);
    if ( v9 == 16 )
      v7 = (v7 + 1) >> 1;
    if ( v9 == 8 )
      v7 >>= 1;
    v10 = sub_483C60((int)v22, v20, *(unsigned __int8 *)(v8 + a1[37] + 4), *(unsigned __int8 *)(v8 + a1[37] + 5), v7);
    v11 = v10[1];
    v21 = v11;
    if ( v11 <= v10[3] )
    {
      v12 = v10[2];
      do
      {
        v13 = *v10;
        if ( *v10 <= v12 )
        {
          do
          {
            *(_DWORD *)(a1[35] + 4 * (v13 + v11 * a1[6])) = v23;
            v12 = v10[2];
            v11 = v21;
            ++v13;
          }
          while ( v13 <= v12 );
          v4 = v18;
        }
        v21 = ++v11;
      }
      while ( v11 <= v10[3] );
    }
    v2 = v23;
  }
  v14 = (int *)(a1[34] + 4 * ((_DWORD)v22 + v20 * a1[6]));
  v15 = *v14;
  v22 = v14;
  if ( v15 == -1 )
  {
    *v14 = v2;
LABEL_37:
    *((_DWORD *)v4 + 5) = -1;
  }
  else
  {
    v19 = v4[1] + v4[2];
    v21 = -1;
    if ( v15 < -1 )
    {
LABEL_29:
      sprintf(Text, "%s\nline%d", "a_map\\a_map.cpp", 1402);
LABEL_3:
      MessageBoxA(hWnd, Text, "wrong objid", 0);
      exit(1);
    }
    while ( 1 )
    {
      if ( v15 == v2 )
      {
        MessageBoxA(hWnd, "putobj failure", "error", 0);
        return 0;
      }
      v16 = a1[45] + v15 * a1[40];
      if ( v19 < *(__int16 *)(v16 + 2) + *(__int16 *)(v16 + 4) )
        break;
      v17 = v15;
      v15 = *(_DWORD *)(v16 + 20);
      v21 = v17;
      if ( v15 == -1 )
      {
        *(_DWORD *)(v17 * a1[40] + a1[45] + 20) = v23;
        goto LABEL_37;
      }
      if ( v15 < -1 )
        goto LABEL_29;
      v2 = v23;
    }
    if ( v21 == -1 )
      *v22 = v23;
    else
      *(_DWORD *)(v21 * a1[40] + a1[45] + 20) = v23;
    *((_DWORD *)v4 + 5) = v15;
  }
  return 1;
}
