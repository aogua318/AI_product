// 函数 0x471370  sub_471370  size=0xD2  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_471370@<eax>(int result@<eax>, int a2@<edi>, int a3)
{
  int v3; // edx
  int v4; // ecx
  bool v5; // cc
  int v6; // esi
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // bx
  int v9; // esi
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // bx
  int v12; // edx
  int v13; // edx
  int v14; // esi
  int v15; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(result + 5192);
  v4 = 2 * a3;
  v15 = *(_DWORD *)(result + 4 * a3 + 2900);
  v5 = 2 * a3 < v3;
  if ( 2 * a3 > v3 )
  {
    *(_DWORD *)(result + 4 * a3 + 2900) = *(_DWORD *)(result + 4 * a3 + 2900);
  }
  else
  {
    while ( 1 )
    {
      if ( v5 )
      {
        v6 = *(_DWORD *)(result + 4 * v4 + 2904);
        v7 = *(_WORD *)(a2 + 4 * v6);
        v8 = *(_WORD *)(a2 + 4 * *(_DWORD *)(result + 4 * v4 + 2900));
        if ( v7 < v8
          || v7 == v8
          && *(_BYTE *)(v6 + result + 5200) <= *(_BYTE *)(*(_DWORD *)(result + 4 * v4 + 2900) + result + 5200) )
        {
          ++v4;
        }
      }
      v9 = *(_DWORD *)(result + 4 * v4 + 2900);
      v10 = *(_WORD *)(a2 + 4 * v15);
      v11 = *(_WORD *)(a2 + 4 * v9);
      if ( v10 < v11 )
        break;
      if ( v10 == v11 )
      {
        v12 = v15;
        if ( *(_BYTE *)(v15 + result + 5200) <= *(_BYTE *)(v9 + result + 5200) )
          goto LABEL_13;
      }
      *(_DWORD *)(result + 4 * a3 + 2900) = v9;
      v13 = *(_DWORD *)(result + 5192);
      v14 = v4;
      v4 *= 2;
      a3 = v14;
      v5 = v4 < v13;
      if ( v4 > v13 )
      {
        *(_DWORD *)(result + 4 * v14 + 2900) = v15;
        return result;
      }
    }
    v12 = v15;
LABEL_13:
    *(_DWORD *)(result + 4 * a3 + 2900) = v12;
  }
  return result;
}
