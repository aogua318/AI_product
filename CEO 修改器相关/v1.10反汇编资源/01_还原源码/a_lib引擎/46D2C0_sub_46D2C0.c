// 函数 0x46d2c0  sub_46D2C0  size=0x2D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_46D2C0(HDC hdc, int *a2)
{
  HGDIOBJ CurrentObject; // edi

  sub_4688B0(a2);
  CurrentObject = GetCurrentObject(hdc, 7u);
  DeleteDC(hdc);
  return DeleteObject(CurrentObject);
}
