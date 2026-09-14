// 函数 0x438e20  sub_438E20  size=0x19C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_438E20(int a1, int a2, int a3)
{
  int result; // eax
  char v4; // cl
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi

  result = dword_4C43DC + a1 * dword_4C43C8;
  v4 = *(_BYTE *)(result + 3);
  if ( v4 >= 4 && v4 <= 6 )
  {
    switch ( a2 )
    {
      case 2:
        v7 = a3;
        if ( a3 > ((*(_DWORD *)(result + 32) >> 26) & 0xF) )
          v7 = (*(_DWORD *)(result + 32) >> 26) & 0xF;
        *(_DWORD *)(result + 32) ^= (*(_DWORD *)(result + 32)
                                   ^ ((*(_DWORD *)(result + 32) & 0xFC000000) - (v7 << 26)))
                                  & 0x3C000000;
        break;
      case 8:
        v5 = a3;
        if ( a3 > ((*(_DWORD *)(result + 16) >> 26) & 0xF) )
          v5 = (*(_DWORD *)(result + 16) >> 26) & 0xF;
        *(_DWORD *)(result + 16) ^= (*(_DWORD *)(result + 16)
                                   ^ ((*(_DWORD *)(result + 16) & 0xFC000000) - (v5 << 26)))
                                  & 0x3C000000;
        break;
      case 9:
        v6 = a3;
        if ( a3 > ((*(_DWORD *)(result + 24) >> 26) & 0xF) )
          v6 = (*(_DWORD *)(result + 24) >> 26) & 0xF;
        *(_DWORD *)(result + 24) ^= (*(_DWORD *)(result + 24)
                                   ^ ((*(_DWORD *)(result + 24) & 0xFC000000) - (v6 << 26)))
                                  & 0x3C000000;
        break;
      case 12:
        v11 = a3;
        if ( a3 > ((*(_DWORD *)(result + 64) >> 26) & 0xF) )
          v11 = (*(_DWORD *)(result + 64) >> 26) & 0xF;
        *(_DWORD *)(result + 64) ^= (*(_DWORD *)(result + 64)
                                   ^ ((*(_DWORD *)(result + 64) & 0xFC000000) - (v11 << 26)))
                                  & 0x3C000000;
        break;
      case 14:
        v9 = a3;
        if ( a3 > ((*(_DWORD *)(result + 48) >> 26) & 0xF) )
          v9 = (*(_DWORD *)(result + 48) >> 26) & 0xF;
        *(_DWORD *)(result + 48) ^= (*(_DWORD *)(result + 48)
                                   ^ ((*(_DWORD *)(result + 48) & 0xFC000000) - (v9 << 26)))
                                  & 0x3C000000;
        break;
      case 15:
        v8 = a3;
        if ( a3 > ((*(_DWORD *)(result + 40) >> 26) & 0xF) )
          v8 = (*(_DWORD *)(result + 40) >> 26) & 0xF;
        *(_DWORD *)(result + 40) ^= (*(_DWORD *)(result + 40)
                                   ^ ((*(_DWORD *)(result + 40) & 0xFC000000) - (v8 << 26)))
                                  & 0x3C000000;
        break;
      case 29:
        v10 = a3;
        if ( a3 > ((*(_DWORD *)(result + 56) >> 26) & 0xF) )
          v10 = (*(_DWORD *)(result + 56) >> 26) & 0xF;
        *(_DWORD *)(result + 56) ^= (*(_DWORD *)(result + 56)
                                   ^ ((*(_DWORD *)(result + 56) & 0xFC000000) - (v10 << 26)))
                                  & 0x3C000000;
        break;
      default:
        return result;
    }
  }
  return result;
}
