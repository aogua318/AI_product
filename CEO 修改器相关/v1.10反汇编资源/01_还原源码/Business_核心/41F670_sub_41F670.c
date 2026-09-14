// 函数 0x41f670  sub_41F670  size=0xD0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_41F670()
{
  int result; // eax
  int v1; // edx
  int v2; // esi
  _DWORD *v3; // ecx
  int v4; // [esp+0h] [ebp-4h]

  result = 0;
  dword_4D0464 = 0;
  if ( dword_4C5DD8 > 0 )
  {
    v1 = dword_4C5DEC;
    v2 = *(_DWORD *)dword_4C5DF4 + 5964;
    v4 = dword_4C5DD8;
    do
    {
      if ( v1 > 0 )
      {
        v3 = (_DWORD *)v2;
        do
        {
          dword_4D0464 = *(v3 - 1) * *(v3 - 1491) + result;
          dword_4D0464 += *v3 * *(v3 - 1490);
          dword_4D0464 += v3[1] * *(v3 - 1489);
          result = v3[2] * *(v3 - 1488) + dword_4D0464;
          v3 += 2302;
          --v1;
          dword_4D0464 = result;
        }
        while ( v1 );
        v1 = dword_4C5DEC;
      }
      v2 += 9208 * dword_4C5DEC;
      --v4;
    }
    while ( v4 );
  }
  if ( dword_4D0478 )
  {
    result /= dword_4D0478;
    dword_4D0464 = result;
  }
  else
  {
    dword_4D0464 = 20;
  }
  return result;
}
