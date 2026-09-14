// 函数 0x40f100  sub_40F100  size=0xF9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40F100(int a1)
{
  __int16 *v1; // esi
  int v2; // ecx
  __int16 v3; // ax
  __int16 v4; // cx
  int v5; // ecx
  int v6; // ecx

  v1 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  v2 = *(_DWORD *)dword_4C4434 + 72 * *v1;
  if ( *(_WORD *)(v2 + 32) == 2 )
    return 0;
  v3 = v1[2];
  if ( v3 == -1 )
  {
    if ( *(_WORD *)(v2 + 2) != 50 )
    {
      if ( *(_WORD *)(v2 + 2) == 52 )
      {
        *v1 = 34;
      }
      else if ( *(_WORD *)(v2 + 2) == 54 )
      {
        *v1 = 35;
      }
      goto LABEL_16;
    }
    v4 = 33;
  }
  else
  {
    v5 = *(__int16 *)(v2 + 2) - 50;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 == 2 )
          *v1 = 3 * v3 + 38;
      }
      else
      {
        *v1 = 3 * v3 + 37;
      }
      goto LABEL_16;
    }
    v4 = 3 * v3 + 36;
  }
  *v1 = v4;
LABEL_16:
  sub_486530(
    *((_DWORD *)v1 + 20),
    *(__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *v1),
    word_4D10BA[94940 * *((char *)v1 + 2)],
    0,
    0,
    0);
  if ( *((_BYTE *)v1 + 3) == 3 )
    memset(v1 + 8, 0, 0x3Cu);
  *((_BYTE *)v1 + 3) = 1;
  *((_DWORD *)v1 + 3) = dword_4CD11C;
  return 1;
}
