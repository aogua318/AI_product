// 函数 0x474fb0  sub_474FB0  size=0x3E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_474FB0(_DWORD *this)
{
  int v1; // esi
  int v2; // eax

  v1 = *(this + 1);
  v2 = *(_DWORD *)(v1 + 12);
  *(this + 1) = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 16) = 0;
  }
  else
  {
    *this = 0;
    *(this + 1) = 0;
  }
  free(*(void **)v1);
  free((void *)v1);
}
