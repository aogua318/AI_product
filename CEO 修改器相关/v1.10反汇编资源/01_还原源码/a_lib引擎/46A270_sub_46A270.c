// 函数 0x46a270  sub_46A270  size=0x4C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A270(int this)
{
  FILE *v2; // eax
  int v3; // edi
  int v4; // ebx

  v2 = *(FILE **)this;
  if ( !*(_DWORD *)this )
    return 0;
  if ( *(_DWORD *)(this + 4) )
    return v2->_flag;
  v3 = ftell(v2);
  fseek(*(FILE **)this, 0, 2);
  v4 = ftell(*(FILE **)this);
  fseek(*(FILE **)this, v3, 0);
  return v4;
}
