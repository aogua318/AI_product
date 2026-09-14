// 函数 0x459790  sub_459790  size=0x149  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_459790@<eax>(int a1@<eax>)
{
  int v2; // eax
  __int16 v4; // cx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v2 = dword_4B3838;
  if ( dword_4B3838 != a1 )
  {
    v2 = a1;
    dword_4B3838 = a1;
  }
  if ( v2 == -1 )
    return sub_47CCD0(&unk_8C5A58);
  sub_47E650(a1 + 6);
  v4 = word_89D13C[2 * *(__int16 *)(288 * a1 + dword_8C76B0 + 35726)];
  v5 = a1 + 1;
  *(_WORD *)(dword_8C5B80 + 1726) = v4;
  v6 = sub_4646A0(1, v5);
  sub_47FF50(v6);
  v7 = sub_4646A0(3, v5);
  sub_47FF50(v7);
  v8 = sub_4646A0(4, v5);
  sub_47FF50(v8);
  v9 = sub_4646A0(5, v5);
  sub_47FF50(v9);
  v10 = sub_4646A0(6, v5);
  sub_47FF50(v10);
  v11 = sub_4646A0(7, v5);
  sub_47FF50(v11);
  return sub_47D1A0(&unk_8C5A58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}
