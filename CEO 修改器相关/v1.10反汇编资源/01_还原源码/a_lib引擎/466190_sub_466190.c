// 函数 0x466190  sub_466190  size=0x13  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

Concurrency::details::_ReaderWriterLock *__thiscall sub_466190(Concurrency::details::_ReaderWriterLock *this)
{
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock(this);
  *((_DWORD *)this + 3) = 0;
  return this;
}
