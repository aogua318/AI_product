// 函数 0x47e310  sub_47E310  size=0x68  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __thiscall sub_47E310(int this, const char *a2)
{
  const char *v3; // eax
  int v4; // edx
  char v5; // cl
  __int16 result; // ax
  int v7; // eax
  int v8; // edx

  v3 = a2;
  v4 = this + 20 - (_DWORD)a2;
  do
  {
    v5 = *v3;
    v3[v4] = *v3;
    ++v3;
  }
  while ( v5 );
  sub_467AB0((int *)this, a2);
  result = *(_WORD *)(this + 280);
  *(_DWORD *)(this + 16) = this;
  if ( result != -1 )
  {
    v7 = sub_467680((_DWORD *)this, result);
    v8 = *(__int16 *)(this + 280);
    *(_WORD *)(this + 284) = *(_WORD *)(v7 + 4);
    result = *(_WORD *)(sub_467680(*(_DWORD **)(this + 16), v8) + 6);
    *(_WORD *)(this + 286) = result;
  }
  return result;
}
