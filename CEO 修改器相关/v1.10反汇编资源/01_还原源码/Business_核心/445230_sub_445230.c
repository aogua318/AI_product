// 函数 0x445230  sub_445230  size=0x187  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_445230(int a1)
{
  int v1; // edi
  int *v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int result; // eax
  int v8; // ecx

  ++dword_8A8C1C;
  sub_444D70();
  v1 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
  v2 = (int *)(a1 + 296);
  v3 = *(_DWORD *)(a1 + 296);
  if ( *(__int16 *)(v1 + 464) - *(__int16 *)(v1 + 468) <= 0 )
  {
    sub_482060(v3);
  }
  else
  {
    v4 = sub_47E410(v3);
    v5 = *v2;
    if ( v4 )
    {
      sub_482FE0(v5);
    }
    else
    {
      switch ( *(_WORD *)(v5 + 14) )
      {
        case 2:
        case 0xC:
          sub_47E650(8);
          break;
        case 8:
          sub_47E650(10);
          break;
        case 0xA:
          sub_47E650(12);
          break;
        default:
          break;
      }
    }
  }
  v6 = *v2;
  if ( *(__int16 *)(v1 + 466) - *(__int16 *)(v1 + 470) <= 0 )
  {
    result = sub_482060(v6 + 576);
  }
  else
  {
    sub_482FE0(v6 + 576);
    if ( sub_47E410(*v2 + 576) )
    {
      result = sub_482FE0(*v2 + 576);
    }
    else
    {
      result = *v2;
      switch ( *(_WORD *)(*v2 + 590) )
      {
        case 3:
        case 0xD:
          result = sub_47E650(9);
          break;
        case 9:
          result = sub_47E650(11);
          break;
        case 0xB:
          result = sub_47E650(13);
          break;
        default:
          break;
      }
    }
  }
  if ( dword_4C2D34 == 24 && *(__int16 *)(v1 + 740) > 0 )
  {
    if ( *(int *)(v1 + 456) > 0 || (*(_BYTE *)(dword_8A8D50 + 6345) & 4) != 0 )
    {
      dword_4C2D34 = 25;
      v8 = *v2 + 6336;
    }
    else
    {
      v8 = *v2 + 6336;
      if ( (dword_8A8C1C & 2) != 0 )
        return sub_482060(v8);
    }
    return sub_482FE0(v8);
  }
  return result;
}
