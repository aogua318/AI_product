// 函数 0x43fa30  sub_43FA30  size=0x6D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43FA30(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  sub_481500(*(_DWORD *)(dword_8A5F50 + 2032) - a2);
  result = dword_4B37C8 - 1;
  switch ( dword_4B37C8 )
  {
    case 1:
      if ( dword_4B37CC == -1 )
      {
        result = sub_43FA20();
        if ( dword_8A743C != result )
        {
          dword_8A743C = result;
          v6 = sub_464D00(628, 250, 786, 550);
          result = sub_47C950(v6);
        }
      }
      break;
    case 2:
      if ( dword_4B37CC == -1 )
      {
        result = sub_43FA20();
        if ( dword_8A7154 != result )
        {
          dword_8A7154 = result;
          v5 = sub_464D00(628, 250, 786, 550);
          result = sub_47C950(v5);
        }
      }
      break;
    case 3:
      if ( dword_4B37CC == -1 )
      {
        result = sub_43FA20();
        if ( dword_8A6224 != result )
        {
          dword_8A6224 = result;
          v3 = sub_464D00(628, 250, 786, 550);
          result = sub_47C950(v3);
        }
      }
      break;
    case 4:
      if ( dword_4B37CC == -1 )
      {
        result = sub_43FA20();
        if ( dword_8A6E6C != result )
        {
          dword_8A6E6C = result;
          v4 = sub_464D00(628, 250, 786, 550);
          result = sub_47C950(v4);
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
