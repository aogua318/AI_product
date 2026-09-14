// 函数 0x482060  sub_482060  size=0x35  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_482060(int this)
{
  int *v1; // eax
  int *v2; // eax
  int *v3; // eax
  int *v4; // eax
  int *v5; // eax
  int *v6; // eax
  int *v7; // eax
  HWND result; // eax

  result = (HWND)(*(__int16 *)(this + 4) - 1);
  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v1 = sub_47E590((void *)this);
        result = sub_47C950(v1);
      }
      break;
    case 2:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v7 = sub_481220((__int16 *)this);
        result = sub_47C950(v7);
      }
      break;
    case 3:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v2 = sub_47EEA0((__int16 *)this);
        result = sub_47C950(v2);
      }
      break;
    case 4:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v3 = sub_47F430((__int16 *)this);
        result = sub_47C950(v3);
      }
      break;
    case 5:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v4 = sub_47F9F0((__int16 *)this);
        result = sub_47C950(v4);
      }
      break;
    case 6:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        *(_DWORD *)(this + 56) = -1;
        v5 = sub_47FFB0((__int16 *)this);
        result = sub_47C950(v5);
      }
      break;
    case 7:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v6 = sub_480990((__int16 *)this);
        result = sub_47C950(v6);
      }
      break;
    default:
      return result;
  }
  return result;
}
