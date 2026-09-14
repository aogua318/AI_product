// 函数 0x433170  sub_433170  size=0x32  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_433170(int this, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = *(char *)(this + 10);
  result = a2;
  --*(_WORD *)(this + 8);
  ++*(_WORD *)(this + 6);
  if ( v2 < a2 )
  {
    *(_BYTE *)(this + 10) = a2;
    result = dword_4CD11C;
  }
  *(_DWORD *)(this + 96) = dword_4CD11C;
  return result;
}
