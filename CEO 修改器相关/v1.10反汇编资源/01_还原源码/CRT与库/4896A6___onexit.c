// 函数 0x4896a6  __onexit  size=0x3C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock(Func);
  _unlockexit(4757203);
  return v2;
}
