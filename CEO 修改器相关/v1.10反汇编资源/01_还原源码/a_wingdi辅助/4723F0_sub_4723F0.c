// 函数 0x4723f0  sub_4723F0  size=0x71  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_4723F0@<eax>(int result@<eax>)
{
  int v1; // ecx
  __int16 v2; // dx

  v1 = *(_DWORD *)(result + 5812);
  if ( v1 == 16 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5808);
    *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5809);
    ++*(_DWORD *)(result + 20);
    *(_WORD *)(result + 5808) = 0;
    *(_DWORD *)(result + 5812) = 0;
  }
  else if ( v1 >= 8 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 20)) = *(_BYTE *)(result + 5808);
    v2 = *(unsigned __int8 *)(result + 5809);
    ++*(_DWORD *)(result + 20);
    *(_DWORD *)(result + 5812) -= 8;
    *(_WORD *)(result + 5808) = v2;
  }
  return result;
}
