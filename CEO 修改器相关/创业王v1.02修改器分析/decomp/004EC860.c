__int16 __cdecl sub_4EC860(int a1)
{
  __int16 (__stdcall *v1)(int); // edi
  __int16 v2; // si

  v1 = (__int16 (__stdcall *)(int))IAT_user32_GetKeyState;
  v2 = *(unsigned __int8 *)(a1 + 8);
  if ( (unsigned __int16)v2 >= 0x60u && (unsigned __int16)v2 <= 0x69u )
  {
    v2 -= 48;
    goto LABEL_4;
  }
  switch ( v2 )
  {
    case 'm':
      v2 = 189;
      break;
    case 'n':
      v2 = 190;
      break;
    case 'o':
      v2 = 191;
      break;
    default:
LABEL_4:
      if ( v2 == 17 )
        goto LABEL_7;
      break;
  }
  if ( (IAT_user32_GetKeyState(17) & 0x8000u) != 0 )
    v2 |= 0x2000u;
LABEL_7:
  if ( v2 != 16 && v1(16) < 0 )
    v2 |= 0x4000u;
  if ( v2 != 18 && v1(18) < 0 )
    return v2 | 0x8000;
  return v2;
}
