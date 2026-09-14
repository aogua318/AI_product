// 函数 0x404800  sub_404800  size=0xD0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_404800()
{
  int v0; // edi
  int result; // eax
  int v2; // ecx
  int v3; // ebx
  char *v4; // ecx

  v0 = 0;
  result = 0;
  if ( dword_870818 > 0 )
  {
    v2 = 0;
    do
    {
      *(_DWORD *)((char *)dword_870824 + v2 + 16) = 0;
      ++result;
      v2 += 112;
    }
    while ( result < dword_870818 );
  }
  v3 = 0;
  if ( dword_4CC8C0 > 0 )
  {
    do
    {
      result = sub_464E90(v0);
      if ( result )
      {
        v4 = (char *)(dword_4CC8D0 + v0 * dword_4CC8BC);
        if ( !dword_4D0B68
          || (result = dword_4CCA98 * *((__int16 *)v4 + 1), *(char *)(result + dword_4CCAAC + 224) >= 7) )
        {
          if ( v4[10] != 2 )
          {
            result = 3 * (*((__int16 *)v4 + 15) + *((__int16 *)v4 + 16)) / 4;
            *((_DWORD *)dword_870824 + 28 * *v4 + 4) += *((__int16 *)v4 + 14) - result;
          }
        }
        if ( ++v3 >= dword_4CC8C8 )
          break;
      }
      ++v0;
    }
    while ( v0 < dword_4CC8C0 );
  }
  return result;
}
