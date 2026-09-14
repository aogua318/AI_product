// 函数 0x417c30  sub_417C30  size=0x172  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl sub_417C30(int a1)
{
  int v1; // esi
  char *v2; // eax
  int v3; // edx
  char v4; // cl
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp-4h] [ebp-10Ch]
  int v12; // [esp-4h] [ebp-10Ch]
  int v13; // [esp-4h] [ebp-10Ch]
  int v14; // [esp-4h] [ebp-10Ch]
  _BYTE v15[256]; // [esp+4h] [ebp-104h] BYREF

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v2 = (char *)sub_464140(dword_4D10F0[47470 * *(char *)(v1 + 224)], 4, 1);
  v3 = v15 - v2;
  do
  {
    v4 = *v2;
    v2[v3] = *v2;
    ++v2;
  }
  while ( v4 );
  if ( *(_WORD *)(v1 + 1622) == 1 )
  {
    v5 = dword_4C43DC + dword_4C43C8 * *(__int16 *)(v1 + 1620);
    switch ( *(_BYTE *)(v5 + 7) )
    {
      case 0:
        v12 = sub_40CD20((__int16 *)v5) + 33;
        v6 = sub_4646A0(1, v12);
        goto LABEL_10;
      case 1:
      case 2:
        v8 = sub_40CD20((__int16 *)v5);
        v14 = sub_4646A0(3, v8 + 33);
        sprintf((char *const)(v1 + 204), "%s%s", v15, v14);
        break;
      case 3:
      case 4:
        v7 = sub_40CD20((__int16 *)v5);
        v13 = sub_4646A0(2, v7 + 33);
        sprintf((char *const)(v1 + 204), "%s%s", v15, v13);
        break;
      case 5:
        v11 = sub_4646A0(0, *(__int16 *)(v5 + 4) + 35);
        sprintf((char *const)(v1 + 204), "%s%s", v15, v11);
        break;
      default:
        break;
    }
  }
  else
  {
    v6 = sub_4646A0(4, 34);
LABEL_10:
    sprintf((char *const)(v1 + 204), "%s%s", v15, v6);
  }
  v9 = 47470 * *(char *)(v1 + 224);
  ++dword_4D10F0[v9];
  return &dword_4D10F0[v9];
}
