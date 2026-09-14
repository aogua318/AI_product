// 函数 0x485b90  sub_485B90  size=0x83  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_485B90(int *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // edx
  HWND result; // eax
  char *v11; // ecx
  int v12; // [esp+Ch] [ebp-10h] BYREF
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  char *v15; // [esp+18h] [ebp-4h]

  sub_464B60(&v12);
  v3 = sub_485AE0((int)this, a2);
  sub_464CE0(&v12, v3);
  v4 = *this;
  v5 = v12;
  if ( v12 < *this )
  {
    v5 = *this;
    v12 = *this;
  }
  v6 = *(this + 1);
  v7 = v13;
  if ( v13 < v6 )
  {
    v7 = *(this + 1);
    v13 = v7;
  }
  v8 = *(this + 2) + v4;
  v9 = v14;
  if ( v14 >= v8 )
  {
    v9 = v8 - 1;
    v14 = v8 - 1;
  }
  result = (HWND)(v6 + *(this + 3));
  v11 = v15;
  if ( (int)v15 >= (int)result )
  {
    v11 = (char *)result - 1;
    v15 = (char *)result - 1;
  }
  if ( v5 < v9 && v7 < (int)v11 )
    return sub_47C950(&v12);
  return result;
}
