// 函数 0x412130  sub_412130  size=0x87  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_412130()
{
  int v0; // edx
  int v1; // esi
  int i; // edi
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  if ( dword_4C5DD8 > 0 )
  {
    v0 = dword_870818;
    v1 = dword_4C5DEC;
    do
    {
      for ( i = 0; i < v1; ++i )
      {
        v3 = 0;
        if ( v0 > 0 )
        {
          v4 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (i + v5 * v1) + 5536);
          do
          {
            *(v4 - 106) = 0;
            *v4 = 0;
            v0 = dword_870818;
            ++v3;
            ++v4;
          }
          while ( v3 < dword_870818 );
          v1 = dword_4C5DEC;
        }
      }
      ++v5;
    }
    while ( v5 < dword_4C5DD8 );
  }
}
