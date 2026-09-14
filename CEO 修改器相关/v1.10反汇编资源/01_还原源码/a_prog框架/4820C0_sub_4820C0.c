// 函数 0x4820c0  sub_4820C0  size=0x35  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_4820C0(int this)
{
  int *v1; // eax
  int *v2; // eax
  int *v3; // eax
  int *v4; // eax
  int *v5; // eax
  __int16 v6; // ax

  v6 = *(_WORD *)(this + 4) - 1;
  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
      LOBYTE(v6) = sub_47E970((unsigned __int8 *)this);
      break;
    case 2:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v5 = sub_481220((__int16 *)this);
        LOBYTE(v6) = (unsigned __int8)sub_47C950(v5);
      }
      break;
    case 3:
      LOBYTE(v6) = *(_BYTE *)(this + 9);
      if ( (v6 & 1) != 0 )
      {
        *(_BYTE *)(this + 9) = v6 & 0xF0;
        v1 = sub_47EEA0((__int16 *)this);
        LOBYTE(v6) = (unsigned __int8)sub_47C950(v1);
      }
      break;
    case 4:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v2 = sub_47F430((__int16 *)this);
        LOBYTE(v6) = (unsigned __int8)sub_47C950(v2);
      }
      break;
    case 5:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        v3 = sub_47F9F0((__int16 *)this);
        LOBYTE(v6) = (unsigned __int8)sub_47C950(v3);
      }
      break;
    case 6:
      if ( !*(_BYTE *)(this + 6) )
      {
        *(_BYTE *)(this + 6) = 1;
        *(_DWORD *)(this + 56) = -1;
        v4 = sub_47FFB0((__int16 *)this);
        LOBYTE(v6) = (unsigned __int8)sub_47C950(v4);
      }
      break;
    case 7:
      *(_BYTE *)(this + 17) &= ~1u;
      break;
    default:
      return v6;
  }
  return v6;
}
