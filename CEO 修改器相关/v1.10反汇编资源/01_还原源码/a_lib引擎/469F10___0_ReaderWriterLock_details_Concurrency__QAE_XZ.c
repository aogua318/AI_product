// 函数 0x469f10  ??0_ReaderWriterLock@details@Concurrency@@QAE@XZ  size=0x10  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

Concurrency::details::_ReaderWriterLock *__thiscall Concurrency::details::_ReaderWriterLock::_ReaderWriterLock(
        Concurrency::details::_ReaderWriterLock *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  return this;
}
