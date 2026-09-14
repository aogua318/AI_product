// 函数 0x46fa90  sub_46FA90  size=0x4F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46FA90@<eax>(int a1@<eax>)
{
  int result; // eax
  size_t v3; // edi
  int v4; // eax
  _DWORD *v5; // esi

  result = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD *)(result + 20);
  if ( v3 > *(_DWORD *)(a1 + 16) )
    v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    memcpy(*(void **)(a1 + 12), *(const void **)(result + 16), v3);
    v4 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 12) += v3;
    *(_DWORD *)(v4 + 16) += v3;
    *(_DWORD *)(a1 + 20) += v3;
    *(_DWORD *)(a1 + 16) -= v3;
    result = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(result + 20) -= v3;
    v5 = *(_DWORD **)(a1 + 28);
    if ( !v5[5] )
      v5[4] = v5[2];
  }
  return result;
}
