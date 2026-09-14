// 函数 0x48e3a0  __mtterm  size=0x3D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_4B85E0 != -1 )
  {
    v2 = dword_4B85E0;
    v0 = (void (__stdcall *)(int))DecodePointer(dword_8F2EC8);
    v0(v2);
    dword_4B85E0 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}
