// 函数 0x44a690  sub_44A690  size=0x10B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_44A690(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  _DWORD v4[7]; // [esp+0h] [ebp-24h] BYREF
  int v5; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h]

  memset(v4, 0, sizeof(v4));
  v5 = 0;
  v6 = 0;
  switch ( a2 )
  {
    case 0:
      sub_435570(1, 0);
      sub_47C930(v3, v2);
      break;
    case 1:
      sub_435570(1, 0);
      if ( dword_8B72BC )
      {
        sub_47CCD0(&unk_8B8A70);
        dword_8B72BC = 0;
      }
      else
      {
        v4[0] = sub_449EC0;
        BYTE2(v5) = 1;
        sub_408FC0((int)&unk_8B8A70, (int)v4);
        dword_8B72BC = 1;
      }
      break;
    case 6:
      sub_435570(1, 0);
      sub_44A120(dword_8B6B20[*(_DWORD *)(dword_8B8CC8 + 1780)], dword_8B72B4);
      sub_449A80();
      break;
    case 11:
      sub_435570(1, 0);
      sub_449BE0(dword_8B72B0);
      break;
    case 34:
    case 35:
    case 36:
    case 37:
      sub_44A670();
      break;
    default:
      return;
  }
}
