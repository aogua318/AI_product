BOOL __stdcall sub_497085(int a1, int a2, __int16 a3)
{
  int v3; // eax
  int v4; // eax
  _DWORD v6[2]; // [esp+0h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v9 = 0; /*0x49708e*/
  v8 = 0; /*0x497095*/
  v7 = v6; /*0x49709c*/
  v3 = sub_4CED5B(2035711, 0); /*0x4970b1*/
  if ( v7 != v6 ) /*0x4970b9*/
    v3 = sub_4CED55(6); /*0x4970c0*/
  v9 = v3; /*0x4970c8*/
  v7 = v6; /*0x4970cb*/
  v6[1] = a3; /*0x4970dc*/
  v4 = sub_4CED5B(v3, a2); /*0x4970ee*/
  if ( v7 != v6 ) /*0x4970f6*/
    v4 = sub_4CED55(6); /*0x4970fd*/
  v8 = v4; /*0x497105*/
  v7 = v6; /*0x497108*/
  sub_4CED5B(v9, v6[0]); /*0x497113*/
  if ( v7 != v6 ) /*0x49711b*/
    sub_4CED55(6); /*0x497122*/
  return v8 != 0; /*0x49714d*/
}