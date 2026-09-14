// 函数 0x43d190  sub_43D190  size=0x3AC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43D190(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  __int16 v4; // ax
  int v5; // edi
  char *v6; // ebx
  int v7; // esi
  char *v8; // eax
  int v9; // edx
  char v10; // cl
  int v11; // esi
  char *v12; // ebx
  int v13; // edi
  char *v14; // eax
  int v15; // edx
  char v16; // cl
  int v17; // esi
  int v18; // esi
  int v19; // [esp+0h] [ebp-4h]

  result = dword_870868 + dword_4B32BC * dword_870854;
  v19 = result;
  switch ( a2 )
  {
    case -2:
      v3 = dword_8A1B00 + 10368;
      goto LABEL_30;
    case 23:
      sub_435570(1, 0);
      if ( *(_BYTE *)(dword_8A1B00 + 10374) && *(_BYTE *)(dword_8A1B00 + 10950) )
      {
        result = sub_434430(dword_4B32BC, (int)dword_8A1330);
        dword_8A1328 = result;
        if ( result > 0 )
        {
          if ( result > 10 )
          {
            sub_482FE0(dword_8A1B00 + 10368);
            sub_482FE0(dword_8A1B00 + 10080);
            sub_482FE0(dword_8A1B00 + 10656);
            v11 = 0;
            if ( dword_8A1328 > 0 )
            {
              v12 = (char *)&unk_8A14D8;
              do
              {
                v13 = dword_8A1330[v11];
                v14 = (char *)(*(_DWORD *)dword_870814 + 72 * v13);
                v15 = v12 - v14;
                do
                {
                  v16 = *v14;
                  v14[v15] = *v14;
                  ++v14;
                }
                while ( v16 );
                if ( v13 == *(__int16 *)(v19 + 8) )
                  a2 = v11;
                ++v11;
                v12 += 12;
              }
              while ( v11 < dword_8A1328 );
            }
            sub_481AC0(&unk_8A14D8, 12, dword_8A1328, 0);
            sub_4801E0(a2);
            return sub_47ECC0(dword_8A1328 - 9);
          }
          else
          {
            sub_482FE0(dword_8A1B00 + 10944);
            v5 = 0;
            if ( dword_8A1328 > 0 )
            {
              v6 = (char *)&unk_8A14D8;
              do
              {
                v7 = dword_8A1330[v5];
                v8 = (char *)(*(_DWORD *)dword_870814 + 72 * v7);
                v9 = v6 - v8;
                do
                {
                  v10 = *v8;
                  v8[v9] = *v8;
                  ++v8;
                }
                while ( v10 );
                if ( v7 == *(__int16 *)(v19 + 8) )
                  a2 = v5;
                ++v5;
                v6 += 12;
              }
              while ( v5 < dword_8A1328 );
            }
            sub_481AC0(&unk_8A14D8, 12, dword_8A1328, 0);
            sub_481A70(dword_8A1328);
            sub_4801E0(a2);
            return sub_482120(
                     *(__int16 *)(dword_8A1B00 + 10954),
                     *(__int16 *)(dword_8A1B00 + 6636) - 18 * dword_8A1328 - 10);
          }
        }
      }
      else
      {
        v3 = dword_8A1B00 + 10368;
LABEL_30:
        sub_482060(v3);
        sub_482060(dword_8A1B00 + 10944);
        sub_482060(dword_8A1B00 + 10080);
        return sub_482060(dword_8A1B00 + 10656);
      }
      return result;
    case 30:
      if ( dword_4B32BC != -1 )
      {
        result = sub_43B330(dword_4CCC34 / 2);
        if ( result )
        {
          sub_434210(dword_4B32BC);
          return sub_435570(5, 0);
        }
      }
      return result;
    case 32:
      v4 = *(_WORD *)(result + 12);
      if ( v4 == -1 )
        goto LABEL_33;
      sub_42BF60(v4);
      result = sub_43CAB0();
      break;
    case 36:
      v17 = *(_DWORD *)(dword_8A1B00 + 10420);
      *(_WORD *)(result + 8) = dword_8A1330[v17];
      sub_482060(dword_8A1B00 + 10368);
      sub_482060(dword_8A1B00 + 10080);
      sub_482060(dword_8A1B00 + 10656);
      sub_47FF50((char *)&unk_8A14D8 + 12 * v17);
      goto LABEL_33;
    case 38:
      v18 = *(_DWORD *)(dword_8A1B00 + 10996);
      *(_WORD *)(result + 8) = dword_8A1330[v18];
      sub_482060(dword_8A1B00 + 10944);
      sub_47FF50((char *)&unk_8A14D8 + 12 * v18);
LABEL_33:
      result = sub_43CAB0();
      break;
    default:
      return result;
  }
  return result;
}
