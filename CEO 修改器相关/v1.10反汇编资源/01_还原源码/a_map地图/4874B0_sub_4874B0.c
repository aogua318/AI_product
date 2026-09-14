// 函数 0x4874b0  sub_4874B0  size=0x120  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_4874B0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ecx
  int v14; // eax

  sub_4688B0(this + 13);
  sub_4688B0(this + 1);
  *(this + 36) = a4;
  *(this + 35) = a3;
  *(this + 27) = a5 + a7;
  *(this + 26) = a6;
  *(this + 28) = a8 + a6;
  *(this + 25) = a5;
  if ( a7 >= 2 * a8 )
  {
    *(this + 32) += -2 * a9;
    *(this + 31) = 2 * *(this + 32);
  }
  else
  {
    v10 = a7 - 2 * a9;
    *(this + 31) = v10;
    *(this + 32) = v10 / 2;
  }
  v11 = *(this + 31);
  v12 = *(this + 32);
  *(this + 29) = a5 + (a7 - v11) / 2;
  *(this + 30) = a6 + (a8 - v12) / 2;
  *this = (int)a2;
  v13 = a2[6];
  if ( a2[7] > v13 )
    v13 = a2[7];
  v14 = v13 * a2[8];
  *(this + 34) = v14;
  *(this + 33) = 2 * v14;
  sub_469880(this + 1, v11, v12, 16, 0);
  sub_469880(this + 13, *(this + 31), *(this + 32), 16, 0);
  unknown_libname_3(this + 1, 992);
  unknown_libname_3(this + 13, 992);
  sub_486BC0(this);
  return sub_487220(this);
}
