// 函数 0x43bf90  sub_43BF90  size=0x240  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43BF90(int a1, int a2)
{
  __int16 *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // esi
  long double v6; // st7
  int v7; // eax

  v2 = (__int16 *)(dword_4D0C84 + dword_4B1198 * dword_4D0C70);
  result = a2 + 2;
  switch ( a2 )
  {
    case -2:
      result = sub_482060(dword_8A10A0 + 16704);
      dword_8EED90 = 0;
      return result;
    case 23:
      if ( !dword_8A0F68 )
        return sub_4830A0(&unk_8A0E48);
      sub_482F10(724, 270);
      return sub_4830C0(&unk_8A0E48);
    case 29:
      result = sub_435570(1, 0);
      if ( *(_BYTE *)(388 * *v2 + *(_DWORD *)dword_4D0C8C + 78) != 2 )
      {
        if ( *(_BYTE *)(dword_8A10A0 + 16710) )
        {
          sub_43BE50();
          return sub_482FE0(dword_8A10A0 + 16704);
        }
        else
        {
          return sub_482060(dword_8A10A0 + 16704);
        }
      }
      return result;
    case 55:
      sub_435570(5, 0);
      v7 = sub_426490(v2);
      result = sub_43B330(v7);
      if ( result )
      {
        sub_4265C0(v2);
        return sub_4266F0(dword_4B1198);
      }
      return result;
    case 56:
      sub_435570(5, 0);
      result = sub_43B4B0();
      if ( result )
      {
        sub_427A30((int)v2);
        return sub_43B560();
      }
      return result;
    case 57:
      sub_435570(1, 0);
      sub_427A10((int)v2);
      return sub_43B560();
    case 58:
      v4 = *(_DWORD *)(dword_8A10A0 + 16756);
      v5 = *(unsigned __int8 *)(116
                              * *(__int16 *)(*(_DWORD *)dword_4D0C94
                                           + 2
                                           * (dword_8A0DF0[v4] + 34
                                                               * *(char *)(388 * *v2 + *(_DWORD *)dword_4D0C8C + 78))
                                           + 24)
                              + *(_DWORD *)dword_87081C
                              + 1);
      if ( byte_4FF604[189880 * dword_8703A0 + v5] )
        goto LABEL_7;
      result = sub_43E920(v5, 0.0);
      if ( result )
      {
        if ( !byte_4FF604[189880 * dword_8703A0 + v5] )
        {
          byte_4FF604[189880 * dword_8703A0 + v5] = 1;
          v6 = sub_41EE50(v5);
          sub_42EDA0((char *)&unk_4D10B8 + 189880 * dword_8703A0, -v6);
        }
LABEL_7:
        sub_4273A0(v2, dword_8A0DF0[v4]);
        sub_482060(dword_8A10A0 + 16704);
        result = sub_43B560();
        dword_8EED90 = 0;
      }
      return result;
    default:
      return result;
  }
}
