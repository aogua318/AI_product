// 函数 0x430670  sub_430670  size=0xF5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __usercall sub_430670@<eax>(int a1@<edi>, unsigned int *a2@<esi>, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int16 v7; // ax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // [esp+0h] [ebp-10h] BYREF
  unsigned int v13; // [esp+4h] [ebp-Ch]
  unsigned int v14; // [esp+8h] [ebp-8h]
  unsigned int v15; // [esp+Ch] [ebp-4h]

  sub_464B60(&v12);
  v4 = sub_483C60(a3, a4, *(unsigned __int8 *)(a2[37] + 194), *(unsigned __int8 *)(a2[37] + 195), a1);
  sub_464CE0(v4);
  switch ( a1 )
  {
    case 0:
      v5 = a2[6];
      v6 = v15 + 1;
      if ( v12 < v5 && v6 < a2[7] && *(_WORD *)(a2[31] + 2 * (v12 + v6 * v5)) != 0xFFFF )
        return 1;
      goto LABEL_5;
    case 1:
      v9 = v14 + 1;
      goto LABEL_9;
    case 2:
      v11 = a2[6];
      v6 = v13 - 1;
      if ( v12 < v11 && v6 < a2[7] && *(_WORD *)(a2[31] + 2 * (v12 + v6 * v11)) != 0xFFFF )
        return 1;
LABEL_5:
      v7 = sub_401260(a2, 1, v14, v6);
      return v7 != -1;
    case 3:
      v9 = v12 - 1;
LABEL_9:
      v10 = a2[6];
      if ( v9 < v10 && v13 < a2[7] && *(_WORD *)(a2[31] + 2 * (v9 + v13 * v10)) != 0xFFFF )
        return 1;
      v7 = sub_401260(a2, 1, v9, v15);
      return v7 != -1;
    default:
      return 0;
  }
}
