// 函数 0x44b1a0  sub_44B1A0  size=0x1B2  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_44B1A0(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  result = a1;
  switch ( a2 )
  {
    case 0:
      sub_435570(1, 0);
      result = sub_47C930(v5, v4);
      break;
    case 5:
      sub_435570(1, 0);
      sub_456380();
      result = sub_47C930(v7, v6);
      break;
    case 6:
      sub_435570(1, 0);
      v8 = sub_44ADA0();
      if ( v8 == -1 )
        goto LABEL_11;
      sprintf(Buffer, "%d.sav", v8);
      sub_41D7B0(Buffer);
      result = sub_47C930(v12, v11);
      break;
    case 7:
      sub_435570(1, 0);
      result = sub_44B0F0();
      if ( result )
      {
        dword_4D0DB4 = 0;
LABEL_11:
        result = sub_47C930(v10, v9);
      }
      break;
    case 8:
      dword_4B1138 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 2340);
      sub_435550(100 * dword_4B1138 / 5);
      result = sub_41F740();
      break;
    case 9:
      dword_4B1134 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 2628);
      sub_435520(100 * dword_4B1134 / 5);
      sub_41F740();
      result = sub_435570(3, 0);
      break;
    case 10:
      sub_435570(3, 0);
      v3 = dword_4B1140[*(_DWORD *)(dword_8BD8C0 + 2916)];
      dword_4B113C[0] = *(_DWORD *)(dword_8BD8C0 + 2916);
      dword_4B1124 = v3;
      result = sub_41F740();
      break;
    default:
      return result;
  }
  return result;
}
