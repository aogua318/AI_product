// 函数 0x48974e  __init_pointers  size=0x33  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int _init_pointers()
{
  int v0; // esi

  v0 = _encoded_null();
  sub_49130F(v0);
  sub_48FC01(v0);
  sub_491300(v0);
  sub_4912F1(v0);
  _initp_misc_winsig(v0);
  return _initp_eh_hooks(v0);
}
