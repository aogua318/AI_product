// 函数 0x488a30  __ftol2_sse  size=0x1C  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall _ftol2_sse@<eax>(double a1@<st0>)
{
  if ( dword_8F62C4 )
    return (int)a1;
  else
    return _ftol2(a1);
}
