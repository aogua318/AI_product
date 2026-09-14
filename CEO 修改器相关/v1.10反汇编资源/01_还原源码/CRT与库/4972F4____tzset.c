// 函数 0x4972f4  ___tzset  size=0x4F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __tzset()
{
  if ( !dword_8F3864 )
  {
    _lock(6);
    if ( !dword_8F3864 )
    {
      _tzset_nolock();
      ++dword_8F3864;
    }
    _unlock(6);
  }
}
