// 函数 0x418ac0  sub_418AC0  size=0x953  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __fastcall sub_418AC0(int a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  char *v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  __int16 *v14; // esi
  __int16 *v15; // ecx
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+14h] [ebp-10h] BYREF
  int v21; // [esp+18h] [ebp-Ch] BYREF
  int v22; // [esp+1Ch] [ebp-8h] BYREF
  int v23; // [esp+20h] [ebp-4h] BYREF

  if ( dword_4D0AB0 )
    return;
  if ( dword_4B1010 != -1 )
    sub_483850(
      *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 2),
      *(__int16 *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 4),
      &v22,
      &v23);
  if ( dword_8A8C24 )
  {
    sub_484120(dword_8EED88, dword_8EED8C, &v20, &v21);
    if ( sub_418880(v20, v21) )
    {
      dword_8A8C24 = 0;
      sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
    }
    return;
  }
  if ( dword_4B119C != -1 )
  {
    if ( dword_4D0C68 )
    {
      v1 = sub_42A0F0(*(_DWORD *)dword_4D0C8C + 388 * dword_4B11A0);
      v20 = v1;
      if ( (double)v1 > dbl_4D10C0[23735 * dword_8703A0] )
      {
        sub_460EA0();
      }
      else
      {
        v2 = sub_43F590(dword_4B11A0, &v21);
        if ( v2 != -1 && sub_43E590(v1) )
        {
          v3 = *(_DWORD *)dword_4D0C8C + 388 * dword_4B11A0;
          v4 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
          v5 = *(__int16 *)(*(_DWORD *)dword_4D0C94 + 2 * ((v2 < 0 ? 0 : v2) + 34 * *(char *)(v3 + 78)) + 24);
          v6 = *(unsigned __int8 *)(116 * (v5 < 0 ? 0 : v5) + *(_DWORD *)dword_87081C + 1);
          v7 = dword_8703A0;
          if ( byte_4FF604[189880 * dword_8703A0 + v6] )
          {
LABEL_15:
            v8 = 189880 * v7;
            v9 = byte_4FF604[v8 + v6] == 0;
            v10 = &byte_4FF604[v8 + v6];
            if ( v9 )
            {
              *v10 = 1;
              v11 = sub_41EE50(v6);
              sub_42EDA0(-v11);
            }
            v12 = *(__int16 *)(v4 + 2 * v6 + 240);
            if ( v12 == -1 )
              v12 = sub_414D20(dword_4B1028, v6);
            sub_415D70((__int16 *)(dword_4CC8D0 + v12 * dword_4CC8BC), v21);
            v13 = sub_4277B0(
                    dword_4B1028,
                    dword_4B11A0,
                    v22,
                    v23,
                    *(unsigned __int8 *)(dword_4B119C * *(_DWORD *)(dword_4C2D38 + 160)
                                       + *(_DWORD *)(dword_4C2D38 + 180)
                                       + 8));
            if ( v13 != -1 )
            {
              v14 = (__int16 *)(dword_4D0C84 + v13 * dword_4D0C70);
              v20 = -*((_DWORD *)v14 + 3);
              sub_42EDA0((double)v20);
              v15 = v14;
              if ( *(_BYTE *)(388 * *v14 + *(_DWORD *)dword_4D0C8C + 78) != 2 )
              {
                sub_4273A0(v2);
                v15 = v14;
              }
              sub_427A10(v15);
              sub_435570(2, 0);
            }
            goto LABEL_24;
          }
          v20 = sub_42A0F0(v3);
          if ( sub_43E920(v6, (double)v20) )
          {
            v7 = dword_8703A0;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_24:
    if ( !byte_8EEC81 )
      sub_426AE0(dword_4B1028);
LABEL_56:
    if ( sub_461900(a1) )
      sub_487220(&unk_4C42A0);
    return;
  }
  a1 = dword_4B1020;
  if ( dword_4B1020 != -1 )
  {
    if ( dword_4C435C )
    {
      if ( byte_8EEC80 )
        goto LABEL_31;
      sub_40BE20(
        dword_4B1028,
        v22,
        v23,
        *(unsigned __int8 *)(dword_4B1020 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8),
        dword_8A1C20);
      sub_435570(2, 0);
    }
    if ( !byte_8EEC80 )
    {
LABEL_32:
      if ( sub_461900(a1) )
        sub_487220(&unk_4C42A0);
      dword_4CCA8C = v22;
      dword_4CCA78 = v23;
      return;
    }
LABEL_31:
    sub_4182E0(v23, v22);
    goto LABEL_32;
  }
  if ( dword_4B1104 != -1 )
  {
    if ( dword_4CC894 && sub_43E590(dword_4CCC38) )
    {
      if ( (double)dword_4CCC38 > dbl_4D10C0[23735 * dword_8703A0] )
      {
        sub_460EA0();
      }
      else
      {
        sub_413A40(
          dword_4B1028,
          v22,
          v23,
          *(unsigned __int8 *)(dword_4B1104 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8));
        sub_435570(2, 0);
        v20 = -dword_4CCC38;
        sub_42EDA0((double)-dword_4CCC38);
      }
    }
    if ( !byte_8EEC81 )
      sub_413DB0();
    goto LABEL_56;
  }
  if ( dword_4B32C0 != -1 )
  {
    if ( dword_87084C && sub_43E590(dword_4CCC34) )
    {
      if ( (double)dword_4CCC34 > dbl_4D10C0[23735 * dword_8703A0] )
      {
        sub_460EA0();
      }
      else
      {
        sub_433EB0(
          dword_4B1028,
          dword_8A1B14,
          v22,
          v23,
          *(unsigned __int8 *)(dword_4B32C0 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8));
        sub_435570(2, 0);
        v20 = -dword_4CCC34;
        sub_42EDA0((double)-dword_4CCC34);
      }
    }
    if ( !byte_8EEC81 )
      sub_434400(a1);
    goto LABEL_56;
  }
  a1 = dword_4B32B8;
  if ( dword_4B32B8 != -1 )
  {
    if ( dword_8703B4 )
    {
      sub_430520(
        dword_4B1028,
        v22,
        v23,
        *(unsigned __int8 *)(dword_4B32B8 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 8),
        dword_8A1C24);
      sub_435570(2, 0);
    }
    if ( !byte_8EEC81 )
      sub_430A50(dword_4B1028);
    goto LABEL_56;
  }
  dword_4B1010 = sub_4850F0(dword_8EED88, dword_8EED8C, 10, 0, 0);
  if ( dword_4B1198 != -1 )
  {
    dword_4B1198 = -1;
    sub_43C340(0);
  }
  if ( dword_4B101C != -1 )
  {
    sub_43AEE0(0);
    dword_4B101C = -1;
  }
  if ( dword_4B1100 != -1 )
  {
    sub_43B130(0);
    dword_4B1100 = -1;
  }
  if ( dword_4B32BC != -1 )
  {
    sub_43D660(0);
    dword_4B32BC = -1;
  }
  if ( dword_4B32B4 != -1 )
  {
    sub_43C9C0(0);
    dword_4B32B4 = -1;
  }
  if ( dword_4B32A0 != -1 )
  {
    sub_43C4D0(0);
    dword_4B32A0 = -1;
  }
  dword_4B1170 = -1;
  dword_4B32B0 = -1;
  if ( sub_483C00(dword_4B1010) == 10 )
  {
    v16 = dword_4C4398 + sub_483C30(dword_4B1010) * dword_4C4384;
    if ( *(_WORD *)(dword_4B1010 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180)) == 404 )
    {
      v17 = sub_483C30(*(_DWORD *)(v16 + 12));
      sub_444870(v17);
    }
    dword_4B1010 = *(_DWORD *)(v16 + 12);
  }
  switch ( sub_483C00(dword_4B1010) )
  {
    case 0:
      sub_4443B0();
      dword_4B1198 = sub_483C30(dword_4B1010);
      sub_43C340(1);
      sub_435570(
        *(char *)(388 * *(__int16 *)(dword_4B1198 * dword_4D0C70 + dword_4D0C84) + *(_DWORD *)dword_4D0C8C + 78) + 8,
        0);
      break;
    case 1:
      sub_4443B0();
      dword_4B32B0 = sub_483C30(dword_4B1010);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
        sub_4189A0();
      break;
    case 2:
      sub_4443B0();
      dword_4B1100 = sub_483C30(dword_4B1010);
      sub_43B130(1);
      sub_435570(1, 0);
      break;
    case 3:
      goto LABEL_82;
    case 4:
    case 5:
      sub_4443B0();
      v18 = sub_483C30(dword_4B1010);
      v19 = dword_4D0BAC + v18 * dword_4D0B98;
      dword_4B1170 = v18;
      if ( *(_BYTE *)(v19 + 3) == 2 )
      {
        dword_4B1010 = *(__int16 *)(dword_4C4364 * *(__int16 *)(v19 + 12) + dword_4C4378 + 8);
        dword_4B1170 = -1;
        sub_435570(62, 0);
LABEL_82:
        sub_4443B0();
        dword_4B101C = sub_483C30(dword_4B1010);
        sub_43AEE0(1);
        sub_435570(62, 0);
      }
      break;
    case 6:
    case 9:
      sub_4443B0();
      dword_4B32B4 = sub_483C30(dword_4B1010);
      sub_43C9C0(1);
      sub_435570(39, 0);
      break;
    case 7:
      sub_4443B0();
      dword_4B32BC = sub_483C30(dword_4B1010);
      sub_43D660(1);
      sub_435570(36, 0);
      break;
    case 8:
      sub_4443B0();
      dword_4B32A0 = sub_483C30(dword_4B1010);
      sub_43C4D0(1);
      break;
    default:
      return;
  }
}
