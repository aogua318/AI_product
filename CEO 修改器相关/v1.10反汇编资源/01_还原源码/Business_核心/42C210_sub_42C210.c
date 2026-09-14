// 函数 0x42c210  sub_42C210  size=0x77  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42C210(int this, int a2, int a3)
{
  int v3; // eax
  int v5; // esi

  v3 = word_4C70C0[106 * a2 + *(char *)(this + 20)];
  if ( a3 )
  {
    v3 = -50;
LABEL_8:
    v5 = *(_DWORD *)(this + 36);
    if ( v5 > 0 )
      v3 = v3 * (100 - v5) / 100;
    *(_DWORD *)(this + 36) = v3;
    return -1;
  }
  if ( v3 <= 0 )
  {
    if ( v3 >= 0 )
      return 0;
    goto LABEL_8;
  }
  *(_DWORD *)(this + 36) += v3;
  if ( *(int *)(this + 36) > 99 )
    *(_DWORD *)(this + 36) = 99;
  return 1;
}
