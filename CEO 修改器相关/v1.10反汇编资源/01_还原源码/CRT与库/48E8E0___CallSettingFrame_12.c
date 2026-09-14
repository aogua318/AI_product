// 函数 0x48e8e0  __CallSettingFrame@12  size=0x4C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __stdcall _CallSettingFrame(int a1, int a2, int a3)
{
  void (*v3)(void); // eax
  int v4; // ecx

  v3 = (void (*)(void))_NLG_Notify1(a3);
  v3();
  v4 = a3;
  if ( a3 == 256 )
    v4 = 2;
  return _NLG_Notify1(v4);
}
