// 函数 0x48d841  ___DestructExceptionObject  size=0x55  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __DestructExceptionObject(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1 )
  {
    if ( *a1 == -529697949 )
    {
      v1 = a1[7];
      if ( v1 )
      {
        v2 = *(_DWORD *)(v1 + 4);
        if ( v2 )
          sub_488BAD(a1[6], v2);
      }
    }
  }
}
