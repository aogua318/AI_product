// 函数 0x485ef0  sub_485EF0  size=0x89  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_485EF0(int *this)
{
  int v2; // edi
  int v3; // ebx
  HWND result; // eax
  int v6; // ecx
  bool v7; // zf
  int *v8; // eax
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 3) / 2;
  v3 = *(this + 2) / 2;
  sub_4840E0(this, v3 + *this, v2 + *(this + 1), &v9, &v10);
  if ( --*(this + 5) < 0 )
    *(this + 5) = *(this + 4) - 1;
  sub_4837C0(this, v9, v10, &v9, &v10);
  result = (HWND)(v9 - v3);
  v6 = v10 - v2;
  v7 = *(this + 16) == 0;
  *(this + 24) = v9 - v3;
  *(this + 25) = v6;
  if ( !v7 )
  {
    v8 = sub_483910(this);
    return sub_47C950(v8);
  }
  return result;
}
