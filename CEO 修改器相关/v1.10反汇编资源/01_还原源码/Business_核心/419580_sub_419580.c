// 函数 0x419580  sub_419580  size=0x112  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_419580()
{
  int v0; // eax
  int v1; // esi
  int result; // eax
  bool v3; // cc

  v0 = sub_4850F0(dword_8EED88, dword_8EED8C, 10, 0, 0);
  v1 = v0;
  if ( v0 == -1 )
    return sub_47CFC0(dword_4D0DE4, dword_4D0DE4);
  dword_4CC8DC = sub_483C00(v0);
  result = sub_483C30(v1);
  dword_4CCA7C = result;
  switch ( dword_4CC8DC )
  {
    case 0:
      if ( dword_8A8C24 == 1 )
      {
        v3 = *(_BYTE *)(result * dword_4D0C70 + dword_4D0C84 + 22) < 20;
        goto LABEL_13;
      }
      if ( dword_8A8C24 == 2 )
      {
        v3 = *(_BYTE *)(result * dword_4D0C70 + dword_4D0C84 + 23) < 20;
        goto LABEL_13;
      }
      break;
    case 6:
    case 9:
      if ( dword_8A8C24 == 2 )
      {
        result = sub_431030(dword_8703D0 + result * dword_8703BC);
        v3 = result < 4;
LABEL_13:
        if ( v3 )
          goto LABEL_14;
      }
      break;
    case 7:
      if ( dword_8A8C24 == 2 && *(_WORD *)(result * dword_870854 + dword_870868 + 12) == 0xFFFF )
LABEL_14:
        result = sub_47C640(&dword_4D0DE4);
      break;
    default:
      return result;
  }
  return result;
}
