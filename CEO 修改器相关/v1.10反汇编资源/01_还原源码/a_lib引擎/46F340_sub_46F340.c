// 函数 0x46f340  sub_46F340  size=0x60  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46F340(int this, void *Buffer, size_t ElementCount)
{
  int result; // eax
  int i; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // edx

  if ( *(_DWORD *)(this + 16) >= *(_DWORD *)(this + 12) + *(_DWORD *)(this + 8) )
    return 0;
  result = sub_46A320((FILE **)this, Buffer, ElementCount);
  for ( i = 0; i < result; ++i )
    *((_BYTE *)Buffer + i) = ~*((_BYTE *)Buffer + i);
  *(_DWORD *)(this + 16) += result;
  v6 = *(_DWORD *)(this + 12);
  v7 = *(_DWORD *)(this + 8);
  v8 = *(_DWORD *)(this + 16);
  if ( v8 > v7 + v6 )
  {
    *(_DWORD *)(this + 16) = v7 + v6;
    result += v6 + v7 - v8;
  }
  return result;
}
