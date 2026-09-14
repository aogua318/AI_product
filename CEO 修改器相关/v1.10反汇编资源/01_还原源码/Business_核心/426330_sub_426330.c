// 函数 0x426330  sub_426330  size=0x153  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_426330@<eax>(_DWORD *a1@<esi>, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v18; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  sub_464B60(&v18);
  v2 = sub_485A70(a2);
  sub_464CE0(v2);
  v3 = v18;
  if ( v18 > v20 )
  {
LABEL_9:
    v10 = v19;
    if ( v19 > v21 )
    {
      return -1;
    }
    else
    {
      while ( 1 )
      {
        if ( v18 - 2 >= 0 )
        {
          v11 = a1[35];
          v12 = v18 - 2 + v10 * a1[6];
          v9 = *(_DWORD *)(v11 + 4 * v12);
          if ( v9 >= 0 && sub_483C00(*(_DWORD *)(v11 + 4 * v12)) == 8 )
            break;
        }
        v13 = a1[6];
        if ( v20 + 2 < v13 )
        {
          v14 = v20 + 2 + v10 * v13;
          v15 = a1[35];
          v16 = *(_DWORD *)(v15 + 4 * v14);
          if ( v16 >= 0 && sub_483C00(*(_DWORD *)(v15 + 4 * v14)) == 8 )
            return *(__int16 *)(v16 * a1[40] + a1[45] + 6);
        }
        if ( ++v10 > v21 )
          return -1;
      }
      return *(__int16 *)(v9 * a1[40] + a1[45] + 6);
    }
  }
  else
  {
    while ( 1 )
    {
      if ( v19 - 2 >= 0 )
      {
        v4 = a1[35];
        v5 = v3 + (v19 - 2) * a1[6];
        v6 = *(_DWORD *)(v4 + 4 * v5);
        if ( v6 >= 0 && sub_483C00(*(_DWORD *)(v4 + 4 * v5)) == 8 )
          return *(__int16 *)(v6 * a1[40] + a1[45] + 6);
      }
      if ( v21 + 2 < a1[7] )
      {
        v7 = a1[35];
        v8 = v3 + (v21 + 2) * a1[6];
        v9 = *(_DWORD *)(v7 + 4 * v8);
        if ( v9 >= 0 && sub_483C00(*(_DWORD *)(v7 + 4 * v8)) == 8 )
          return *(__int16 *)(v9 * a1[40] + a1[45] + 6);
      }
      if ( ++v3 > v20 )
        goto LABEL_9;
    }
  }
}
