// 函数 0x401000  sub_401000  size=0xC0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_401000(int a1)
{
  int v1; // edi
  int result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  __int16 *v7; // esi

  v1 = *(_DWORD *)dword_870814 + 72 * a1;
  result = 0;
  if ( *(_BYTE *)(v1 + 13) )
  {
    v3 = dword_4B9768;
    if ( dword_4B9768 > 0 )
    {
      do
      {
        if ( *(_DWORD *)(dword_4B976C + 4 * result) == a1 )
          break;
        ++result;
      }
      while ( result < dword_4B9768 );
    }
    if ( result == dword_4B9768 )
    {
      *(_DWORD *)(dword_4B976C + 4 * dword_4B9768) = a1;
      dword_4B9768 = v3 + 1;
    }
  }
  else
  {
    v4 = dword_4B9764;
    if ( dword_4B9764 > 0 )
    {
      do
      {
        if ( *(_DWORD *)(dword_4B9760 + 4 * result) == a1 )
          break;
        ++result;
      }
      while ( result < dword_4B9764 );
    }
    if ( result == dword_4B9764 )
    {
      *(_DWORD *)(dword_4B9760 + 4 * dword_4B9764) = a1;
      dword_4B9764 = v4 + 1;
    }
  }
  if ( *(_BYTE *)(v1 + 12) != 2 )
  {
    v5 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(v1 + 16);
    v6 = 4;
    v7 = (__int16 *)(v5 + 20);
    do
    {
      result = *v7;
      if ( result != -1 && !*((_DWORD *)dword_870824 + 28 * result + 4) )
        result = sub_401000(*v7);
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
