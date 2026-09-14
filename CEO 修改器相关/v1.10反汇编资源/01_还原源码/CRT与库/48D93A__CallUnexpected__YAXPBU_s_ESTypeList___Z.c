// 函数 0x48d93a  ?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z  size=0x28  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn CallUnexpected()
{
  if ( *(_DWORD *)(_getptd() + 148) )
    _inconsistency();
  unexpected();
}
