// 函数 0x4873e0  sub_4873E0  size=0xA3  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_4873E0(int *this)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  int v6; // ebx
  int *v7; // ecx
  HWND result; // eax
  unsigned int v9; // [esp+Ch] [ebp-8h] BYREF
  HWND v10; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 32);
  v3 = *(this + 33) * (dword_8EED88 - *(this + 29) - v2) / *(this + 31);
  v4 = (_DWORD *)*this;
  v5 = v4[22] + v3;
  v6 = v4[23] + *(this + 34) * (dword_8EED8C - *(this + 30)) / v2;
  sub_484020(v4, v5, v6, &v10, (int *)&v9);
  v7 = (int *)*this;
  result = v10;
  if ( (unsigned int)v10 < *(_DWORD *)(*this + 24) && v9 < v7[7] )
  {
    sub_484280(v7, (HWND)(v5 - *(this + 35) / 2), v6 - *(this + 36) / 2);
    result = sub_47C950(this + 25);
    *(this + 37) = 1;
  }
  return result;
}
