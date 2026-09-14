// 函数 0x4321d0  sub_4321D0  size=0x275  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4321D0(int a1)
{
  __int16 *v1; // esi
  int v2; // edi
  int v3; // ebx
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // ecx
  int v9; // eax
  int i; // edi
  unsigned __int8 *v11; // eax
  int v12; // eax
  __int16 *v13; // ecx

  v1 = (__int16 *)(dword_8703D0 + a1 * dword_8703BC);
  v2 = v1[3];
  v3 = dword_4CCAAC + dword_4CCA98 * *v1;
  if ( sub_483C00(v2) != 6 || sub_483C30(v2) != a1 || !sub_464E10(a1) )
    return 0;
  v4 = v1[8];
  if ( v4 != -1 )
    *(_WORD *)(dword_4D1094 * v4 + dword_4D10A8 + 28) = -1;
  v5 = v1[9];
  if ( v5 != -1 )
    *(_WORD *)(dword_4D1094 * v5 + dword_4D10A8 + 28) = -1;
  v6 = v1[10];
  if ( v6 != -1 )
    *(_WORD *)(dword_4D1094 * v6 + dword_4D10A8 + 28) = -1;
  v7 = v1[11];
  if ( v7 != -1 )
    *(_WORD *)(dword_4D1094 * v7 + dword_4D10A8 + 28) = -1;
  sub_4864E0(v2);
  if ( a1 == dword_4B32B4 )
  {
    sub_43C9C0(0);
    dword_4B32B4 = -1;
    dword_4B1010 = -1;
  }
  v8 = v1[1];
  v9 = v1[2];
  if ( v8 == -1 )
    *(_WORD *)(v3 + 758) = v9;
  else
    *(_WORD *)(v8 * dword_8703BC + dword_8703D0 + 4) = v9;
  if ( v9 != -1 )
    *(_WORD *)(v9 * dword_8703BC + dword_8703D0 + 2) = v8;
  --*(_WORD *)(v3 + 746);
  --*(_WORD *)(v3 + 2 * *((char *)v1 + 31) + 800);
  if ( v1[14] != -1 )
  {
    for ( i = sub_430BA0(v1); i != -1; i = sub_430BA0(v1) )
    {
      v11 = (unsigned __int8 *)(dword_4D0BAC + i * dword_4D0B98);
      if ( v11[11] == 6 && *((__int16 *)v11 + 7) == a1 )
      {
        v11[11] = -1;
        v12 = 3;
        v13 = v1 + 7;
        while ( *v13 != i )
        {
          --v13;
          if ( --v12 < 0 )
            goto LABEL_31;
        }
        v1[v12 + 4] = -1;
      }
      else if ( v11[10] == 6 && *((__int16 *)v11 + 6) == a1 )
      {
        sub_415C20(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *v11 + 240), *((_DWORD *)v11 + 5));
        sub_420B10(i);
      }
LABEL_31:
      ;
    }
    sub_4864E0(v1[12]);
    sub_4864E0(v1[13]);
    sub_439000(*(unsigned __int8 *)(dword_89E57C + dword_89E568 * v1[14] + 17));
    sub_438C20(v1[14]);
  }
  return 1;
}
