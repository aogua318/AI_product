// 函数 0x427700  sub_427700  size=0xB0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_427700()
{
  int v0; // ebx
  __int16 *v1; // esi
  int i; // [esp+4h] [ebp-4h]

  v0 = 0;
  for ( i = 0; v0 < dword_4D0C74; ++v0 )
  {
    if ( sub_464E90(v0) )
    {
      v1 = (__int16 *)(dword_4D0C84 + v0 * dword_4D0C70);
      if ( !dword_4CD13C || *(char *)(dword_4CCA98 * v1[1] + dword_4CCAAC + 224) >= 7 )
      {
        memcpy_0(v1 + 111, v1 + 110, 0xAu);
        v1[110] = v1[108];
        v1[108] = 0;
        if ( ++i >= dword_4D0C7C )
          break;
      }
    }
  }
}
