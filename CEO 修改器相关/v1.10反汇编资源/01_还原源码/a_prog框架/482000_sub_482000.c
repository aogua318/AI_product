// 函数 0x482000  sub_482000  size=0x35  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_482000(int this)
{
  _DWORD *v2; // edx
  __int16 v3; // cx
  char v4; // al
  int v5; // ecx
  char v6; // al
  int v7; // ecx
  int v8; // ecx
  int *v9; // eax

  LOWORD(v9) = *(_WORD *)(this + 4) - 1;
  switch ( *(_WORD *)(this + 4) )
  {
    case 1:
      LOBYTE(v9) = (unsigned __int8)sub_47E6F0((__int16 *)this);
      break;
    case 2:
      v9 = sub_481220((__int16 *)this);
      v2 = (_DWORD *)dword_8F2ABC;
      if ( *v9 <= *(_DWORD *)(dword_8F2ABC + 28)
        && v9[1] <= *(_DWORD *)(dword_8F2ABC + 32)
        && v9[2] >= *(_DWORD *)(dword_8F2ABC + 20) )
      {
        v9 = (int *)v9[3];
        if ( (int)v9 >= *(_DWORD *)(dword_8F2ABC + 24) )
        {
          v3 = *(_WORD *)(this + 32);
          if ( v3 != -1 )
          {
            sub_466CA0(
              (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v3),
              (_DWORD *)dword_8F2ABC,
              *(__int16 *)(this + 28) + *(__int16 *)(*(_DWORD *)this + 276),
              *(__int16 *)(this + 30) + *(__int16 *)(*(_DWORD *)this + 278));
            v2 = (_DWORD *)dword_8F2ABC;
          }
          v4 = *(_BYTE *)(this + 8);
          if ( (v4 & 8) != 0 && (v4 & 1) != 0 )
            v5 = *(__int16 *)(this + 44);
          else
            v5 = *(__int16 *)(this + 42);
          if ( v5 != -1 )
          {
            sub_466CA0(
              (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v5),
              v2,
              *(__int16 *)(this + 28) + *(__int16 *)(this + 54) + *(__int16 *)(*(_DWORD *)this + 276),
              *(__int16 *)(this + 30) + *(__int16 *)(this + 56) + *(__int16 *)(*(_DWORD *)this + 278));
            v2 = (_DWORD *)dword_8F2ABC;
          }
          v6 = *(_BYTE *)(this + 8);
          if ( (v6 & 0x10) != 0 && (v6 & 2) != 0 )
            v7 = *(__int16 *)(this + 48);
          else
            v7 = *(__int16 *)(this + 46);
          if ( v7 != -1 )
          {
            sub_466CA0(
              (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v7),
              v2,
              *(__int16 *)(this + 28) + *(__int16 *)(this + 58) + *(__int16 *)(*(_DWORD *)this + 276),
              *(__int16 *)(this + 30) + *(__int16 *)(this + 60) + *(__int16 *)(*(_DWORD *)this + 278));
            v2 = (_DWORD *)dword_8F2ABC;
          }
          LOBYTE(v9) = *(_BYTE *)(this + 8);
          if ( ((unsigned __int8)v9 & 0x20) != 0 && ((unsigned __int8)v9 & 4) != 0 )
            v8 = *(__int16 *)(this + 52);
          else
            v8 = *(__int16 *)(this + 50);
          if ( v8 != -1 )
            LOBYTE(v9) = sub_466CA0(
                           (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v8),
                           v2,
                           *(__int16 *)(this + 28) + *(__int16 *)(this + 62) + *(__int16 *)(*(_DWORD *)this + 276),
                           *(__int16 *)(this + 30) + *(__int16 *)(this + 64) + *(__int16 *)(*(_DWORD *)this + 278));
        }
      }
      break;
    case 3:
      LOBYTE(v9) = (unsigned __int8)sub_47F010(this);
      break;
    case 4:
      LOBYTE(v9) = (unsigned __int8)sub_47F700(this);
      break;
    case 5:
      LOBYTE(v9) = (unsigned __int8)sub_47FA30(this);
      break;
    case 6:
      LOBYTE(v9) = sub_480200((__int16 *)this);
      break;
    case 7:
      LOBYTE(v9) = (unsigned __int8)sub_480AB0(this);
      break;
    default:
      return (char)v9;
  }
  return (char)v9;
}
