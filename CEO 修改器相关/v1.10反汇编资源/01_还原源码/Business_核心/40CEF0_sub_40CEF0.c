// 函数 0x40cef0  sub_40CEF0  size=0x3D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40CEF0(int this)
{
  __int16 v1; // ax

  v1 = *(_WORD *)(this + 4);
  if ( v1 == -1 )
    return 0;
  else
    return (int)((double)dword_4D0AB4[v1]
               * (double)*(int *)(this + 8)
               * (double)(*(unsigned __int8 *)(this + 6) + 100)
               / 150.0);
}
