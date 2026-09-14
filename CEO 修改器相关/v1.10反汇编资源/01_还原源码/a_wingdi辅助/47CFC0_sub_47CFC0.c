// 函数 0x47cfc0  sub_47CFC0  size=0x8F  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_47CFC0(int a1, int a2)
{
  RECT Rect; // [esp+8h] [ebp-10h] BYREF

  sub_464B60(&Rect);
  dword_8EEDAC = a1;
  dword_8EEDB0 = a2;
  dword_8EEDB4 = 0;
  sub_47C580(&Rect);
  dword_8EEE2C = a2;
  dword_8EEE1C = a1;
  dword_8EEE24 = a1 != 0;
  dword_8EEE34 = a2 != 0;
  if ( a1 )
    sub_47C640(&dword_8EEE1C);
  else
    sub_47C550();
  return InvalidateRect(hWnd, &Rect, 0);
}
