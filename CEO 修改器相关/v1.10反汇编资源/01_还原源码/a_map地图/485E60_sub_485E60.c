// 函数 0x485e60  sub_485E60  size=0x8F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_485E60(int *this)
{
  int v2; // edi
  int v3; // ebx
  HWND result; // eax
  bool v5; // zf
  int *v6; // eax
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 3) / 2;
  v3 = *(this + 2) / 2;
  sub_4840E0(this, v3 + *this, v2 + *(this + 1), &v7, &v8);
  if ( ++*(this + 5) >= *(this + 4) )
    *(this + 5) = 0;
  sub_4837C0(this, v7, v8, &v7, &v8);
  result = (HWND)(v8 - v2);
  v5 = *(this + 16) == 0;
  *(this + 24) = v7 - v3;
  *(this + 25) = (int)result;
  if ( !v5 )
  {
    v6 = sub_483910(this);
    return sub_47C950(v6);
  }
  return result;
}
