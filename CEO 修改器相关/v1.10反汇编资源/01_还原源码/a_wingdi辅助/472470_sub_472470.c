// 函数 0x472470  sub_472470  size=0x55  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_472470@<eax>(int result@<eax>)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // edx
  char v4; // bl

  v1 = *(_DWORD *)(result + 5812);
  if ( v1 > 8 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
    v2 = *(_DWORD *)(result + 20);
    v3 = *(_DWORD *)(result + 8);
    v4 = *(_BYTE *)(result + 5809);
LABEL_5:
    *(_BYTE *)(v2 + v3) = v4;
    ++*(_DWORD *)(result + 20);
    goto LABEL_6;
  }
  if ( v1 > 0 )
  {
    v2 = *(_DWORD *)(result + 8);
    v3 = *(_DWORD *)(result + 20);
    v4 = *(_BYTE *)(result + 5808);
    goto LABEL_5;
  }
LABEL_6:
  *(_WORD *)(result + 5808) = 0;
  *(_DWORD *)(result + 5812) = 0;
  return result;
}
