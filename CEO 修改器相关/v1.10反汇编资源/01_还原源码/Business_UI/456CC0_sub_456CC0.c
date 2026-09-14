// 函数 0x456cc0  sub_456CC0  size=0xFD  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_456CC0(int a1)
{
  int v1; // ecx
  int v2; // edi
  _DWORD v4[10]; // [esp+Ch] [ebp-2Ch]

  v2 = v1;
  v4[0] = 57;
  v4[1] = 48;
  v4[2] = 49;
  v4[3] = 50;
  v4[4] = 51;
  v4[5] = 52;
  v4[6] = 53;
  v4[7] = 54;
  v4[8] = 55;
  v4[9] = 56;
  if ( v1 >= 10 )
  {
    sub_467680(v4[v1 / 10]);
    sub_466CA0(&dword_8EEDEC, 110, 24 * a1 + 143);
    sub_467680(v4[v2 % 10]);
    return sub_466CA0(&dword_8EEDEC, 115, 24 * a1 + 143);
  }
  else
  {
    sub_467680(v4[v1]);
    return sub_466CA0(&dword_8EEDEC, 113, 24 * a1 + 143);
  }
}
