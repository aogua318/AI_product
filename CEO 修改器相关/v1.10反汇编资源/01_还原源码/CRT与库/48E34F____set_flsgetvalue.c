// 函数 0x48e34f  ___set_flsgetvalue  size=0x34  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__set_flsgetvalue()
{
  void *Value; // esi

  Value = TlsGetValue(dwTlsIndex);
  if ( !Value )
  {
    Value = DecodePointer(lpTlsValue);
    TlsSetValue(dwTlsIndex, Value);
  }
  return Value;
}
