// 函数 0x4916fa  _CPtoLCID  size=0x2F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall CPtoLCID@<eax>(int a1@<eax>)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = a1 - 932;
  if ( !v1 )
    return 1041;
  v2 = v1 - 4;
  if ( !v2 )
    return 2052;
  v3 = v2 - 13;
  if ( !v3 )
    return 1042;
  if ( v3 == 1 )
    return 1028;
  return 0;
}
