// 函数 0x46fe80  sub_46FE80  size=0x82  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46FE80@<eax>(int a1@<esi>)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)(a1 + 68);
  v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 52) = 2 * *(_DWORD *)(a1 + 36);
  *(_WORD *)(v2 + 2 * v1 - 2) = 0;
  memset(*(void **)(a1 + 60), 0, 2 * *(_DWORD *)(a1 + 68) - 2);
  v3 = 6 * *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 120) = (unsigned __int16)word_4A50BA[v3];
  *(_DWORD *)(a1 + 132) = (unsigned __int16)word_4A50B8[v3];
  *(_DWORD *)(a1 + 136) = (unsigned __int16)word_4A50BC[v3];
  v4 = (unsigned __int16)word_4A50BE[v3];
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 116) = v4;
  *(_DWORD *)(a1 + 112) = 2;
  *(_DWORD *)(a1 + 88) = 2;
  return 2;
}
