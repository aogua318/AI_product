// 函数 0x48e653  __freeptd  size=0x6E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_4B85E0 != -1 )
  {
    if ( !Block && TlsGetValue(dwTlsIndex) )
    {
      v4 = dword_4B85E0;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_4B85E0;
    v2 = (void (__stdcall *)(int, _DWORD))DecodePointer(dword_8F2EC4);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, 0);
  return result;
}
