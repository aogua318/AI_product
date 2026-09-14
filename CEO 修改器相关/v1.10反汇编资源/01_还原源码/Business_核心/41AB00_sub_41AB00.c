// 函数 0x41ab00  sub_41AB00  size=0x1FD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41AB00(__int16 *this, int a2)
{
  int v2; // eax
  __int16 *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v8 = *(_DWORD *)dword_870814 + 72 * a2;
  v2 = *(this + 376);
  v9 = 0;
  if ( v2 == -1 )
    return 0;
  do
  {
    v3 = (__int16 *)(dword_4D0C84 + v2 * dword_4D0C70);
    if ( v3[65] == -1 )
    {
      LOBYTE(v4) = *((_BYTE *)v3 + 128);
      if ( (_BYTE)v4 != 0xFF )
      {
        v5 = *(_DWORD *)dword_4D0C8C + 388 * *v3;
        v4 = (char)v4;
        v6 = *(_DWORD *)dword_87081C
           + 116 * *(__int16 *)(*(_DWORD *)dword_4D0C94 + 2 * ((char)v4 + 34 * *(char *)(v5 + 78)) + 24);
        if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v6 + 1) + 12) != 2 )
        {
          if ( *(__int16 *)(v6 + 20) == a2 && v3[1] == dword_4B1028 )
          {
            v9 += ((2 * *(_DWORD *)(v6 + 28) * *(__int16 *)(v5 + 2 * (char)v4 + 140) - *((_DWORD *)v3 + 33)) / 100
                 + *(_DWORD *)(v8 + 24)
                 - 1)
                / *(_DWORD *)(v8 + 24);
            v4 = (char)v4;
          }
          if ( *(__int16 *)(v6 + 22) == a2 && v3[1] == dword_4B1028 )
          {
            v9 += ((2 * *(_DWORD *)(v6 + 32) * *(__int16 *)(v5 + 2 * v4 + 140) - *((_DWORD *)v3 + 34)) / 100
                 + *(_DWORD *)(v8 + 24)
                 - 1)
                / *(_DWORD *)(v8 + 24);
            v4 = (char)v4;
          }
          if ( *(__int16 *)(v6 + 24) == a2 && v3[1] == dword_4B1028 )
          {
            v9 += ((2 * *(_DWORD *)(v6 + 36) * *(__int16 *)(v5 + 2 * v4 + 140) - *((_DWORD *)v3 + 35)) / 100
                 + *(_DWORD *)(v8 + 24)
                 - 1)
                / *(_DWORD *)(v8 + 24);
            v4 = (char)v4;
          }
          if ( *(__int16 *)(v6 + 26) == a2 && v3[1] == dword_4B1028 )
            v9 += ((2 * *(_DWORD *)(v6 + 40) * *(__int16 *)(v5 + 2 * v4 + 140) - *((_DWORD *)v3 + 36)) / 100
                 + *(_DWORD *)(v8 + 24)
                 - 1)
                / *(_DWORD *)(v8 + 24);
        }
      }
    }
    v2 = v3[3];
  }
  while ( v2 != -1 );
  return v9;
}
