// 函数 0x483040  sub_483040  size=0x35  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_483040(int this)
{
  int *v1; // eax
  int *v2; // eax
  int *v3; // eax
  int *v4; // eax
  int *v6; // eax
  __int16 v7; // ax

  v7 = *(_WORD *)(this + 4) - 1;
  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
      LOBYTE(v7) = sub_482390((unsigned __int8 *)this);
      break;
    case 2:
      if ( *(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 0;
        v4 = sub_481220((__int16 *)this);
        LOBYTE(v7) = (unsigned __int8)sub_47C950(v4);
      }
      break;
    case 3:
      LOBYTE(v7) = *(_BYTE *)(this + 9);
      if ( (v7 & 1) == 0 )
      {
        *(_BYTE *)(this + 9) = v7 | 1;
        dword_8F2AB8 = 0;
        sub_4816C0(this);
        v6 = sub_47EEA0((__int16 *)this);
        LOBYTE(v7) = (unsigned __int8)sub_47C950(v6);
      }
      break;
    case 4:
      if ( *(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 0;
        v1 = sub_47F430((__int16 *)this);
        LOBYTE(v7) = (unsigned __int8)sub_47C950(v1);
      }
      break;
    case 5:
      if ( *(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 0;
        v2 = sub_47F9F0((__int16 *)this);
        LOBYTE(v7) = (unsigned __int8)sub_47C950(v2);
      }
      break;
    case 6:
      if ( *(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 0;
        v3 = sub_47FFB0((__int16 *)this);
        LOBYTE(v7) = (unsigned __int8)sub_47C950(v3);
      }
      break;
    case 7:
      *(_BYTE *)(this + 17) |= 1u;
      break;
    default:
      return v7;
  }
  return v7;
}
