// 函数 0x488b5a  _atol  size=0x16  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl atol(const char *String)
{
  return strtol(String, 0, 10);
}
