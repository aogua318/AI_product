// 函数 0x4587b0  sub_4587B0  size=0x487  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__cdecl sub_4587B0(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  unsigned __int8 *v4; // ecx
  unsigned int v5; // edx
  int v6; // eax
  _BYTE *result; // eax
  int v8; // ecx

  switch ( a2 )
  {
    case 40:
      sub_435570(1, 0);
      if ( sub_47CC90(&unk_8C6060) )
      {
        sub_47CCD0(&unk_8C6060);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C6060, sub_457EE0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 57:
      sub_435570(1, 0);
      if ( sub_47CC90(&unk_8C7458) )
      {
        sub_47CCD0(&unk_8C7458);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C7458, sub_458010, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 59:
      sub_435570(1, 0);
      if ( sub_47CC90(&unk_8C5B88) )
      {
        sub_47CCD0(&unk_8C5B88);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C5B88, sub_458070, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 81:
      sub_435570(1, 0);
      if ( sub_47CC90(&unk_8C6190) )
      {
        sub_47CCD0(&unk_8C6190);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C6190, sub_4580D0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 83:
      sub_435570(1, 0);
      if ( sub_47CC90(&unk_8C5DE8) )
      {
        sub_47CCD0(&unk_8C5DE8);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C5DE8, sub_458130, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 94:
      sub_435570(6, 0);
      if ( sub_47CC90(&unk_8C5F30) )
      {
        sub_47CCD0(&unk_8C5F30);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C5F30, sub_457F40, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 96:
      sub_435570(6, 0);
      if ( sub_47CC90(&unk_8C5CB8) )
      {
        sub_47CCD0(&unk_8C5CB8);
      }
      else
      {
        sub_458740();
        sub_47D1A0(&unk_8C5CB8, sub_457FB0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      break;
    case 97:
      sub_435570(1, 0);
      sub_458730(1950);
      break;
    case 98:
      sub_435570(1, 0);
      sub_458730(1980);
      break;
    case 99:
      sub_435570(1, 0);
      sub_458730(2000);
      break;
    case 163:
      sub_435570(1, 0);
      sub_458190();
      sub_47C920(1);
      goto LABEL_28;
    case 164:
      sub_435570(1, 0);
      sub_47C920(0);
LABEL_28:
      sub_47C930(v3, v2);
      break;
    default:
      break;
  }
  if ( (unsigned int)(a2 - 112) <= 5 )
    sub_435570(1, 0);
  if ( (unsigned int)(a2 - 42) <= 6 )
  {
    sub_435570(1, 0);
    v4 = *(unsigned __int8 **)(a1 + 296);
    v5 = v4[13833];
    v6 = (v4[13545] >> 1) & 1;
    v4 += 12096;
    if ( !(((v4[9] >> 1) & 1)
         + ((v4[297] >> 1) & 1)
         + ((v4[585] >> 1) & 1)
         + ((v4[873] >> 1) & 1)
         + ((v4[1161] >> 1) & 1)
         + v6
         + ((v5 >> 1) & 1)) )
      sub_4810E0(1);
  }
  result = *(_BYTE **)(a1 + 296);
  if ( (result[12105] & 2) != 0 && !dword_8C5A44 )
  {
    v8 = (((unsigned __int8)result[32553] >> 1) & 1)
       + (((unsigned __int8)result[32841] >> 1) & 1)
       + (((unsigned __int8)result[33129] >> 1) & 1)
       + (((unsigned __int8)result[33417] >> 1) & 1)
       + (((unsigned __int8)result[33705] >> 1) & 1);
    result = (_BYTE *)(((unsigned __int8)result[32265] >> 1) & 1);
    if ( !&result[v8] )
    {
      sub_4640D0(0);
      return (_BYTE *)sub_4810E0(1);
    }
  }
  return result;
}
